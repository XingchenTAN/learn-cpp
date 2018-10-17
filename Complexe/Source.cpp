#include "Complexe.h"
#include <iostream>

int main() {

	// Cr�ation d'un nouveau complexe
	Complexe c1(1, 2);

	// Op�rateur unaire
	std::cout << -c1 << std::endl;

	// Cr�ation de deux nouveaux complexes
	Complexe c2(3, 2);
	Complexe c3(1, 2);

	// Utilisation de la m�thode Homothetie que l'on chaine avec le getter GetRe
	// afin de r�cup�rer la partie r�el du complexe
	c1.Homothetie(5).GetRe();

	// Cr�ation d'un complexe c4 � partir de la somme de c1 et c2
	Complexe c4 = c1 + c2;

	// Affichage de ce complexe avec l'op�rateur <<
	std::cout << c4 << std::endl;

	// Cr�ation d'un complexe c4 � partir de la diff�rence de c3 et c2
	Complexe c5 = c3 - c2;

	Complexe c6(1, 2);

	bool complexes_egaux = c1 == c6;
	std::cout << "Les complexes c1 et c6 sont diff�rents : " << complexes_egaux << std::endl;

	bool complexes_differents = c1 != c4;
	std::cout << "Les complexes c1 et c4 sont diff�rents : " << complexes_differents << std::endl;

	system("pause");

	return(0);
}