#pragma once
#include <iostream>

using namespace std;

class Mesaj {
private:
	int id_utilizator_1;
	int id_utilizator_2;
	char* informatie;
public:
	/// <summary>
	/// constructor implicit
	/// </summary>
	Mesaj();

	/// <summary>
	/// constructor cu parametrii
	/// </summary>
	/// <param name="id_utilizator_1"> un intreg(id ul primului utilizator)</param>
	/// <param name="id_utilizator_2">un intreg(id ul celui de al doilea utilizator)</param>
	/// <param name="informatie"> informatia din mesaj</param>
	Mesaj(int id_utilizator_1, int id_utilizator_2, const char* informatie);

	/// <summary>
	/// constructor de copiere
	/// </summary>
	/// <param name="mesaj">un obiect de tip Mesaj</param>
	Mesaj(const Mesaj& mesaj);

	///desconstructor
	~Mesaj();

	/// <summary>
	/// setter pentru id ul primului utilizator
	/// </summary>
	/// <param name="id_utilizator_1">un intreg(id ul primului utilizator)</param>
	void setIdUtilizator1(int id_utilizator_1);

	/// <summary>
	/// setter pentru id ul celui de al doilea utilizator
	/// </summary>
	/// <param name="id_utilizator_2">un intreg(id ul celui de al doilea utilizator)</param>
	void setIdUtilizator2(int id_utilizator_2);

	/// <summary>
	/// setter pentru informatia primita
	/// </summary>
	/// <param name="informatie"> informatia trimisa prin mesaj </param>
	void setInformatie(const char* informatie);


	/// <summary>
	/// getter pentru id ul primului utilizator
	/// </summary>
	/// <returns>un intreg(id ul primului utilizator)</returns>
	int getIdUtilizator1();

	/// <summary>
	/// getter pentru id ul celui de al doilea utilizator
	/// </summary>
	/// <returns>un intreg(id ul celui de al doilea utilizator)</returns>
	int getIdUtilizator2();

	/// <summary>
	/// getter pentru informatia primita
	/// </summary>
	/// <returns>informatia trimisa prin mesaj</returns>
	char* getInformatie();

	/// <summary>
	/// functie pentru supraincarcarea operatorului de atribuire
	/// </summary>
	/// <param name="mesaj">un obiect de tip Mesaj</param>
	/// <returns></returns>
	Mesaj& operator=(const Mesaj& mesaj);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de egalitate
	/// </summary>
	/// <param name="mesaj">un obiect de tip Mesaj</param>
	/// <returns></returns>
	bool operator==(const Mesaj& mesaj);

	/// <summary>
	/// functie pentru supraincarcarea operatorului de directare a iesirii in consola
	/// </summary>
	/// <param name="os"></param>
	/// <param name="mesaj"></param>
	/// <returns></returns>
	friend ostream& operator<<(ostream& os, const Mesaj& mesaj);
};
