
#include "fonctions.h"

/*chaque fonction correspond a un type d'objet. La fonction est appelé chaque fois qu'une ligne representant ce type d'objet est rencontré, et elle créé le struct correspondant et l'enregistre dans tabGroupes ou (*tabObjets)*/
/****************************************************************************************************************/

void texteStatiqueToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type texte statique";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    o.valeur=o.nom;
    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;



}

void ligneToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type ligne";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;



}

void saisieTexteToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char* inttemp;
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type saisie texte";
    o.dansUnGroupe=0;
    i=0;
    inttemp=malloc(sizeof(char)*10);
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    o.valeur=o.nom;
    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;



}

void boutonPoussoirToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type bouton poussoir";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    o.valeur=o.nom;
    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void groupeToStruct(char* ligne,FILE* fhtml, int* nbGroupes, groupe** tabGroupes){
    char inttemp[10];
    int i,j,k;
    groupe o;
    o.nom=malloc(sizeof(char)*100);
    o.nbObjetsContenus=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabGroupes)=realloc((*tabGroupes),(*nbGroupes+1)*sizeof(groupe));
    (*tabGroupes)[*nbGroupes]=o;
    (*nbGroupes)++;



}

void bouton3DToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type bouton poussoir";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    o.valeur=o.nom;
    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void caseACocherToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type case à cocher";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void caseACocher3DToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type case à cocher 3D";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void listBoxToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type listbox";
    o.dansUnGroupe=0;
    o.tailleTab=3;
    o.tab=malloc(sizeof(char)*6);
    o.tab[0]=malloc(sizeof(char)*6);
    o.tab[0]="coucou";
    o.tab[1]="salut";
    o.tab[2]="bonjour";
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void listeHierarchiqueToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type liste hiérarchique";
    o.dansUnGroupe=0;
    o.tailleTab=3;
    o.tab=malloc(sizeof(char)*6);
    o.tab[0]=malloc(sizeof(char)*6);
    o.tab[0]="coucou";
    o.tab[1]="salut";
    o.tab[2]="bonjour";
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void popupListeDeroulanteToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type popup liste déroulante";
    o.dansUnGroupe=0;
    o.tailleTab=3;
    o.tab=malloc(sizeof(char)*6);
    o.tab[0]=malloc(sizeof(char)*6);
    o.tab[0]="hello world";
    o.tab[1]="bonjour le monde";
    o.tab[2]="hallo welt";
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void ovaleToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type ovale";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void rectangleToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type rectangle";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void rectangleArrondiToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type rectangle arrondi";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void imageStatiqueToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type image statique";
    o.dansUnGroupe=0;
    o.valeur="4d_image_exemple.jpg";
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;


}

void separateurToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type séparateur";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;



}

void grilleDeBoutonsToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets){
    char inttemp[10];
    int i,j,k;
    objet o;
    o.nom=malloc(sizeof(char)*100);
    o.type=malloc(sizeof(char)*25);
    o.type="Objet type grille de boutons";
    o.dansUnGroupe=0;
    i=0;
    while(ligne[i]!='n'||ligne[i+1]!='a'||ligne[i+2]!='m'||ligne[i+3]!='e'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        o.nom[j]=ligne[i];
        j=j+1;
        i=i+1;
        o.tailleNom=j;
    }
    while(ligne[i]!='l'||ligne[i+1]!='e'||ligne[i+2]!='f'||ligne[i+3]!='t'||ligne[i+4]!='='||ligne[i+5]!='"'){
        i=i+1;
    }
    i=i+6;
    j=0;
    while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.left=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='t'||ligne[i+1]!='o'||ligne[i+2]!='p'||ligne[i+3]!='='||ligne[i+4]!='"'){
        i=i+1;
    }
    i=i+5;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.top=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='r'||ligne[i+1]!='i'||ligne[i+2]!='g'||ligne[i+3]!='h'||ligne[i+4]!='t'||ligne[i+5]!='='||ligne[i+6]!='"'){
        i=i+1;
    }
    i=i+7;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.right=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }
    while(ligne[i]!='b'||ligne[i+1]!='o'||ligne[i+2]!='t'||ligne[i+3]!='t'||ligne[i+4]!='o'||ligne[i+5]!='m'||ligne[i+6]!='='||ligne[i+7]!='"'){
        i=i+1;
    }
    i=i+8;
    j=0;
     while(ligne[i]!='"'){
        inttemp[j]=ligne[i];
        j=j+1;
        i=i+1;
    }
    o.bottom=(atoi(inttemp));
    for(k=0;k<10;k++){
        inttemp[k]=0;
    }

    (*tabObjets)=realloc((*tabObjets),(*nbObjets+1)*sizeof(objet));
    (*tabObjets)[*nbObjets]=o;
    (*nbObjets)++;



}
/****************************************************************************************************************/



