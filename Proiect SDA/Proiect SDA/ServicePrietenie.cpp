#include "ServicePrietenie.h"

ServicePrietenie::ServicePrietenie()
{
}

ServicePrietenie::~ServicePrietenie()
{
}

void ServicePrietenie::addPrietenie(const Prietenie& pr)
{
	this->lprietenie.adaugare(pr);
}

int ServicePrietenie::sizePrietenie()
{
	return this->lprietenie.size();
}

void ServicePrietenie::updatePrietenie(int poz, const Prietenie& pr)
{
	this->lprietenie.modificare(poz-1, pr);
}

void ServicePrietenie::deletePrietenie(int poz)
{
	this->lprietenie.stergere(this->lprietenie.get(poz-1));
}

Prietenie ServicePrietenie::elemAtPrietenie(int poz)
{
	return this->lprietenie.get(poz);
}

Lista<Prietenie> ServicePrietenie::getAll() {
	return this->lprietenie;
}
