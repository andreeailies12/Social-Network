#include "serviceUtilizator.h"

ServiceUtilizator::ServiceUtilizator()
{
}

ServiceUtilizator::~ServiceUtilizator()
{
}

void ServiceUtilizator::addUtilizator(const Utilizator& ut)
{
	this->lutilizator.adaugare(ut);
}

int ServiceUtilizator::sizeUtilizator()
{
	return this->lutilizator.size();
}

void ServiceUtilizator::updateUtilizator(int poz, const Utilizator& ut)
{
	this->lutilizator.modificare(poz, ut);
}

void ServiceUtilizator::deleteUtilizator(int poz)
{
	this->lutilizator.stergere(this->lutilizator.get(poz - 1));
}

Utilizator ServiceUtilizator::elemAtUtilizator(int poz)
{
	return this->lutilizator.get(poz);
}

Lista<Utilizator> ServiceUtilizator::getAll() {
	return this->lutilizator;
}