/*chaque fonction correspond a un type d'objet. La fonction est appelé chaque fois qu'une objet correspondant a ce type d'objet est rencontré, elle ecris alors le html correspondant dans fhtml*/
/****************************************************************************************************************/
void texteStatiqueToHtml(objet o, FILE* fhtml){
    int i;
    fprintf( fhtml, "%s", "\t<p>");

    fprintf( fhtml, "%s", o.valeur);

    fprintf( fhtml, "%s", "</p>\n");
}

void ligneToHtml(objet o, FILE* fhtml){
    fprintf( fhtml, "%s", "\t<svg height=\"1000000\" width=\"10000000\">\n");
    fprintf( fhtml, "%s", "\t  <line x1=\"");
    fprintf( fhtml, "%d", o.left);
    fprintf( fhtml, "%s", "\" y1=\"");
    fprintf( fhtml, "%d", 0);
    fprintf( fhtml, "%s", "\" x2=\"");
    fprintf( fhtml, "%d", o.right);
    fprintf( fhtml, "%s", "\" y2=\"");
    fprintf( fhtml, "%d", o.bottom-o.top);
    fprintf( fhtml, "%s", "\" style=\"stroke:rgb(0,0,0);stroke-width:2\" />");
    fprintf( fhtml, "%s", "</svg>\n");

}

void saisieTexteToHtml(objet o, FILE* fhtml){
    int i;
    fprintf( fhtml, "%s", "\t");

    fprintf( fhtml, "%s", o.valeur);

    fprintf( fhtml, "%s", ": <input type=\"text\" value=\"\">\n");

}

void boutonPoussoirToHtml(objet o, FILE* fhtml){
    int i;
    fprintf( fhtml, "%s", "\t<button type=\"button\" onclick=\"alert('");
    fprintf( fhtml, "%s", " ");/*retrour du bouton*/
    fprintf( fhtml, "%s", "')\">");
    fprintf( fhtml, "%s", o.valeur);
    fprintf( fhtml, "%s", "</button>\n");

}

void bouton3DToHtml(objet o, FILE* fhtml){
    int i;
    fprintf( fhtml, "%s", "\t<button type=\"button\" onclick=\"alert('");
    fprintf( fhtml, "%s", " ");/*retrour du bouton*/
    fprintf( fhtml, "%s", "')\">");
    fprintf( fhtml, "%s", o.valeur);
    fprintf( fhtml, "%s", "</button>\n");

}

void caseACocherToHtml(objet o, FILE* fhtml){
    fprintf( fhtml, "%s", "\t<input type=\"checkbox\" checked> ");
}

void caseACocher3DToHtml(objet o, FILE* fhtml){
    fprintf( fhtml, "%s", "\t<input type=\"checkbox\" checked> ");
}

void listBoxToHtml(objet o, FILE* fhtml){
    int i;
    fprintf( fhtml, "%s", "\t<ul>\n");
    for(i=0;i<o.tailleTab;i++){
        fprintf(fhtml,"%s","\t\t<li>");
        fprintf(fhtml,"%s",o.tab[i]);
        fprintf(fhtml,"%s","</li>\n");
    }
    fprintf( fhtml, "%s", "\t</ul> \n");
}

void listeHierarchiqueToHtml(objet o, FILE* fhtml){
    int i;
    fprintf( fhtml, "%s", "\t<ol>\n");
    for(i=0;i<o.tailleTab;i++){
        fprintf(fhtml,"%s","\t\t<li>");
        fprintf(fhtml,"%s",o.tab[i]);
        fprintf(fhtml,"%s","</li>\n");
    }
    fprintf( fhtml, "%s", "\t</ol> \n");
}

void popupListeDeroulanteToHtml(objet o, FILE* fhtml){
    int i;
    fprintf( fhtml, "%s", "\t<select>\n");
    for(i=0;i<o.tailleTab;i++){
        fprintf(fhtml,"%s","\t\t<option value=\"");
        fprintf(fhtml,"%s",o.tab[i]);
        fprintf(fhtml,"%s","\">");
        fprintf(fhtml,"%s",o.tab[i]);
        fprintf(fhtml,"%s","</option>\n");
    }
    fprintf( fhtml, "%s", "\t</select> \n");

}

