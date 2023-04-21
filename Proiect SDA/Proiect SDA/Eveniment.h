#pragma once
#include  <iostream>

using namespace std;

class Eveniment {
private:
	char* nume;
	char* descriere;
public:
	/// <summary>
	/// constructor implicit
	/// </summary>
	Eveniment();

	/// <summary>
	/// constructor cu parametri
	/// </summary>
	/// <param name="nume">sir de caractere(numele evenimentului)</param>
	/// <param name="descriere">sir de caractere(o mica descriere pt eveniment)</param>
	Eveniment(const char* nume, const char* descriere);

	/// <summary>
	/// constructor de copiere
	/// </summary>
	/// <param name="eveniment">un obiect de tip Eveniment</param>
	Eveniment(const Eveniment& eveniment);

	/// desconstructor
	~Eveniment();

	/// <summary>
	/// setter pentru nume
	/// </summary>
	/// <param name="nume">sir de caractere(numele evenimentului)</param>
	void setNume(const char* nume);

	/// <summary>
	/// setter pentru descriere
	/// </summary>
	/// <param name="descriere">sir de caractere(o mica descriere pt eveniment)</param>
	void setDescriere(const char* descriere);

	/// <summary>
	/// getter pentru nume
	/// </summary>
	/// <returns>sir de caractere(numele evenimentului)</returns>
	char* getNume();

	/// <summary>
	/// getter pentru descriere
	/// </summary>
	/// <returns>sir de caractere(o mica descriere pt eveniment)</returns>
	char* getDescriere();

	/// <summary>
	/// functie pentru supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="eveniment">un obiect de tip Eveniment</param>
	/// <returns></returns>
	Eveniment& operator=(const Eveniment& eveniment);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="eveniment">un obiect de tip Eveniment</param>
	/// <returns></returns>
	bool operator==(const Eveniment& eveniment);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de directare a iesirii in consola
	/// </summary>
	/// <param name="os"></param>
	/// <param name="eveniment">un obiect de tip Eveniment</param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Eveniment& eveniment);
};