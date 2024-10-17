#include "Complexe.h"
#include<iostream>
#include <cmath>
using namespace std;

/*
Entrée : Aucune
Sortie : Un objet Complexe initialisé à (0, 0)
Description : Ce constructeur initialise la partie réelle et imaginaire du nombre complexe à 0
*/
Complexe::Complexe()
{
    this->img = 0;
    this->re = 0;
}
/*
Entrée : Deux réels re et im
Sortie : Un objet Complexe avec les valeurs données
Description : Initialise la partie réelle avec re et la partie imaginaire avec im
*/
Complexe::Complexe(double re, double im)
{
    this->re = re;
    this->img = im;

}
/*
Entrée : Un objet Complexe existant.
Sortie : Une copie du nombre complexe donné.
Description : Ce constructeur crée un nouvel objet identique au complexe fourni en paramètre.
*/
Complexe::Complexe(const Complexe& C)
{
    this->re = C.re;
    this->img = C.img;

}
/*
Entrée : Aucune
Sortie : Affiche le nombre complexe au format re + i img
Description : Affiche les valeurs des parties réelle et imaginaire du complexe sur la console
*/
void Complexe::Afficher() const
{
    cout << "Nombre complexe: " << this->re << "+i" << this->img <<endl;
  
}
/*
Entrée : Aucune.
Sortie : Le module du complexe ( √(re² + img²) ).
Description : Retourne la distance du complexe à l’origine dans le plan complexe.
*/
double Complexe::Module() const
{
    return sqrt(re * re + img *img);
}
/*
Entrée : Aucune.
Sortie : Un complexe avec la partie imaginaire négative.
Description : Renvoie le conjugué du complexe, c’est-à-dire (re, -img).
*/
Complexe Complexe::Conjugue() const
{
    return Complexe(re, -img);
}

/*
Entrée : Un complexe plus.
Sortie : La somme des deux complexes.
Description : Additionne deux nombres complexes (re1 + re2, img1 + img2).
//const pour proteger l objet courant
*/
 Complexe Complexe::operator+(const Complexe& plus) const
{ 
    return Complexe(this->re + plus.re, this->img +plus.img);
}

 //pour complexe+double ==> overload at compile time(surcharche au moment de complilation)
 Complexe Complexe::operator+(double reel) const
 {
     return Complexe(this->re + reel, this->img);
 }
 /*
 Entrée : Un complexe plus.
Sortie : La différence des deux complexes.
Description : Soustrait deux nombres complexes (re1 - re2, img1 - img2).
*/
 Complexe Complexe::operator-(const Complexe& moins) const
 {
     return Complexe(this->re + moins.re, this->img + moins.img);
 }
/*
Entrée : Un réel 'reel'.
Sortie : Un complexe avec le réel soustrait de la partie réelle.
Description : Soustrait un réel de la partie réelle du complexe.
*/
 Complexe Complexe::operator-(double reel) const
 {
     return Complexe(this->re - reel, this->img);
 }
 /*
Entrée : Un complexe 'autre'.
Sortie : Le produit des deux complexes.
Description : Multiplie deux complexes selon la formule : 
(re1 * re2 - img1 * img2, re1 * img2 + img1 * re2).
*/
 Complexe Complexe::operator*(const Complexe& autre) const
 {
     double reel = re * autre.re - img * autre.img;
     double imag = re * autre.img + img * autre.re;
     return Complexe(reel, imag);
 }
 /*
Entrée : Un complexe 'autre'.
Sortie : Le quotient des deux complexes.
Description : Divise deux complexes en utilisant la formule :
Réel : (re1 * re2 + img1 * img2) / (re2² + img2²)
Imaginaire : (re1 * img2 - img1 * re2) / (re2² + img2²)
*/
 Complexe Complexe::operator/(const Complexe& autre) const
 {
     double denominateur = autre.re * autre.re + autre.img * autre.img;
     double reel = (re * autre.re + img * autre.img) / denominateur;
     double imag = (re * autre.img - img * autre.re) / denominateur;
     return Complexe(reel, imag);
 }
 /*
Entrée : Un complexe 'autre'.
Sortie : Un booléen indiquant si les complexes sont égaux.
Description : Compare la partie réelle et imaginaire des deux complexes.
*/
 bool Complexe::operator==(const Complexe& autre) const
 {
     return re == autre.re && img == autre.img;
 }


 /*
Entrée : Un réel 'reel' et un complexe 'complexe'.
Sortie : La somme du réel et du complexe.
Description : Ajoute le réel à la partie réelle du complexe.
*/

 Complexe operator+(double reel, const Complexe& complexe)
 {
     return Complexe(reel + complexe.re, complexe.img);
 }
 /*
Entrée : Un réel 'reel' et un complexe 'complexe'.
Sortie : La différence entre le réel et le complexe.
Description : Soustrait la partie réelle du complexe du réel.
*/
 Complexe operator-(double reel, const Complexe& complexe)
 {
     return Complexe(reel + complexe.re, complexe.img);
 }


