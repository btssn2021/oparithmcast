#include <stdio.h>

int main() {
    /***************************Exercice n°3****************************/
    int saisie=0;
    printf("Veuillez saisir un nombre entier\n");
    scanf("%d",&saisie);
    printf("L'opposé est %d\n",saisie*-1);
    printf("la moitié est %lf",saisie/(double)2);
    /*************************Exercice n°4********************************/
    float montant=0;
    const float taux=6.55957; //c'est une constante
    printf("Veuillez saisir un montant en francs\n");
    scanf("%f",&montant);
    printf("le montant en euros est de %0.2f\n",montant/taux);
    /*************************Exercice n°5*********************************/
    float tempf; //température en farenheit
    printf("Veuillez saisir une température en farenheit\n");
    scanf("%f",&tempf);
    printf("La température en celcius est de %0.1f",5/(float)9*(tempf-32));
    /********************celcius vers farenheit*****************************/
    float tempc;
    printf("Veuillez saisir une température en celcius\n");
    scanf("%f",&tempc);
    printf("La température en farenheit est de %0.1f",((9*tempc)/5)+32);
     /***************************Exercice n°6*******************************/
    int a=2,b=3;
    int resultat;
    resultat=a/b; //attention resultat est un entier
    printf("%d",resultat);
    int c=4,d=5;
    float resf;
    resf=(float)c/d; //cast ok
    printf("%f",resf);
    int e=6;
    float f=7;
    float resf2=0;
    resf2=e/f;
    printf("%d",resf2);


    return 0;
}
