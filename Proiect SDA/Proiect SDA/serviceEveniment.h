#pragma once
#include "Eveniment.h"
#include "Lista.h"

class ServiceEveniment {
private:
	Lista<Eveniment> leveniment;
public:
	/// <summary>
	/// constrcutor implicit
	/// </summary>
	ServiceEveniment();

	/// desconstructor
	~ServiceEveniment();

	/// <summary>
	/// Adaugare de evenimente in lista
	/// </summary>
	/// <param name="ev">un elemente de tip eveniment</param>
	void addEveniment(const Eveniment& ev);

	/// <summary>
	/// numarul de evenimente
	/// </summary>
	/// <returns>un numar intreg</returns>
	int sizeEveniment();

	/// <summary>
	/// modificare evenimnete
	/// </summary>
	/// <param name="poz">poz elem pe care vreau sa l schimb</param>
	/// <param name="ev">element de tip Eveniment</param>
	void updateEveniment(int poz, const Eveniment& ev);


	/// <summary>
	/// stergere eveniment de pe o anumita pozitie
	/// </summary>
	/// <param name="poz">pozitia elementului pe care vrem sa l stergem</param>
	void deleteEveniment(int poz);


	/// <summary>
	/// imi da elemntul de pe o anumita pozitie
	/// </summary>
	/// <param name="poz">pozitia elementului de care avem nevoie</param>
	Eveniment elemAtEveniment(int poz);

	Lista<Eveniment> getAll();


};
