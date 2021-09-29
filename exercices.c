//
// Created by morga on 29/09/2021.
//

#include <stdio.h>
#include "mes_fonctions.h"

void Exercice_1()
{
    int entier1=0, entier2=0;
    entier1=saisirEntier();
    entier2=saisirEntier();
    getMax(entier1, entier2);
    return;
}

int Exercice_2()
{
    int n=0;
    n=saisirEntier();
    return(n);
}

int Exercice_3()
{
    int longueur=0, largeur=0, aire=0, perimetre=0;
    longueur=saisirEntier();
    largeur=saisirEntier();
    aire=calculAire(longueur, largeur);
    perimetre=calculPerimetre(longueur, largeur);
    return(aire, perimetre);
}

#define MAX 10

int Exercice_4()
{
    int a=0, b=0, aMult3=-1, bMult3=-1, aSupMax=-1, bSupMax=-1;
    a=saisirEntier();
    aMult3= multiple3(a);
    aSupMax= superieurMax(a,MAX);
    b=saisirEntier();
    bMult3=multiple3(b);
    bSupMax= superieurMax(b, MAX);
    if (a%b==0)
    {
        printf("%d est un multiple de %d\n", a, b);
        return(1);
    }
    else
    {
        printf("%d n'est pas un multiple de %d\n", a, b);
        return(0);
    }
}


float Exercice_5()
{
    float moy=0.0f;
    int note1=0, note2=0, note3=0;
    note1=saisirEntier();
    note2=saisirEntier();
    note3=saisirEntier();
    moy=moyenne( (float) note1, (float) note2, (float) note3);
    return(moy);
}


int Exercice_7()
{
    int Nombre_Classe=0,Total_Eleve=0;
    Nombre_Classe=saisirEntier();
    for (int i=1;i<=Nombre_Classe;i++)
    {
        int Nombre_Eleve=0;
       Nombre_Eleve=saisirEntier();
        Total_Eleve = Total_Eleve + Nombre_Eleve;
    }
    return(Total_Eleve);
}

int Exercice_8()
{
    int n=1;
    while (n%7!=0 || n%2!=0)
    {
        n=saisirEntier();
    }
    printf("bien joue !");
    return(0);
}



int Exercice_9()
{
    int nombrePierre = 0, nombreEtage = 0;           /*On commence la somme a 1 pour ne pas faire de division par 0 lors de la premiere iteration du while*/
    nombrePierre = saisirEntier();
    if (nombrePierre ==
        0)                       /* On sépare le cas ou il y a 0 pierre, sinon le programme n'effectuerai pas de boucle while (0/1=0<1) et ca nous renverrai -1 */
    {
        printf("Vous pouvez construire une pyramide a 0 etage\n");
    }
    else {
        nombreEtage = determinationDuNbrEtage(nombrePierre);
        printf("Vous pouvez construire une pyramide a %d etage(s)\n", nombreEtage);
    }

    return (0);
}



int Exercice_10()
{
    int nombre_Saisie=0, i=0;          /* i est le nombre de valeur rentrée*/
    float moyenne=0.0f;               /* la moyenne est un float car sinon yaura du troncage lors de la division par le nombre de valeur rentrée*/
    while (nombre_Saisie>=0)
    {
        nombre_Saisie=saisirEntier();
        if (nombre_Saisie>=0)             /* il faut vérifié que le nombre saisie est positif sinon il rajoutera le nombre negatif et ajoutera +1 a i alors qu'on voulait que ca s'arrete*/
        {
            moyenne = moyenne+(float)nombre_Saisie;
            i++;
        }
    }
    moyenne=moyenne/(float)i;         /* ne paps oublier de diviser par le nommbre de valeurs*/
    printf("La moyenne des entiers positifs est de %f", moyenne);
    return(0);
}