void ovaleToHtml(objet o, FILE* fhtml){


    fprintf( fhtml, "%s", "\t<div class=\"h");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\"></div>\n");


}

void rectangleToHtml(objet o, FILE* fhtml){


    fprintf( fhtml, "%s", "\t<div class=\"h");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\"></div>\n");


}

void rectangleArrondiToHtml(objet o, FILE* fhtml){


    fprintf( fhtml, "%s", "\t<div class=\"h");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\"></div>\n");


}

void imageStatiqueToHtml(objet o, FILE* fhtml){


    fprintf( fhtml, "%s", "\t<img src=\"");
    fprintf( fhtml, "%s", o.valeur);
    fprintf( fhtml, "%s", "\" alt=\"trulli\" width=\"");
    fprintf( fhtml, "%d", o.right-o.left);
    fprintf( fhtml, "%s", "\" height=\"");
    fprintf( fhtml, "%d", o.bottom-o.top);
    fprintf( fhtml, "%s", "\">\n");



}

void separateurToHtml(objet o, FILE* fhtml){
    fprintf( fhtml, "%s", "\t<svg height=\"210\" width=\"500\">\n");
    fprintf( fhtml, "%s", "\t  <line x1=\"");
    fprintf( fhtml, "%d", o.left);
    fprintf( fhtml, "%s", "\" y1=\"");
    fprintf( fhtml, "%d", o.top);
    fprintf( fhtml, "%s", "\" x2=\"");
    fprintf( fhtml, "%d", o.right);
    fprintf( fhtml, "%s", "\" y2=\"");
    fprintf( fhtml, "%d", o.bottom);
    fprintf( fhtml, "%s", "\" style=\"stroke:rgb(0,0,0);stroke-width:2\" />");
    fprintf( fhtml, "%s", "</svg>\n");

}

void grilleDeBoutonsToHtml(objet o, FILE* fhtml){



    fprintf( fhtml, "%s", "\t<div class=\"btn-group");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\">\n");

    fprintf( fhtml, "%s", "\t<div class=\"btn-line");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\">\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t</div>\n");
    fprintf( fhtml, "%s", "\t<div class=\"btn-line");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\">\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t</div>\n");
    fprintf( fhtml, "%s", "\t<div class=\"btn-line");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\">\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t</div>\n");
    fprintf( fhtml, "%s", "\t<div class=\"btn-line");
    fprintf( fhtml, "%d", o.style);
    fprintf( fhtml, "%s", "\">\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t\t<button class=\"button\">Button</button>\n");
    fprintf( fhtml, "%s", "\t</div>\n");
    fprintf( fhtml, "%s", "</div>\n");

}

/****************************************************************************************************************/


void groupeToCss (groupe* g, FILE* fcss,int* numStyle){
int height;
int width;
int i;

        fprintf( fcss, "%s", ".flex-container");
        fprintf(fcss, "%d", (*numStyle)) ;
        fprintf( fcss, "%s", " {\n");
        /*partie placement : place la flexbox en fonction de ses coordonnées*/
        fprintf( fcss, "%s", "\tposition: absolute;\n");
        fprintf( fcss, "\tleft: ");
        fprintf(fcss, "%d", (g->left)) ;
        fprintf( fcss, "%s", "px;\n");
        fprintf( fcss, "%s", "\ttop: ");
        fprintf(fcss, "%d", (g->top)) ;
        fprintf( fcss, "%s", "px;\n");
        /*fin de la partie placement*/

        /*partie style : determine l'apparence de la flexbox*/
        fprintf( fcss, "%s", "\tdisplay: flex;\n");
        fprintf( fcss, "%s", "\tbackground-color: Gray;\n");
        fprintf( fcss, "%s", "}\n\n");
        fprintf( fcss, "%s", ".flex-container");
        fprintf(fcss, "%d", (*numStyle)) ;
        fprintf( fcss, "%s", " > div {\n");
        fprintf( fcss, "%s", "\theight: ");


        fprintf( fcss, "%s", "\tbackground-color: #f1f1f1;\n");
     /*   fprintf( fcss, "%s", "\tmargin: 10px;\n");
        fprintf( fcss, "%s", "\tpadding: 20px;\n");
        fprintf( fcss, "%s", "\tfont-size: 30px\n");
        fprintf( fcss, "%s", "}\n");*/
        /*fin de la partie style*/

        g->style=(*numStyle);
        (*numStyle)++;


}

