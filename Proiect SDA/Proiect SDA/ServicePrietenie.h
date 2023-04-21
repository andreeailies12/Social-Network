#pragma once
#include "Lista.h"
#include "Prietenie.h"

class ServicePrietenie {
private:
	Lista<Prietenie> lprietenie;
public:
	/// <summary>
	/// constructor implicit
	/// </summary>
	ServicePrietenie();
	
	///desconstructor
	~ServicePrietenie();

	/// <summary>
	/// aduagare pro=ietenie
	/// </summary>
	/// <param name="pr">element de tip Prietenie</param>
	void addPrietenie(const Prietenie& pr);

	/// <summary>
	/// numarul de prietenii
	/// </summary>
	/// <returns>un numar intreg</returns>
	int sizePrietenie();

	/// <summary>
	/// modificare prietenie
	/// </summary>
	/// <param name="poz">pozitia de pe care dorim sa modificam</param>
	/// <param name="ev">element de tip Prietenie</param>
	void updatePrietenie(int poz, const Prietenie& ev);

	/// <summary>
	/// stergere prietenie
	/// </summary>
	/// <param name="poz">pozitia de pe care dorim sa stergem elementul</param>
	void deletePrietenie(int poz);

	/// <summary>
	/// elementul de pe o anumita pozitie
	/// </summary>
	/// <param name="poz">pozitia pe care se afla o prietenie</param>
	/// <returns>elementul de o anumita pozitiei</returns>
	Prietenie elemAtPrietenie(int poz);

	Lista<Prietenie> getAll();
};