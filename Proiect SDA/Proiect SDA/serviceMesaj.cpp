#include "serviceMesaj.h"

ServiceMesaj::ServiceMesaj()
{
}

ServiceMesaj::~ServiceMesaj()
{
}

void ServiceMesaj::addMesaj(const Mesaj& ms)
{
	this->lmesaj.adaugare(ms);
}

int ServiceMesaj::sizeMesaj()
{
	return this->lmesaj.size();
}

void ServiceMesaj::updateMesaj(int poz, const Mesaj& ms)
{
	this->lmesaj.modificare(poz-1, ms);
}

void ServiceMesaj::deleteMesaj(int poz)
{
	this->lmesaj.stergere(this->lmesaj.get(poz-1));
}

Mesaj ServiceMesaj::elemAtMesaj(int poz)
{
	return this->lmesaj.get(poz);
}

Lista<Mesaj> ServiceMesaj::getAll() {
	return this->lmesaj;
}
