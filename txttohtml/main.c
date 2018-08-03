
#include <stdlib.h>    /* Pour exit, EXIT_FAILURE, EXIT_SUCCESS */
#include <stdio.h>     /* Pour fopen, fclose, fread */
#include <string.h>
#include "fonctions.h"


//int numStyle;


void afficherObjet(objet o){
    int i=0;

    printf("nom : ");
    for(i=0;i<(o.tailleNom);i++){
        printf("%c",o.nom[i]);
    }
    printf("\n");
    printf("left : %d \n",o.left);
    printf("top : %d \n",o.top);
    printf("right : %d \n",o.right);
    printf("bottom : %d \n",o.bottom);
    printf("dans un groupe : %d\n",o.dansUnGroupe);
    printf("numero de style associe : %d\n",o.style);
    printf("\n");

}

/*prend en paramettre un struct objet, et ecris le html associé dans fhtml*/
void structToHtml(objet o,FILE* fhtml){

            if(strncmp(o.type,"Objet type texte statique",strlen("Objet type texte statique"))==0){
                texteStatiqueToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type ligne",strlen("Objet type ligne"))==0){
                ligneToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type saisie texte",strlen("Objet type saisie texte"))==0){
               saisieTexteToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type bouton poussoir",strlen("Objet type bouton poussoir"))==0){
                boutonPoussoirToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type bouton 3D",strlen("Objet type bouton 3D"))==0){
                bouton3DToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type case à cocher",strlen("Objet type case à cocher"))==0){
                caseACocherToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type case à cocher 3D",strlen("Objet type case à cocher 3D"))==0){
                caseACocher3DToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type listbox",strlen("Objet type listbox"))==0){
                listBoxToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type liste hiérarchique",strlen("Objet type liste hiérarchique"))==0){
                listeHierarchiqueToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type popup liste déroulante",strlen("Objet type liste déroulante"))==0){
                popupListeDeroulanteToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type ovale",strlen("Objet type ovale"))==0){
                ovaleToHtml(o,fhtml);
            }
            if((strncmp(o.type,"Objet type rectangle",strlen("Objet type rectangle"))==0)&&(strncmp(o.type,"Objet type rectangle arrondi",strlen("Objet type rectangle arondi"))!=0)){
                rectangleToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type rectangle arrondi",strlen("Objet type rectangle arondi"))==0){
                rectangleArrondiToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type image statique",strlen("Objet type image statique"))==0){
                imageStatiqueToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type séparateur",strlen("Objet type séparateur"))==0){
                separateurToHtml(o,fhtml);
            }
            if(strncmp(o.type,"Objet type grille de boutons",strlen("Objet type grille de boutons"))==0){
                grilleDeBoutonsToHtml(o,fhtml);
            }
}

/*fonctions generant le css pour les objets necessitant un css autre qu'un simple placement*/
/*genere le CSS associé a l'objet (le placement de l'objet notament) et l'ecris dans fcss*/
void objetToCss (objet* o, FILE* fcss,int* numStyle){

                if(strncmp(o->type,"Objet type ovale",strlen("Objet type ovale"))==0){
                    ovaleToCss(o,fcss,numStyle);
                }
                else if((strncmp(o->type,"Objet type rectangle",strlen("Objet type rectangle"))==0)&&(strncmp(o->type,"Objet type rectangle arrondi",strlen("Objet type rectangle arrondi"))!=0)){
                    rectangleToCss(o,fcss,numStyle);
                }
                else if(strncmp(o->type,"Objet type rectangle arrondi",strlen("Objet type rectangle arrondi"))==0){
                    rectangleArrondiToCss(o,fcss,numStyle);
                }
                else if(strncmp(o->type,"Objet type grille de boutons",strlen("Objet type grille de boutons"))==0){
                    grilleDeBoutonsToCss(o,fcss,numStyle);

                }
                else {
                    fprintf( fcss, "%s", "h");
                    fprintf(fcss, "%d", (*numStyle)) ;
                    fprintf( fcss, "%s", "{\n");
                    fprintf( fcss, "%s", "\tposition: absolute;\n");
                    fprintf( fcss, "%s", "\tleft: ");
                    fprintf(fcss, "%d", (o->left)) ;
                    fprintf( fcss, "%s", "px;\n");
                    fprintf( fcss, "%s", "\ttop: ");
                    fprintf(fcss,"%d", (o->top)) ;
                    fprintf( fcss, "%s", "px;\n");
                }
                fprintf( fcss, "%s", "}\n");
                o->style=(*numStyle);
                (*numStyle)++;


}

