#include "Complexe.h"
#include <iostream>
#include <cmath>
#include <exception>

Complexe::Complexe(double reel, double imaginaire) : reel(reel), imaginaire(imaginaire)
{
	std::cout << "Constructeur de la classe Complexe" << std::endl;
}

Complexe::Complexe(const Complexe & obj) : reel(obj.reel), imaginaire(obj.imaginaire)
{
}

Complexe::Complexe(Complexe && obj) : reel(obj.reel), imaginaire(obj.imaginaire)
{
}


Complexe::~Complexe()
{
	std::cout << "Destructeur par défaut" << std::endl;
}


double Complexe::GetRe() const
{
	return reel;
}

double Complexe::GetIm() const
{
	return imaginaire;
}

Complexe& Complexe::Homothetie(double val)
{
	reel *= val;
	imaginaire *= val;

	return (*this);
}

double Complexe::Getmod()
{
	return std::sqrt(reel*reel + imaginaire * imaginaire);
}

double Complexe::GetArg()
{
	return std::atan(imaginaire/reel);
}

Complexe & Complexe::operator*=(double val)
{
	reel *= val;
	imaginaire *= val;
	return (*this);
}

Complexe& Complexe::operator=(Complexe &&obj)
{
	return (*this);
}

Complexe operator+(const Complexe &c1, const Complexe &c2)
{
	Complexe c(c1.GetRe() + c2.GetRe(), c1.GetIm() + c2.GetIm());

	return(c);
}

Complexe operator-(const Complexe & c1, const Complexe & c2)
{
	Complexe c(c1.GetRe() - c2.GetRe(), c1.GetIm() - c2.GetIm());

	return(c);
}

Complexe operator-(const Complexe & c1)
{
	Complexe c(-c1.GetRe() , -c1.GetIm());

	return(c);
}

Complexe operator/(const Complexe & c1, double d)
{
	if (d == 0) throw new std::exception("division par zero");
	Complexe c(c1.GetRe() / d, c1.GetIm() / d);

	return c;
}

bool operator==(const Complexe & c1, const Complexe & c2)
{

	const double EPS = 0.0000001;
	return std::fabs(c1.GetRe() - c2.GetRe()) < EPS
		&& std::fabs(c1.GetIm() - c2.GetIm()) < EPS;
}

bool operator!=(const Complexe & c1, const Complexe & c2)
{
	return !(c1 == c2);
}

std::ostream & operator<<(std::ostream & o, const Complexe & c)
{
	o << c.GetRe() << " + i" << c.GetIm();
	return(o);
}
