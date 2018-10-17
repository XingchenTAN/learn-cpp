#include "Complexe.h"
#include <iostream>

int main() {

	// Creation d un nouveau complexe
	Complexe c1(1, 2);

	// Operateur unaire
	std::cout << -c1 << std::endl;

	// Creation de deux nouveaux complexes
	Complexe c2(3, 2);
	Complexe c3(1, 2);

	// Utilisation de la methode Homothetie que l on chaine avec le getter GetRe
	// afin de recuperer la partie reel du complexe
	c1.Homothetie(5).GetRe();

	// Creation d un complexe c4 a partir de la somme de c1 et c2
	Complexe c4 = c1 + c2;

	// Affichage de ce complexe avec l operateur <<
	std::cout << c4 << std::endl;

	// Creation d un complexe c4 a partir de la difference de c3 et c2
	Complexe c5 = c3 - c2;

	Complexe c6(1, 2), c7(1, 2);

	bool complexes_egaux = c6 == c7;
	std::cout << "Les complexes c1 et c6 sont egaux : " << complexes_egaux << std::endl;

	bool complexes_differents = c1 != c4;
	std::cout << "Les complexes c1 et c4 sont differents : " << complexes_differents << std::endl;

	system("pause");

	return(0);
}