#pragma once

#include <iostream>

class Complexe
{
private:
	double reel, imaginaire;
public:
	Complexe(double reel, double imaginaire);
	Complexe(const Complexe &obj);
	Complexe(Complexe &&obj);
	~Complexe();
	double GetRe() const;
	double GetIm() const;
	Complexe& Homothetie(double val);
	Complexe& operator=(Complexe &&obj);
	double Getmod();
	double GetArg();
	Complexe& operator*=(double val);
};

Complexe operator+(const Complexe &c1, const Complexe &c2);
Complexe operator-(const Complexe &c1, const Complexe &c2);
Complexe operator-(const Complexe &c1);
Complexe operator/(const Complexe &c1, double d);
bool operator==(const Complexe &c1, const Complexe &c2);
bool operator!=(const Complexe &c1, const Complexe &c2);
std::ostream& operator<<(std::ostream &o, const Complexe &c);