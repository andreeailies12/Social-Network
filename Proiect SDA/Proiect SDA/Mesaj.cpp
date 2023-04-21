#include "Mesaj.h"

Mesaj::Mesaj()
{
	this->id_utilizator_1 = 0;
	this->id_utilizator_2 = 0;
	this->informatie = new char[1];
	strcpy_s(this->informatie, 1, "");
}

Mesaj::Mesaj(int id_utilizator_1, int id_utilizator_2, const char* informatie)
{
	this->id_utilizator_1 = id_utilizator_1;
	this->id_utilizator_2 = id_utilizator_2;
	if (informatie == NULL)
	{
		this->informatie = NULL;
	}
	else
	{
		this->informatie = new char[strlen(informatie) + 1];
		strcpy_s(this->informatie, strlen(informatie) + 1, informatie);
	}
}

Mesaj::Mesaj(const Mesaj& mesaj)
{
	this->id_utilizator_1 = mesaj.id_utilizator_1;
	this->id_utilizator_2 = mesaj.id_utilizator_2;
	if (mesaj.informatie == NULL)
	{
		this->informatie = NULL;
	}
	else
	{
		this->informatie = new char[strlen(mesaj.informatie) + 1];
		strcpy_s(this->informatie, strlen(mesaj.informatie) + 1, mesaj.informatie);
	}
}

Mesaj::~Mesaj()
{
	this->id_utilizator_1 = 0;
	this->id_utilizator_2 = 0;
	if (this->informatie)
	{
		delete[] this->informatie;
	}
}

void Mesaj::setIdUtilizator1(int id_utilizator_1)
{
	this->id_utilizator_1 = id_utilizator_1;
}

void Mesaj::setIdUtilizator2(int id_utilizator_2)
{
	this->id_utilizator_2 = id_utilizator_2;
}

void Mesaj::setInformatie(const char* informatie)
{
	if (informatie == NULL)
	{
		this->informatie = NULL;
	}
	else
	{
		this->informatie = new char[strlen(informatie) + 1];
		strcpy_s(this->informatie, strlen(informatie) + 1, informatie);
	}
}

int Mesaj::getIdUtilizator1()
{
	return this->id_utilizator_1;
}

int Mesaj::getIdUtilizator2()
{
	return this->id_utilizator_2;
}

char* Mesaj::getInformatie()
{
	return this->informatie;
}

Mesaj& Mesaj::operator=(const Mesaj& mesaj)
{

	if (this != &mesaj)
	{
		this->setIdUtilizator1(mesaj.id_utilizator_1);
		this->setIdUtilizator2(mesaj.id_utilizator_2);
		this->setInformatie(mesaj.informatie);
	}
	return *this;
}

bool Mesaj::operator==(const Mesaj& mesaj)
{
	return this->id_utilizator_1 == mesaj.id_utilizator_1 and this->id_utilizator_2 == mesaj.id_utilizator_2 and strcmp(this->informatie, mesaj.informatie) == 0;
}

ostream& operator<<(ostream& os, const Mesaj& mesaj)
{
	os << "Utilizatorul cu id-ul: " << mesaj.id_utilizator_1
		<< ", utilizatorul cu id-ul: " << mesaj.id_utilizator_2 << " si au trimis mesajul: " << mesaj.informatie;
	return os;
}
