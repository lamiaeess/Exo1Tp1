
#include <iostream>
#include"Complexe.h"
//le faite de garder le meme nom et modifier le parametre 

int main()
{
    Complexe z1(2, 3);
    Complexe z2(1,1);
    Complexe z3;
 
    //complexe +complexe
    z3 = z1 + z2;
    //z3 = (z1).operator+(z2); //cette ecriture est equivalenta a la precedente, on travail avec la precedente
    // z3.Afficher();
    //complexe + reel
    Complexe z4 = z1 + 4;
    z4.Afficher();
    //reel + Complexe
    Complexe z5 = 5 + z1;
    z5.Afficher();
    Complexe z6 = z1 - z2;
    z6.Afficher();

    Complexe z7 = z6 - 4;
    z7.Afficher();
    z3 = 2 - z7;

    Complexe z8 = z7 * z1;
    z8.Afficher();

    Complexe z9 = z8 / z1;
    z9.Afficher();

}