/*genere le CSS associé au groupe (le placement du groupe notament) et l'ecris dans fcss*/


/*prend en paramettre un struct objet, et ecris le html associé a l'objet et a ses coorodnnées dans fhtml*/
void structToHtmlAndCss(objet o,FILE* fhtml){

    if(o.type!="Objet type ligne"&&o.type!="Objet type séparateur"){
                printf( "%s \n",o.nom);
                fprintf( fhtml, "%s", "<h");
                fprintf(fhtml, "%d", o.style) ;
                fprintf( fhtml, "%s", ">\n");
                structToHtml(o,fhtml);
                fprintf( fhtml, "%s", "</h");
                fprintf(fhtml, "%d", o.style) ;
                fprintf( fhtml, "%s", ">\n\n");
    }
    else{
                structToHtml(o,fhtml);
    }
}

/*cet fonction transforme les structs contenues dans tabObjets et tabGroupe en code html et css. Il s'agit de la fonction principale qui appelera les autres*/
void creationHtmlAndCss(FILE*fhtml,FILE*fcss,int nbObjets, objet** tabObjets, int nbGroupes, groupe** tabGroupes, int* numStyle){
    int i,j;


    for(i=0;i<nbObjets;i++){
        (*tabObjets)[i].style=0; /*met style a zero pour les objets qui ne valideront pas la conditions suivante, cet a dire les objets appartenant a un groupe.*/
        if((*tabObjets)[i].dansUnGroupe==0){
            objetToCss((&(*tabObjets)[i]),fcss,numStyle);
        }
    }
    for(i=0;i<nbGroupes;i++){
            groupeToCss(tabGroupes[i],fcss,numStyle);
    }



    for(i=0;i<nbObjets;i++){
        if((*tabObjets)[i].dansUnGroupe==0){
            structToHtmlAndCss((*tabObjets)[i],fhtml);
        }
    }
    for(i=0;i<nbGroupes;i++){



        /*ecriture des objets appartenant a la flexbox*/
        fprintf( fhtml, "%s", "<div class=\"flex-container");
        fprintf(fhtml, "%d", (*tabGroupes)[i].style) ;
        fprintf( fhtml, "%s", "\">\n");

        for(j=0;j<(*tabGroupes)[i].nbObjetsContenus;j++){

            fprintf( fhtml, "%s", "\t<div");
            fprintf( fhtml, "%s", " style=\"flex-basis: ");
            fprintf(fhtml, "%d", ((*tabGroupes)[i].objetsContenus[j].right)-((*tabGroupes)[i].objetsContenus[j].left)) ;
            fprintf( fhtml, "%s", "px\"");
            fprintf( fhtml, "%s", ">\n\t");
            structToHtml((*tabGroupes)[i].objetsContenus[j],fhtml);
            fprintf( fhtml, "%s", "\t</div>\n\n");

        }
            fprintf( fhtml, "%s", "</div>\n\n");
    }
}

