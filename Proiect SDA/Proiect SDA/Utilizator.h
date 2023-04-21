#pragma once
#include <iostream>

using namespace std;

class Utilizator {
private:
	int id;
	int varsta;
	char* nume;
	char* localitate;
public:
	/// <summary>
	/// constructor implicit
	/// </summary>
	Utilizator();

	/// <summary>
	/// constrcutor cu parametri
	/// </summary>
	/// <param name="id">intreg(id ul utilizatorului)</param>
	/// <param name="varsta">intreg(varsta utilizatorului)</param>
	/// <param name="nume">sir de caractere(numele utilizatorului)</param>
	/// <param name="localitate">sir de caractere(localitatea din care este utilizatorul)</param>
	Utilizator(int id, int varsta, const char* nume, const char* localitate);

	/// <summary>
	/// constructor de copiere
	/// </summary>
	/// <param name="utilizator">un obiect de tip Utilizator</param>
	Utilizator(const Utilizator& utilizator);

	///desconstructor
	~Utilizator();

	/// <summary>
	/// setter pentru id
	/// </summary>
	/// <param name="id">intreg(id ul utilizatorului)</param>
	void setId(int id);

	/// <summary>
	/// setter pentru varsta
	/// </summary>
	/// <param name="varsta">intreg(varsta utilizatorului)</param>
	void setVarsta(int varsta);

	/// <summary>
	/// setter pentru nume
	/// </summary>
	/// <param name="nume">sir de caractere(numele utilizatorului)</param>
	void setNume(const char* nume);

	/// <summary>
	/// setter pentru localitate
	/// </summary>
	/// <param name="localitate">sir de caractere(localitatea din care este utilizatorul)</param>
	void setLocalitate(const char* localitate);

	/// <summary>
	/// getter pentru id
	/// </summary>
	/// <returns>intreg(id ul utilizatorului)</returns>
	int getId();

	/// <summary>
	/// getter pentru varsta
	/// </summary>
	/// <returns>intreg(varsta utilizatorului)</returns>
	int getVarsta();

	/// <summary>
	/// getter pentru nume
	/// </summary>
	/// <returns>sir de caractere(numele utilizatorului)</returns>
	char* getNume();

	/// <summary>
	/// getter pentru localitate
	/// </summary>
	/// <returns>sir de caractere(localitatea din care este utilizatorul)</returns>
	char* getLocalitate();

	/// <summary>
	///  functie pentru supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="utilizator">un obiect de tip Utilizator</param>
	/// <returns></returns>
	Utilizator& operator=(const Utilizator& utilizator);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="utilizator">un obiect de tip Utilizator</param>
	/// <returns></returns>
	bool operator==(const Utilizator& utilizator);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de directare a iesirii in consola
	/// </summary>
	/// <param name="os"></param>
	/// <param name="utilizator">un obiect de tip Utilizator</param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Utilizator& utilizator);
};
