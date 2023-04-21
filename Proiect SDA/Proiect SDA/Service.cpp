#include "Service.h"

Service::Service()
{
}

Service::~Service()
{
}

void Service::addServUtilizator(const Utilizator& ut)
{
	

	this->serviceutilizator.addUtilizator(ut);
}

void Service::addServPrietenie(const Prietenie& pr)
{
	this->serviceprietenie.addPrietenie(pr);
}

void Service::addServEveniment(const Eveniment& ev)
{
	this->serviceeveniment.addEveniment(ev);
}

void Service::addServMesaj(const Mesaj& ms)
{
	this->servicemesaj.addMesaj(ms);
}

void Service::deleteServUtilizator(int poz)
{
	this->serviceutilizator.deleteUtilizator(poz);
}

void Service::deleteServPrietenie(int poz)
{
	this->serviceprietenie.deletePrietenie(poz);
}

void Service::deleteServEveniment(int poz)
{
	this->serviceeveniment.deleteEveniment(poz);
}

void Service::deleteServMesaj(int poz)
{
	this->servicemesaj.deleteMesaj(poz);
}

void Service::updateServUtilizator(int id, const Utilizator& ut) {
	for (int i = 0; i < this->serviceutilizator.sizeUtilizator(); i++) {
		if (this->serviceutilizator.elemAtUtilizator(i).getId() == id) {
			this->serviceutilizator.updateUtilizator(i, ut);
			break;
		}
	}
}

void Service::updateServPrietenie(int poz, const Prietenie& pr) {
	this->serviceprietenie.updatePrietenie(poz, pr);
}

void Service::updateServEveniment(int poz, const Eveniment& ev) {
	this->serviceeveniment.updateEveniment(poz, ev);
}

void Service::updateServMesaj(int poz, const Mesaj& ms) {
	this->servicemesaj.updateMesaj(poz, ms);
}

int Service::sizeServUtilizator() {
	return this->serviceutilizator.sizeUtilizator();
}

int Service::sizeServPrietenie() {
	return this->serviceprietenie.sizePrietenie();
}

int Service::sizeServEveniment() {
	return this->serviceeveniment.sizeEveniment();
}

int Service::sizeServMesaj() {
	return this->servicemesaj.sizeMesaj();
}

Utilizator Service::elemAtServUtilizator(int poz)
{
	return this->serviceutilizator.elemAtUtilizator(poz);
}

Prietenie Service::elemAtServPrietenie(int poz)
{
	return this->serviceprietenie.elemAtPrietenie(poz);

}

Eveniment Service::elemAtServEveniment(int poz)
{
	return this->serviceeveniment.elemAtEveniment(poz);
}

Mesaj Service::elemAtServMesaj(int poz)
{
	return this->servicemesaj.elemAtMesaj(poz);
}

Lista<Utilizator> Service::getAllServUtilizator() {
	return this->serviceutilizator.getAll();
}

Lista<Prietenie> Service::getAllServPrietenie() {
	return this->serviceprietenie.getAll();
}

Lista<Eveniment> Service::getAllServEveniment() {
	return this->serviceeveniment.getAll();
}

Lista<Mesaj> Service::getAllServMesaj() {
	return this->servicemesaj.getAll();
}