void ovaleToCss(objet* o, FILE* fcss, int* numStyle){
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
    fprintf( fcss, "%s", "\theight: ");
    fprintf( fcss, "%d", o->bottom-o->top);
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\twidth: ");
    fprintf( fcss, "%d", o->right-o->left);
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\tbackground-color: #555;\n");
    fprintf( fcss, "%s", "\tborder-radius: 50%;\n");
}

void rectangleToCss(objet* o, FILE* fcss, int* numStyle){
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
    fprintf( fcss, "%s", "\theight: ");
    fprintf( fcss, "%d", o->bottom-o->top);
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\twidth: ");
    fprintf( fcss, "%d", o->right-o->left);
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\tbackground-color: #555;\n");
}

void rectangleArrondiToCss(objet* o, FILE* fcss, int* numStyle){
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
    fprintf( fcss, "%s", "\theight: ");
    fprintf( fcss, "%d", o->bottom-o->top);
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\twidth: ");
    fprintf( fcss, "%d", o->right-o->left);
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\tborder-radius: 25px;\n");
    fprintf( fcss, "%s", "\tbackground-color: #555;\n");
}

void grilleDeBoutonsToCss(objet* o, FILE* fcss, int* numStyle){
    fprintf( fcss, "%s", ".btn-group ");
    fprintf(fcss, "%d", (*numStyle)) ;
    fprintf( fcss, "%s", ".button {\n");
    fprintf( fcss, "%s", "\tposition: absolute;\n");
    fprintf( fcss, "%s", "\tleft: ");
    fprintf(fcss, "%d", (o->left)) ;
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\ttop: ");
    fprintf(fcss,"%d", (o->top)) ;
    fprintf( fcss, "%s", "px;\n");
    fprintf( fcss, "%s", "\tbackground-color: #4CAF50;\n");
    fprintf( fcss, "%s", "\tborder: 1px solid green;\n");
    fprintf( fcss, "%s", "\tcolor: white;\n");
    fprintf( fcss, "%s", "\tpadding: 15px 32px;\n");
    fprintf( fcss, "%s", "\ttext-align: center;\n");
    fprintf( fcss, "%s", "\tdisplay: inline-block;\n");
    fprintf( fcss, "%s", "\tfont-size: 16px;\n");
    fprintf( fcss, "%s", "\tcursor: pointer;\n");
    fprintf( fcss, "%s", "\twidth: 150px;\n");
    fprintf( fcss, "%s", "\tdisplay: block;\n");
    fprintf( fcss, "%s", "\t}\n");
    fprintf( fcss, "%s", "\t\n");
    fprintf( fcss, "%s", "\t.btn-group .button:not(:last-child) {\n");
    fprintf( fcss, "%s", "\tborder-bottom: none;\n");
    fprintf( fcss, "%s", "\t}\n");
    fprintf( fcss, "%s", "\t.btn-group .button:hover {\n");
    fprintf( fcss, "%s", "\tbackground-color: #3e8e41;\n");
    fprintf( fcss, "%s", "\t}\n");
    fprintf( fcss, "%s", "\t\n");
    fprintf( fcss, "%s", ".btn-line");
    fprintf(fcss, "%d", numStyle) ;
    fprintf( fcss, "%s", " .button {\n");
    fprintf( fcss, "%s", "\tposition: relative;\n");
    fprintf( fcss, "%s", "\tbackground-color: #4CAF50;\n");
    fprintf( fcss, "%s", "\tborder: 1px solid green;\n");
    fprintf( fcss, "%s", "\tcolor: white;\n");
    fprintf( fcss, "%s", "\tpadding: 15px 32px;\n");
    fprintf( fcss, "%s", "\ttext-align: center;\n");
    fprintf( fcss, "%s", "\ttext-decoration: none;\n");
    fprintf( fcss, "%s", "\tdisplay: inline-block;\n");
    fprintf( fcss, "%s", "\tfont-size: 16px;\n");
    fprintf( fcss, "%s", "\tcursor: pointer;\n");
    fprintf( fcss, "%s", "\tfloat: left;\n");
    fprintf( fcss, "%s", "\t}\n");
    fprintf( fcss, "%s", "\t.btn-line .button:not(:last-child) {\n");
    fprintf( fcss, "%s", "\tborder-right: none;\n");
    fprintf( fcss, "%s", "\t}\n");
    fprintf( fcss, "%s", "\t.btn-line .button:hover {\n");
    fprintf( fcss, "%s", "\tbackground-color: #3e8e41;\n");
    fprintf( fcss, "%s", "\t}\n");
}