/*verifie pour tous les objets si ils appartiennent a un groupe, et modifie dansUnGroupe etobjetsContenus en consequence*/
void remplirGroupes(int nbObjets, objet** tabObjets, int nbGroupes, groupe** tabGroupes){
int i;
int j;
    for(j=0;j<nbGroupes;j++){
       (*tabGroupes)[j].objetsContenus=malloc(sizeof(groupe));
    }
    for(i=0;i<nbObjets;i++){
         for(j=0;j<nbGroupes;j++){
            if((((*tabObjets)[i].left)>=((*tabGroupes)[j].left))
               &&(((*tabObjets)[i].right)<=((*tabGroupes)[j].right))
               &&(((*tabObjets)[i].top)>=((*tabGroupes)[j].top))
               &&(((*tabObjets)[i].bottom)<=((*tabGroupes)[j].bottom))){
                //afficherObjet(tabObjets[i]);
                (*tabObjets)[i].dansUnGroupe=1;
                (*tabGroupes)[j].nbObjetsContenus++;

                (*tabGroupes)[j].objetsContenus=realloc((*tabGroupes)[j].objetsContenus,sizeof(objet)*(*tabGroupes)[j].nbObjetsContenus);
                (*tabGroupes)[j].objetsContenus[(*tabGroupes)[j].nbObjetsContenus-1]=(*tabObjets)[i];
                //afficherObjet(tabObjets[i]);
            }
         }
    }

}

