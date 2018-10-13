#include "Chaine.h"
#include <string.h>
#include <malloc.h>

// Constructeur par défaut
Chaine::Chaine() : string(nullptr), size(0)
{
	addString("");
}

Chaine::Chaine(const Chaine &chaine) : string(nullptr), size(0)
{
	addString(chaine.string);
}

Chaine::Chaine(Chaine &&chaine) : string(chaine.string), size(chaine.size)
{
	chaine.string = nullptr;
	chaine.size = 0;
}

Chaine::Chaine(char *str) : string(nullptr), size(0)
{
	addString(str);
}

// Destructeur
Chaine::~Chaine()
{
	free(string);
}

// Methode AddString
void Chaine::addString(const char *str) {

	unsigned int sizeStr = (unsigned int)strlen(str);

	#ifdef CHAINE_USE_NEW
		char *strTemp;

		strTemp = new char[Size + sizeStr + 1];
		if (String) strcpy(strTemp, String);
		delete[] String;
		String = strTemp;
	#else
		string = (char*)realloc(string, (size + sizeStr + 1) * sizeof(char));
	#endif

	strcpy(&string[size], str);

	size += sizeStr;
}

// Methode ReplaceString
void Chaine::replaceString(const char *str) {

	size = (unsigned int)strlen(str);

	#ifdef CHAINE_USE_NEW
		char *strTemp;

		strTemp = new char[Size + 1];
		delete[] String;
		String = strTemp;
	#else
		string = (char*)realloc(string, (size + 1) * sizeof(char));
	#endif

	strcpy(string, str);
}

