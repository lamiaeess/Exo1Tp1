#pragma once

class Complexe
{
private: 
	//attribut d'instance
	double re;
	double img;
public: 
	//Constructeur par défaut, initialisant un nombre complexe sans paramètres(0+0i)
	Complexe();
	/*Constructeur avec deux paramètres, permettant d’initialiser un nombre 
	complexe avec une partie réelle et une partie imaginaire.*/
	Complexe(double, double);
	/*Constructeur de copie, permettant de créer un nouvel objet Complexe à 
	partir d’un autre.*/
	Complexe(const Complexe&);
	/*Méthode constante c à d ne modifie pas l’état de l’objet) qui affiche 
	les parties réelle et imaginaire du nombre complexe*/
	void Afficher() const;
	/*Méthode constante qui calcule et renvoie le module du complexe 
	( √(re² + img²) )*/
	double Module() const;
	/*Méthode constante qui renvoie le conjugué du complexe*/
	Complexe Conjugue() const;
	// surcharge des operateurs pour complexe +complexe et complexe + double
	Complexe operator+(const Complexe& plus) const;
	Complexe operator+(double reel) const;
	// surcharge pour double + complexe(à l exteriieur de la classe)
	friend Complexe operator+(double reel, const Complexe& complexe);
	
	//pour la sustraction
	// surcharge des operateurs pour complexe +complexe et complexe + double
	Complexe operator-(const Complexe& plus) const;
	Complexe operator-(double reel) const;
	// surcharge pour double + complexe(à l exteriieur de la classe)
	friend Complexe operator-(double reel, const Complexe& complexe);

	//pour la multiblication
	Complexe operator*(const Complexe& autre) const;
	//pour la division
	Complexe operator/(const Complexe& autre) const;
	//pour l operateur ==
	bool operator==(const Complexe& autre) const;

};

