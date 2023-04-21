#include "Utilizator.h"

Utilizator::Utilizator()
{
	this->id = 0;
	this->varsta = 0;
	this->nume = new char[1];
	strcpy_s(this->nume, 1, "");
	this->localitate = new char[1];
	strcpy_s(this->localitate, 1, "");
}

Utilizator::Utilizator(int id, int varsta, const char* nume, const char* localitate)
{
	this -> id = id;
	this->varsta = varsta;
	if (nume == NULL)
	{
		this->nume = NULL;
	}
	else
	{
		this->nume = new char[strlen(nume) + 1];
		strcpy_s(this->nume, strlen(nume) + 1,nume);
	}
	if (localitate == NULL)
	{
		this->localitate = NULL;
	}
	else
	{
		this->localitate = new char[strlen(localitate) + 1];
		strcpy_s(this->localitate, strlen(localitate) + 1, localitate);
	}
}

Utilizator::Utilizator(const Utilizator& utilizator)
{
	this->id = utilizator.id;
	this->varsta = utilizator.varsta;
	if (utilizator.nume == NULL)
	{
		this->nume = NULL;
	}
	else
	{
		this->nume = new char[strlen(utilizator.nume) + 1];
		strcpy_s(this->nume, strlen(utilizator.nume) + 1, utilizator.nume);
	}
	if (utilizator.localitate == NULL)
	{
		this->localitate = NULL;
	}
	else
	{
		this->localitate = new char[strlen(utilizator.localitate) + 1];
		strcpy_s(this->localitate, strlen(utilizator.localitate) + 1, utilizator.localitate);
	}
}

Utilizator::~Utilizator()
{
	this->id = 0;
	this->varsta = 0;
	if (this->nume)
	{
		delete[] this->nume;
	}
	if (this->localitate)
	{
		delete[] this->localitate;
	}
}

void Utilizator::setId(int id)
{
	this->id = id;
}

void Utilizator::setVarsta(int varsta)
{
	this->varsta= varsta;
}

void Utilizator::setNume(const char* nume)
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

void Utilizator::setLocalitate(const char* localitate)
{
	if (localitate == NULL)
	{
		this->localitate = NULL;
	}
	else
	{
		this->localitate = new char[strlen(localitate) + 1];
		strcpy_s(this->localitate, strlen(localitate) + 1, localitate);
	}
}

int Utilizator::getId()
{
	return this->id;
}

int Utilizator::getVarsta()
{
	return this->varsta;
}

char* Utilizator::getNume()
{
	return this->nume;
}

char* Utilizator::getLocalitate()
{
	return this->localitate;
}

Utilizator& Utilizator::operator=(const Utilizator& utilizator)
{
	if (this != &utilizator)
	{
		this->setId(utilizator.id);
		this->setVarsta(utilizator.varsta);
		this->setNume(utilizator.nume);
		this->setLocalitate(utilizator.localitate);
	}
	return *this;
}

bool Utilizator::operator==(const Utilizator& utilizator)
{
	return this->id== utilizator.id and this->varsta== utilizator.varsta
		and strcmp(this->nume, utilizator.nume)==0 and strcmp(this->localitate, utilizator.localitate)==0;
}

ostream& operator<<(ostream& os, const Utilizator& utilizator)
{
	os << "Utilizatorul cu id-ul: " << utilizator.id 
		<< ", varsta: " << utilizator.varsta << ", numele: " 
		<< utilizator.nume << " si din localitatea: " << utilizator.localitate << ".";
	return os;
}
