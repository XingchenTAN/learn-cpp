#include "Complexe.h"
#include <iostream>

int main() {

	// Création d'un nouveau complexe
	Complexe c1(1, 2);

	// Opérateur unaire
	std::cout << -c1 << std::endl;

	// Création de deux nouveaux complexes
	Complexe c2(3, 2);
	Complexe c3(1, 2);

	// Utilisation de la méthode Homothetie que l'on chaine avec le getter GetRe
	// afin de récupérer la partie réel du complexe
	c1.Homothetie(5).GetRe();

	// Création d'un complexe c4 à partir de la somme de c1 et c2
	Complexe c4 = c1 + c2;

	// Affichage de ce complexe avec l'opérateur <<
	std::cout << c4 << std::endl;

	// Création d'un complexe c4 à partir de la différence de c3 et c2
	Complexe c5 = c3 - c2;

	Complexe c6(1, 2);

	bool complexes_egaux = c1 == c6;
	std::cout << "Les complexes c1 et c6 sont différents : " << complexes_egaux << std::endl;

	bool complexes_differents = c1 != c4;
	std::cout << "Les complexes c1 et c4 sont différents : " << complexes_differents << std::endl;

	system("pause");

	return(0);
}