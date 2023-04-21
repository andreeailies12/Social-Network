#pragma once
#include <iostream>

using namespace std;

class Prietenie {
private:
	
	int id_utilizator_1;
	int id_utilizator_2;
public:
	/// <summary>
	/// constructor implicit
	/// </summary>
	Prietenie();

	/// <summary>
	/// constructor cu parametri
	/// </summary>
	/// <param name="id_utilizator_1">un intreg(numele utilizatorului)</param>
	/// <param name="id_utilizator_2">un intreg(numele altui utilizator)</param>
	Prietenie(int id_utilizator_1, int id_utilizator_2);

	/// <summary>
	/// constructor de copiere
	/// </summary>
	/// <param name="prietenie">un obiect de tip Prietenie</param>
	Prietenie(const Prietenie& prietenie);

	///desconstructor
	~Prietenie();

	/// <summary>
	/// setter pentru id ul utilizatorului
	/// </summary>
	/// <param name="id_utilizator_1">un intreg(numele utilizatorului)</param>
	void setIdUtilizator1(int id_utilizator_1);

	/// <summary>
	/// setter pentru alt id 
	/// </summary>
	/// <param name="id_utilizator_2">un intreg(numele altui utilizator)</param>
	void setIdUtilizator2(int id_utilizator_2);

	/// <summary>
	/// getter pentru id ul utilizatorului
	/// </summary>
	/// <returns>un intreg(numele utilizatorului)</returns>
	int getIdUtilizator1();

	/// <summary>
	/// getter pentru alt id 
	/// </summary>
	/// <returns>un intreg(numele altui utilizator)</returns>
	int getIdUtilizator2();

	/// <summary>
	/// functie pentru supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="prietenie">un obiect de tip Prietenie</param>
	/// <returns></returns>
	Prietenie& operator=(const Prietenie& prietenie);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="prietenie">un obiect de tip Prietenie</param>
	/// <returns></returns>
	bool operator==(const Prietenie& prietenie);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de directare a iesirii in consola
	/// </summary>
	/// <param name="os"></param>
	/// <param name="prietenie">un obiect de tip Prietenie</param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Prietenie& prietenie);
};

