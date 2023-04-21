#pragma once
#include "serviceEveniment.h"
#include "serviceMesaj.h"
#include "ServicePrietenie.h"
#include "serviceUtilizator.h"
#include "Lista.h"
#include "Utilizator.h"
#include "Prietenie.h"
#include "Mesaj.h"
#include "Eveniment.h"
#include "serviceUtilizator.h"

class Service {
private:
	ServiceUtilizator serviceutilizator;
	ServicePrietenie serviceprietenie;
	ServiceEveniment serviceeveniment;
	ServiceMesaj servicemesaj;
public:
	Service();
	~Service();

	void addServUtilizator(const Utilizator& ut);
	void addServPrietenie(const Prietenie& pr);
	void addServEveniment(const Eveniment& ev);
	void addServMesaj(const Mesaj& ms);

	void deleteServUtilizator(int poz);
	void deleteServPrietenie(int poz);
	void deleteServEveniment(int poz);
	void deleteServMesaj(int poz);

	void updateServUtilizator(int poz, const Utilizator& ut);
	void updateServPrietenie(int poz, const Prietenie& pr);
	void updateServEveniment(int poz, const Eveniment& ev);
	void updateServMesaj(int poz, const Mesaj& ms);

	int sizeServUtilizator();
	int sizeServPrietenie();
	int sizeServEveniment();
	int sizeServMesaj();

	Utilizator elemAtServUtilizator(int poz);
	Prietenie elemAtServPrietenie(int poz);
	Eveniment elemAtServEveniment(int poz);
	Mesaj elemAtServMesaj(int poz);

	Lista<Utilizator> getAllServUtilizator();
	Lista<Prietenie> getAllServPrietenie();
	Lista<Eveniment> getAllServEveniment();
	Lista<Mesaj> getAllServMesaj();
};
