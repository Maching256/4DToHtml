#include <stdlib.h>    /* Pour exit, EXIT_FAILURE, EXIT_SUCCESS */
#include <stdio.h>     /* Pour fopen, fclose, fread */
#include <string.h>


typedef struct {
    char* nom;
    char* type;
    char* valeur; /*contenu de l'objet, texte, adresse d'image, etc*/
    int tailleNom;
    int left;
    int top;
    int right;
    int bottom;
    int dansUnGroupe; /*0=non, 1=oui*/
    int style;
    char** tab; //dans le cas des listn etc
    int tailleTab;
}objet;

typedef struct  {
    char* nom;
    int tailleNom;
    int left;
    int top;
    int right;
    int bottom;
    int nbObjetsContenus;
    objet* objetsContenus;
    int style;
} groupe;



void texteStatiqueToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void ligneToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void saisieTexteToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void boutonPoussoirToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void groupeToStruct(char* ligne,FILE* fhtml, int* nbGroupes, groupe** tabGroupes);

void bouton3DToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void caseACocherToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void caseACocher3DToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void listBoxToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void listeHierarchiqueToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void popupListeDeroulanteToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void ovaleToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void rectangleToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void rectangleArrondiToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void imageStatiqueToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void separateurToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);

void grilleDeBoutonsToStruct(char* ligne,FILE* fhtml, int* nbObjets, objet** tabObjets);




/*chaque fonction correspond a un type d'objet. La fonction est appelé chaque fois qu'une objet correspondant a ce type d'objet est rencontré, elle ecris alors le html correspondant dans fhtml*/
/****************************************************************************************************************/
void texteStatiqueToHtml(objet o, FILE* fhtml);

void ligneToHtml(objet o, FILE* fhtml);

void saisieTexteToHtml(objet o, FILE* fhtml);

void bouton3DToHtml(objet o, FILE* fhtml);

void caseACocherToHtml(objet o, FILE* fhtml);

void caseACocher3DToHtml(objet o, FILE* fhtml);

void listBoxToHtml(objet o, FILE* fhtml);

void listeHierarchiqueToHtml(objet o, FILE* fhtml);

void popupListeDeroulanteToHtml(objet o, FILE* fhtml);

void ovaleToHtml(objet o, FILE* fhtml);

void rectangleToHtml(objet o, FILE* fhtml);

void rectangleArrondiToHtml(objet o, FILE* fhtml);

void imageStatiqueToHtml(objet o, FILE* fhtml);

void separateurToHtml(objet o, FILE* fhtml);

void grilleDeBoutonsToHtml(objet o, FILE* fhtml);

/****************************************************************************************************************/
void groupeToCss (groupe* g, FILE* fcss,int* numStyle);

void ovaleToCss(objet* o, FILE* fcss, int* numStyle);

void rectangleToCss(objet* o, FILE* fcss, int* numStyle);

void rectangleArrondiToCss(objet* o, FILE* fcss, int* numStyle);

void grilleDeBoutonsToCss(objet* o, FILE* fcss, int* numStyle);
