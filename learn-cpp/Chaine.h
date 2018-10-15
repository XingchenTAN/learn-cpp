#pragma once
class Chaine
{
private:
	char* string;
	unsigned int size;
public:
	// Constructeur par d�faut
	Chaine();
	// Constructeur de recopie
	Chaine(const Chaine &chaine);
	Chaine(Chaine &&chaine);
	Chaine(char *str);
	~Chaine();
	inline unsigned int getSize() const { return(size); }
	inline const char* getString() const { return(string); }
	void addString(const char*);
	void replaceString(const char*);
};

