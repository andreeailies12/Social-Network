#include "Prietenie.h"

Prietenie::Prietenie()
{
	this->id_utilizator_1 = 0;
	this->id_utilizator_2 = 0;
}

Prietenie::Prietenie(int id_utilizator_1, int id_utilizator_2)
{
	this->id_utilizator_1 = id_utilizator_1;
	this->id_utilizator_2 = id_utilizator_2;
}

Prietenie::Prietenie(const Prietenie& prietenie)
{
	this->id_utilizator_1 = prietenie.id_utilizator_1;
	this->id_utilizator_2 = prietenie.id_utilizator_2;
}

Prietenie::~Prietenie()
{

	this->id_utilizator_1 = 0;
	this->id_utilizator_2 = 0;
}

void Prietenie::setIdUtilizator1(int id_utilizator_1)
{
	this->id_utilizator_1 = id_utilizator_1;
}

void Prietenie::setIdUtilizator2(int id_utilizator_2)
{
	this->id_utilizator_2 = id_utilizator_2;
}

int Prietenie::getIdUtilizator1()
{
	return this->id_utilizator_1;
}

int Prietenie::getIdUtilizator2()
{
	return this->id_utilizator_2;
}

Prietenie& Prietenie::operator=(const Prietenie& prietenie)
{
	if (this != &prietenie)
	{
		this->setIdUtilizator1(prietenie.id_utilizator_1);
		this->setIdUtilizator2(prietenie.id_utilizator_2);
		
	}
	return *this;
}

bool Prietenie::operator==(const Prietenie& prietenie)
{
	return this->id_utilizator_1==prietenie.id_utilizator_1 and this->id_utilizator_2==prietenie.id_utilizator_2;
}

ostream& operator<<(ostream& os, const Prietenie& prietenie)
{
	os << "Prietenie: ID Utilizator 1: " << prietenie.id_utilizator_1 << ", ID Utilizator 2: " << prietenie.id_utilizator_2;
	return os;
}
