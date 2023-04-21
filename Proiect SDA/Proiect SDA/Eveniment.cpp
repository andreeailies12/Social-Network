#include "Eveniment.h"

Eveniment::Eveniment()
{
	this->nume = new char[1];
	strcpy_s(this->nume, 1, "");
	this->descriere = new char[1];
	strcpy_s(this->descriere, 1, "");
}

Eveniment::Eveniment(const char* nume, const char* descriere)
{
	if (nume == NULL)
	{
		this->nume = NULL;
	}
	else
	{
		this->nume = new char[strlen(nume) + 1];
		strcpy_s(this->nume, strlen(nume) + 1, nume);
	}
	if (descriere == NULL)
	{
		this->descriere = NULL;
	}
	else
	{
		this->descriere = new char[strlen(descriere) + 1];
		strcpy_s(this->descriere, strlen(descriere) + 1, descriere);
	}
}

Eveniment::Eveniment(const Eveniment& eveniment)
{
	if (eveniment.nume == NULL)
	{
		this->nume = NULL;
	}
	else
	{
		this->nume = new char[strlen(eveniment.nume) + 1];
		strcpy_s(this->nume, strlen(eveniment.nume) + 1, eveniment.nume);
	}
	if (eveniment.descriere == NULL)
	{
		this->descriere = NULL;
	}
	else
	{
		this->descriere = new char[strlen(eveniment.descriere) + 1];
		strcpy_s(this->descriere, strlen(eveniment.descriere) + 1, eveniment.descriere);
	}
}

Eveniment::~Eveniment()
{
	if (this->nume)
	{
		delete[] this->nume;
	}
	if (this->descriere)
	{
		delete[] this->descriere;
	}
}

void Eveniment::setNume(const char* nume)
{
	if (nume == NULL)
	{
		this->nume = NULL;
	}
	else
	{
		this->nume = new char[strlen(nume) + 1];
		strcpy_s(this->nume, strlen(nume) + 1, nume);
	}
}

void Eveniment::setDescriere(const char* descriere)
{
	if (descriere == NULL)
	{
		this->descriere = NULL;
	}
	else
	{
		this->descriere = new char[strlen(descriere) + 1];
		strcpy_s(this->descriere, strlen(descriere) + 1, descriere);
	}
}

char* Eveniment::getNume()
{
	return this->nume;
}

char* Eveniment::getDescriere()
{
	return this->descriere;
}

Eveniment& Eveniment::operator=(const Eveniment& eveniment)
{
	if (this != &eveniment)
	{
		this->setNume(eveniment.nume);
		this->setDescriere(eveniment.descriere);
	}
	return *this;
}

bool Eveniment::operator==(const Eveniment& eveniment)
{
	return strcmp(this->nume, eveniment.nume) == 0 and strcmp(this->descriere, eveniment.descriere) == 0;
}

ostream& operator<<(ostream& os, const Eveniment& eveniment)
{
	os << "Evenimentul " << eveniment.nume << " are descrierea: " << eveniment.descriere;
	return os;
}
