#include "serviceEveniment.h"
#include "Eveniment.h"


ServiceEveniment::ServiceEveniment()
{
}

ServiceEveniment::~ServiceEveniment()
{
}

void ServiceEveniment::addEveniment(const Eveniment& ev)
{
	this->leveniment.adaugare(ev);
}

int ServiceEveniment::sizeEveniment()
{
	return this->leveniment.size();
}

void ServiceEveniment::updateEveniment(int poz, const Eveniment& ev)
{
	this->leveniment.modificare(poz-1, ev);

}

void ServiceEveniment::deleteEveniment(int poz)
{
	this->leveniment.stergere(this->leveniment.get(poz-1));
}

Eveniment ServiceEveniment::elemAtEveniment(int poz)
{
	return this->leveniment.get(poz);
}

Lista<Eveniment> ServiceEveniment::getAll() {
	return this->leveniment;
}