/*prend en parametre une ligne du texte, et appelle la fonction de création d'objet html correspondant*/
/*renvoi 1 si il s'agit de la derniere ligne, 0 sinon*/
int analyserLigne(char* ligne,int tailleLigne,FILE* fhtml,int* nbObjets, objet** tabObjets, int* nbGroupes, groupe** tabGroupes){
    int i,j;
    char typeObj[100];
    int r=0;

    if(ligne[0]=='<'&&ligne[1]=='f'&&ligne[2]=='o'&&ligne[3]=='r'&&ligne[4]=='m'&&ligne[5]=='>'){

    }

    else{

        if(ligne[0]=='<'&&ligne[1]=='/'&&ligne[2]=='f'&&ligne[3]=='o'&&ligne[4]=='r'&&ligne[5]=='m'&&ligne[6]=='>'){
            r=1;
        }
        else{

            i=0;
            while(ligne[i]!='t'||ligne[i+1]!='y'||ligne[i+2]!='p'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
                i=i+1;
            }
            i=i+6;
            j=0;
            while(ligne[i]!='"'){
                typeObj[j]=ligne[i];
                j=j+1;
                i=i+1;
            }


            if(strncmp(typeObj,"Objet type texte statique",25)==0){
                texteStatiqueToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type ligne",16)==0){
                ligneToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type saisie texte",23)==0){
                saisieTexteToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type bouton poussoir",26)==0){
                boutonPoussoirToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type zone de groupe",25)==0){
                groupeToStruct(ligne,fhtml,nbGroupes,tabGroupes);
            }
            if(strncmp(typeObj,"Objet type bouton 3D",20)==0){
                bouton3DToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type case à cocher",20)==0){
                caseACocherToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type case à cocher 3D",20)==0){
                caseACocher3DToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type listbox",18)==0){
                listBoxToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type liste hiérarchique",18)==0){
                listeHierarchiqueToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type popup liste déroulante",33)==0){
                popupListeDeroulanteToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type ovale",16)==0){
                ovaleToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if((strncmp(typeObj,"Objet type rectangle",20)==0)&&(strncmp(typeObj,"Objet type rectangle arrondi",28)!=0)){
                rectangleToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type rectangle arrondi",28)==0){
                rectangleArrondiToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type image statique",25)==0){
                imageStatiqueToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type séparateur",21)==0){
                separateurToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
            if(strncmp(typeObj,"Objet type grille de boutons",28)==0){
                grilleDeBoutonsToStruct(ligne,fhtml,nbObjets,tabObjets);
            }
        }

    }
            /*for(i=0;i<tailleLigne;i++){
            car=ligne[i];
            printf("%c",car);*/

return r;
}

/*le main lit le fichier txt, et pour chaque ligne (la fin d'une ligne étant marquée par >) appelle la fonction analysierLigne*/
int main() {

    char* ligne;
    int i;
    FILE *ftxt;       /* Descripteur de fichier */
    FILE *fhtml;
    FILE *fcss;
    char car;      /* Caractere lu */
    int tailleLigne;
    int fin=0;
    int nbObjets;
    groupe* tabGroupes;
    int nbGroupes;
    objet* tabObjets;
    int numStyle;

    nbGroupes=0;
    nbObjets=0;
    numStyle=1;

    /*temporaire, normalement la memoire devrait etre dynamiquement alloué par les realloc*/
    ligne=malloc(sizeof(char)*1);
    tabGroupes=malloc(sizeof(groupe)*1);
    tabObjets=malloc(sizeof(objet)*1);
    /* Ouverture du fichier */
    if((ftxt = fopen("aanalyser.txt", "r")) == NULL) {
        perror("Erreur lors de l'ouverture du fichier ");
        exit(EXIT_FAILURE);
    }
    if((fcss = fopen("style.css", "w")) == NULL) {
        perror("Erreur lors de l'ouverture du fichier ");
        exit(EXIT_FAILURE);
    }

    if((fhtml = fopen("fichierResultat.html", "w")) == NULL) {
        perror("Erreur lors de l'ouverture du fichier ");
        exit(EXIT_FAILURE);
    }

    fprintf( fhtml, "%s", "<!DOCTYPE html>\n<html>\n");
    fprintf( fhtml, "%s", "<head>\n<link rel=\"stylesheet\" href=\"style.css\">\n</head>\n");
    fprintf( fhtml, "%s", "<body>\n");





 /*lecture de toutes les lignes*/

    while(fin==0) {
        tailleLigne=0;
        i=0;
        fread(&car, sizeof(char), 1, ftxt);
        tailleLigne++;
        ligne=realloc(ligne,sizeof(char)*(tailleLigne));
        ligne[i]=car;
        i++;
        printf("\n");

        while(car!='>'){
            if(fread(&car, sizeof(char), 1, ftxt) == 0) {
                if(ferror(ftxt)) {
                    perror("Erreur lors de la lecture d'un caractere ");
                    exit(EXIT_FAILURE);
                }
            }
            else{
                tailleLigne++;
                ligne=realloc(ligne,sizeof(char)*tailleLigne);
                ligne[i]=car;
                printf("%c",ligne[i]);
                i++;
            }
        }
        //quand le "<" est reperé il ne faut pas s'arreter immédiatement mais lire encore un caractere (le >)/
      if(fread(&car, sizeof(char), 1, ftxt) == 0) {
            if(ferror(ftxt)) {
                perror("Erreur lors de la lecture d'un caractere ");
                exit(EXIT_FAILURE);
            }
        }
        else{
            tailleLigne++;
            ligne=realloc(ligne,sizeof(char)*tailleLigne);
            ligne[i]=car;
            printf("%c",ligne[i]);
            i++;
        }
    fin=analyserLigne(ligne,tailleLigne,fhtml,&nbObjets,&tabObjets,&nbGroupes,&tabGroupes);
    }

    remplirGroupes(nbObjets,&tabObjets,nbGroupes,&tabGroupes);
    creationHtmlAndCss(fhtml,fcss,nbObjets,&tabObjets,nbGroupes,&tabGroupes,&numStyle);

  /* Fermeture du fichier */
    if(fclose(ftxt) == EOF) {
        perror("Erreur lors de la fermeture du fichier ");
        exit(EXIT_FAILURE);
    }

    fprintf( fhtml, "%s", "</body>\n</html>");


  /* Fermeture du fichier */
    if(fclose(fhtml) == EOF) {
        perror("Erreur lors de la fermeture du fichier ");
        exit(EXIT_FAILURE);
    }

  for(i=0;i<nbObjets;i++){
    afficherObjet(tabObjets[i]);
  }



  return EXIT_SUCCESS;
}


