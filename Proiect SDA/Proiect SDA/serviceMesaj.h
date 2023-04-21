#pragma once
#include "Lista.h"
#include "Mesaj.h"

class ServiceMesaj {
private:
	Lista<Mesaj> lmesaj;
public:
	/// <summary>
	/// constrcutor implicit
	/// </summary>
	ServiceMesaj();

	///desconstructor
	~ServiceMesaj();

	/// <summary>
	/// aduagare mesaj
	/// </summary>
	/// <param name="ms"> element de tip Mesaj</param>
	void addMesaj(const Mesaj& ms);

	/// <summary>
	/// numarul de mesaje
	/// </summary>
	/// <returns>un numar intreg</returns>
	int sizeMesaj();

	/// <summary>
	/// modificare mesaj
	/// </summary>
	/// <param name="poz">pozzitia elementului pe care doresc sa l modific</param>
	/// <param name="ms">element de tip Mesaj</param>
	void updateMesaj(int poz, const Mesaj& ms);

	/// <summary>
	/// stergere mesaj
	/// </summary>
	/// <param name="poz">pozitia de pe care doresc sa sterg elementul</param>
	void deleteMesaj(int poz);

	/// <summary>
	/// imi da elemntul de pe o anumita pozitie
	/// </summary>
	/// <param name="poz">pozitia elementului cautat</param>
	/// <returns>elementul cautat</returns>
	Mesaj elemAtMesaj(int poz);

	Lista<Mesaj> getAll();
};
