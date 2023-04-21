#pragma once

#include "Utilizator.h"
#include "Lista.h"

using namespace std;

class ServiceUtilizator {
private:
	Lista<Utilizator> lutilizator;
public:
	/// <summary>
	/// constructor implicit
	/// </summary>
	ServiceUtilizator();

	///desconstructor
	~ServiceUtilizator();

	/// <summary>
	/// aduagare utilizator
	/// </summary>
	/// <param name="ut">element de tip Utilizator</param>
	void addUtilizator(const Utilizator& ut);

	/// <summary>
	/// numarul de utilizatori
	/// </summary>
	/// <returns>un numar intreg</returns>
	int sizeUtilizator();

	/// <summary>
	/// modificare utilizator
	/// </summary>
	/// <param name="poz">pozitia elemntului pe care dorim sa l modificam</param>
	/// <param name="ut">element de tip Utilizator</param>
	void updateUtilizator(int poz, const Utilizator& ut);

	/// <summary>
	/// stergere utilizator
	/// </summary>
	/// <param name="poz">pozitia de pe care dorim sa stergem utilizatorul</param>
	void deleteUtilizator(int poz);

	/// <summary>
	/// elementul de pe o anumita pozitie
	/// </summary>
	/// <param name="poz">pozitia de pe care cautam elemntul</param>
	/// <returns>elementul de o anumita pozitie</returns>
	Utilizator elemAtUtilizator(int poz);

	Lista<Utilizator> getAll();
};
