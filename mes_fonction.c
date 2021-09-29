//
// Created by morga on 29/09/2021.
//


#include <stdio.h>


/*Fonction qui donne le maximum entre deux entiers
 * Paramètre :
 * - IN : entier1, le premier entier
 *        entier2, le deuxieme entier
 * - OUT : ne renvoie rien mais print le plus grand entier
 */
int getMax(int entier1, int entier2)
{
    ((entier1>entier2) ? printf("Le plus grand entier est %d\n", entier1) : printf("Le plus grand entier est %d\n", entier2));
}


/*Fonction qui demande de saisir un entier
 * Paramètre :
 * - IN : n'a pas de paramètres d'entrée
 * - OUT : la valeur saisie par l'utilisateur
 */
int saisirEntier()
{
    int n=0;
    printf("Saisissez un entier :\n");
    scanf("%d",&n);
    return(n);
}


/*Fonction qui calcule l'aire d'un rectangle
 * Paramètre :
 * - IN : longueur, la longueur du rectangle
 *        largeur, la largeuer du rectangle
 * - OUT : la valeur de l'aire du rectangle
 */
int calculAire(int longueur, int largeur)
{
    return(longueur*largeur);
}

int calculPerimetre(int longueur, int largeur)
{
    return((longueur+largeur)*2);
}

int multiple3(int n)
{
    if (n%3==0)
    {
        printf("%d est un multiple de 3\n", n);
        return(1);
    }
    else
    {
        printf("%d n'est pas un multiple de 3\n",n);
        return(0);
    }
}


int superieurMax(int n,int max)
{
    if (n>=max)
    {
        printf("%d est superieur ou egal a %d\n",n,max);
        return(1);
    }
    else
    {
        printf("%d est strictement inferieur a %d\n", n, max);
        return(0);
    }
}

float moyenne(float note1, float note2, float note3)
{
    if ( (float) note1>=0.0f && (float) note2>=0.0f && (float) note3>=0.0f)
    {
        return ((note1+note2+note3)/3);
    }
    else
    {
        return(-1.0f);
    }
}

int determinationDuNbrEtage(int nombre_Pierre)
{
    int i=0, somme=1;
    while (nombre_Pierre/(somme)>=1)            /* Test de si on peut construire i etages */
    {
        if (i==0)                              /*On remet la somme a 0 une fois la premiere itération du while effectué car sinon tout est decalé de 1*/
        {
            somme=0;
        }
        i++;
        somme=somme+i*i;
    }
    return(i-1);             /*ne pas oublier de soustraire 1 car le programme est sortit de la boucle car rajouter un etage etait impossible alors que ca l'etait avant de rajouter l'etage*/
}



