#include "UI.h"
#include "Utilizator.h"


void UI::uiAddUtilizator()
{
	cout << "Dati id ul utilizatorului pe care il adaugati: ";
	int id;
	int varsta;
	char nume[20];
	char localitate[20];
	cin >> id;
	cout << "Dati varsta utilizatorului: ";
	cin >> varsta;
	cout << "Dati numele utilizatorului: ";
	cin >> nume;
	cout << "Dati localitatea din care este utilizatorul: ";
	cin >> localitate;
	Utilizator u(id, varsta, nume, localitate);
	int z=0;
	for (int i = 0; i <= this->serv.sizeServUtilizator(); i++)
	{
		if (this->serv.elemAtServUtilizator(i).getId() == id)
		{
			z = z+1;
			cout << "Exista deja un utilizator cu acest id!!" << endl;
			
		}
	}
	if(z==0)
		this->serv.addServUtilizator(u);
}

void UI::uiGetAllUtilziator() {
	cout << "Utilizatorii sunt:" << endl;
	Lista<Utilizator> utilizatori = this->serv.getAllServUtilizator();
	for (int i = 0; i < utilizatori.size(); i++) {
		cout << "Utilizatorul " << i + 1 << " este: \n" << this->serv.getAllServUtilizator().get(i) << endl;
	}
}

void UI::uiUpdateUtilizator() {
	cout << "Dati pozitia utilizatorului pe care il updatati: ";
	int id;
	cin >> id;
	cout << "Dati varsta utilizatorului: ";
	int varsta;
	cin >> varsta;
	cout << "Dati numele utilizatorului: ";
	char nume[20];
	cin >> nume;
	cout << "Dati localitatea din care este utilizatorul: ";
	char localitate[20];
	cin >> localitate;
	Utilizator u(id, varsta, nume, localitate);
	this->serv.updateServUtilizator(id, u);
}

void UI::uiDeleteUtilizator()
{
	int poz;
	cout << "Dati numarul utilizatorului pe care doriti sa l stergeti: ";
	cin >> poz;
	this->serv.deleteServUtilizator(poz);
}

void UI::uiAddPrietenie()
{
	int id1;
	int id2;
	cout << "Dati id ul utilizatorului 1: ";
	cin >> id1;
	cout << "Dati id ul utilizatorului 2: ";
	cin >> id2;
	Prietenie p(id1, id2);
	int z = 0;
	for (int i = 0; i < this->serv.sizeServUtilizator(); i++)
	{
		if (this->serv.elemAtServUtilizator(i).getId() == id1 and id1!=id2)
		{
			z = z + 1;
		}
		else if (this->serv.elemAtServUtilizator(i).getId() == id2 and id1!=id2)
		{
			z = z + 1;
		}
	}
	if (z == 2)// in caz ca exista ambele id uri mi se aduna la z, astfel daca z ii 2 inseamna ca se poate face adaugarea
		this->serv.addServPrietenie(p);
	else if (id1 == id2)
		cout << "Dati id uri  diferite!" << endl;
	else  if (z != 2)
		cout << "Nu exista id urile/ id ul dat!" << endl;

}

void UI::uiGetAllPrietenie() {
	cout << "Prieteniile sunt:" << endl;
	Lista<Prietenie> prietenii = this->serv.getAllServPrietenie();
	for (int i = 0; i < prietenii.size(); i++) 
	{
		cout << "Prietenia " << i + 1 << " este: \n" << this->serv.getAllServPrietenie().get(i)<<endl;
	}

}

void UI::uiUpdatePrietenie() {
	int poz;
	cout << "Dati pozitia prieteniei pe care doriti sa o updatati: ";
	cin >> poz;
	cout << "Dati id ul utilizatorului 1: ";
	int id1;
	cin >> id1;
	cout << "Dati id ul utilizatorului 2: ";
	int id2;
	cin >> id2;
	Prietenie p(id1, id2);
	int z = 0;
	for (int i = 0; i < this->serv.sizeServUtilizator(); i++)
	{
		if (this->serv.elemAtServUtilizator(i).getId() == id1 and id1!=id2)
		{
			z = z + 1;
		}
		else if (this->serv.elemAtServUtilizator(i).getId() == id2 and id1!=id2)
		{
			z = z + 1;
		}
	}
	if (z == 2)// in caz ca exista ambele id uri mi se aduna la z, astfel daca z ii 2 inseamna ca se poate face modificarea
		this->serv.updateServPrietenie(poz, p);
	else if (id1 == id2)
		cout << "Dati id uri  diferite!" << endl;
	else  if (z != 2)
		cout << "Nu exista id urile/ id ul dat!" << endl;

	
}

void UI::uiDeletePrietenie()
{
	int poz;
	cout << "Dati numarul prietenie pe care doriti sa o stergeti: ";
	cin >> poz;
	this->serv.deleteServPrietenie(poz);
}

void UI::uiAddEveniment()
{
	char nume[20];
	char descriere[20];
	cout << "Dati numele evenimentului: ";
	cin >> nume;
	cout << "Dati descrierea evenimentului: ";
	cin >> descriere;

	Eveniment e(nume, descriere);
	this->serv.addServEveniment(e);
}

void UI::uiGetAllEveniment() {
	cout << "Evenimentele sunt: "<<endl;
	Lista<Eveniment> evenimente = this->serv.getAllServEveniment();
	for (int i = 0; i < evenimente.size(); i++) {
		cout << "Evenimentul " << i + 1 << " este: \n" << this->serv.getAllServEveniment().get(i) << endl;
	}
}

void UI::uiUpdateEveniment() {
	int poz;
	cout << "Dati pozitia evenimentului pe care doriti sa il updatati: ";
	cin >> poz;
	cout << "Dati numele utilizatorului: ";
	char nume[20];
	cin >> nume;
	cout << "Dati localitatea din care este utilizatorul: ";
	char descriere[20];
	cin >> descriere;
	Eveniment e(nume, descriere);
	this->serv.updateServEveniment(poz, e);
}

void UI::uiDeleteEveniment()
{
	int poz;
	cout << "Dati numarul evenimentul pe care doriti sa l stergeti: ";
	cin >> poz;
	this->serv.deleteServEveniment(poz);
}

void UI::uiAddMesaj()
{
	int id1;
	int id2;
	char informatie[20];
	cout << "Dati id ul utilizatorul 1: ";
	cin >> id1;
	cout << "Dati id ul utilziatorul 2: ";
	cin >> id2;
	cout << "Dati mesajul dintre cei doi utilizatori: ";
	cin >> informatie;
	Mesaj m(id1, id2, informatie);
	int z = 0;
	for (int i = 0; i < this->serv.sizeServUtilizator(); i++)
	{
		if (this->serv.elemAtServUtilizator(i).getId() == id1 and id1!=id2)
		{
			z = z + 1;
		}
		else if (this->serv.elemAtServUtilizator(i).getId() == id2 and id1!=id2)
		{
			z = z + 1;
		}
	}
	if (z == 2)// in caz ca exista ambele id uri mi se aduna la z, astfel daca z ii 2 inseamna ca se poate face adaugarea
		this->serv.addServMesaj(m);
	else if (id1 == id2)
		cout << "Dati id uri  diferite!" << endl;
	else  if (z != 2)
		cout << "Nu exista id urile/ id ul dat!" << endl;

}

void UI::uiGetAllMesaj() {
	cout << "Mesajele sunt:\n";
	Lista<Mesaj> mesaje = this->serv.getAllServMesaj();
	for (int i = 0; i < mesaje.size(); i++) {
		cout << "Mesajul " << i + 1 << " este: \n" << this->serv.getAllServMesaj().get(i) << endl;
	}
}


void UI::uiUpdateMesaj() {
	int poz;
	cout << "Dati pozitia mesajului pe care doriti sa il updatati: ";
	cin >> poz;
	cout << "Dati id ul utilizatorul 1: ";
	int id1;
	cin >> id1;
	cout << "Dati id ul utilziatorul 2: ";
	int id2;
	cin >> id2;
	cout << "Dati mesajul dintre cei doi utilizatori: ";
	char informatie[20];
	cin >> informatie;
	Mesaj m(id1, id2, informatie);
	int z = 0;
	for (int i = 0; i < this->serv.sizeServUtilizator(); i++)
	{
		if (this->serv.elemAtServUtilizator(i).getId() == id1 and id1!=id2)
		{
			z = z + 1;
		}
		if (this->serv.elemAtServUtilizator(i).getId() == id2 and id1!=id2)
		{
			z = z + 1;
		}
	}
	if (z == 2)// in caz ca exista ambele id uri mi se aduna la z(adica exista in lista de utilizatori), astfel daca z ii 2 inseamna ca se poate face modificarea
		this->serv.updateServMesaj(poz, m);
	else if (id1 == id2)
		cout << "Dati id uri  diferite!"<<endl;
	else  if(z!=2)
		cout << "Nu exista id urile/ id ul dat!"<<endl;
	
}

void UI::uiDeleteMesaj()
{
	int poz;
	cout << "Dati numarul mesajului pe care doriti sa l stergeti: ";
	cin >> poz;
	this->serv.deleteServMesaj(poz);
}

void UI::uiPrieteniUtilizatori()
{
	int poz;
	cout << "Dati id ul utilizatorului: ";
	cin >> poz;
	for (int i=0;i<this->serv.sizeServUtilizator();i++)
		if (this->serv.getAllServUtilizator().get(i).getId() == poz)
		{
			Lista<Prietenie> prietenii = this->serv.getAllServPrietenie();
			Lista<Prietenie> legaturi;
			cout << "Utilizatorul " << poz << " are urmatoarele relatii de prietenie:\n";
			for (int j = 0; j < prietenii.size(); j++)
			{
				if ( this->serv.elemAtServPrietenie(j).getIdUtilizator1()==poz or this->serv.elemAtServPrietenie(j).getIdUtilizator2()==poz)	
				{
					legaturi.adaugare(this->serv.elemAtServPrietenie(j));
						//cout<<this->serv.getAllServPrietenie().get(j)<<endl;
					if (this->serv.elemAtServPrietenie(j).getIdUtilizator1() != poz)
					{
						cout << "Cu utilizatorul cu id ul: " << this->serv.elemAtServPrietenie(j).getIdUtilizator1()  << endl;
					}
					else
					{
						cout << "Cu utilizatorul cu id ul: " << this->serv.elemAtServPrietenie(j).getIdUtilizator2() <<  endl;
					}
				}
			}
			if (legaturi.size() == 0)
			{
				cout << "Nu exista nicio relatie de prietenie."<<endl;
			}
			
		}
}

void UI::uiMesajeUtilizator()
{
	int poz;
	cout << "Dati id ul utilizatorului: ";
	cin >> poz;
	for (int i = 0; i < this->serv.sizeServUtilizator(); i++)
		if (this->serv.getAllServUtilizator().get(i).getId() == poz)
		{
			Lista<Mesaj> mesaje= this->serv.getAllServMesaj();
			Lista<Mesaj> legaturi;
			cout << "Utilizatorul " << poz << " are urmatoarele mesaje :\n";
			for (int j = 0; j < mesaje.size(); j++)
			{
				if (this->serv.elemAtServMesaj(j).getIdUtilizator1() == poz or this->serv.elemAtServMesaj(j).getIdUtilizator2() == poz)
				{
					legaturi.adaugare(this->serv.elemAtServMesaj(j));
					//cout << this->serv.getAllServMesaj().get(j) << endl;
					if (this->serv.elemAtServMesaj(j).getIdUtilizator1() != poz)
					{
						cout << "Catre utilizatorul cu id ul: " << this->serv.elemAtServMesaj(j).getIdUtilizator1() << " cu mesajul: " << this->serv.elemAtServMesaj(j).getInformatie()<<endl;
					}
					else
					{
						cout << "Catre utilizatorul cu id ul: " << this->serv.elemAtServMesaj(j).getIdUtilizator2() << ", cu mesajul: " << this->serv.elemAtServMesaj(j).getInformatie()<<endl;
					}
				}
			}
			if (legaturi.size() == 0)
			{
				cout << "Nu exista niciun mesaj trimis catre cineva."<<endl;
			}

		}
}



void UI::displayMenu()
{
	cout << endl;
	cout << "Alegeti una din optiunile de mai jos." << endl;
	cout << "1. Cerinte pentru utilizator." << endl;
	cout << "2. Cerinte pentru prietenie." << endl;
	cout << "3. Cerinte pentru evenimente." << endl;
	cout << "4. Cerinte pentru mesaje." << endl;
	cout << "..............................................." << endl;
	cout << "5.Iesire." << endl;
}

void UI::displayMenuUtilizator()
{
	cout << endl;
	cout << "Alegeti una din optiunile de mai jos." << endl;
	cout << "1. Adauga utilizator." << endl;
	cout << "2. Afisare utilizatori." << endl;
	cout << "3. Modificare utilizator." << endl;
	cout << "4. Sterge utilizator." << endl;
	cout << "5. Sa se afiseze relatiile de prietenie pentru un anumit utilizator."<<endl;
	cout << "6. Sa se afiseze mesajele unui anumit utilizator."<<endl;
	cout << "..............................................." << endl;
	cout << "7.Iesire din submeniu." << endl;
}

void UI::displayMenuPrietenie()
{
	cout << endl;
	cout << "Alegeti una din optiunile de mai jos." << endl;
	cout << "1. Adauga prietenie." << endl;
	cout << "2. Afisare prietenii." << endl;
	cout << "3. Modificare prietenie." << endl;
	cout << "4. Sterge prietenie." << endl;
	cout << "..............................................." << endl;
	cout << "5.Iesire din submeniu." << endl;
}

void UI::displayMenuEveniment()
{
	cout << endl;
	cout << "Alegeti una din optiunile de mai jos." << endl;
	cout << "1. Adauga eveniment." << endl;
	cout << "2. Afisare evenimente." << endl;
	cout << "3. Modificare eveniment." << endl;
	cout << "4. Sterge eveniment." << endl;
	cout << "..............................................." << endl;
	cout << "5.Iesire din submeniu." << endl;
}

void UI::displayMenuMesaj()
{
	cout << endl;
	cout << "Alegeti una din optiunile de mai jos." << endl;
	cout << "1. Adauga mesaj." << endl;
	cout << "2. Afisare mesaje." << endl;
	cout << "3. Modificare mesaj." << endl;
	cout << "4. Sterge mesaj." << endl;
	cout << "..............................................." << endl;
	cout << "5.Iesire din submeniu." << endl;
}

void UI::cerinteUtilizator()
{
	int optiune;
	

	bool b = true;
	while (b)
	{
		this->displayMenuUtilizator();


		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddUtilizator();
			//contor = true;
		}
		else if (optiune == 2 )
		{
			this->uiGetAllUtilziator();
		}
		/*else if (optiune == 2 )
		{
			cout << "Nu s a adaugat niciun utilizator";
			cout << endl;
		}*/
		else if (optiune == 3)
		{
			this->uiUpdateUtilizator();
		}
		else if (optiune == 4)
		{
			this->uiDeleteUtilizator();

		}
		else if (optiune == 5 )
		{
			this->uiPrieteniUtilizatori();

		}
		else if (optiune == 6)
		{
			this->uiMesajeUtilizator();

		}
		else if (optiune == 7 )
		{
			b=false;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 and optiune != 5 and optiune !=6 and optiune!=7)

		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}

	}
}

void UI::cerintePrietenie()
{
	int optiune;
	

	bool b = true;
	while (b)
	{
		this->displayMenuPrietenie();


		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddPrietenie();
			//contor = true;
		}
		else if (optiune == 2 )
		{
			this->uiGetAllPrietenie();
		}
		else if (optiune == 2 )
		{
			cout << "Nu s a adaugat nicio prietenie";
			cout << endl;
		}
		else if (optiune == 3)
		{
			this->uiUpdatePrietenie();
		}
		else if (optiune == 4)
		{
			this->uiDeletePrietenie();

		}
		else if (optiune == 5)
		{
			b = false;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 and optiune != 5)
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}
	}
}

void UI::cerinteEveniment()
{
	int optiune;
	bool contor = false;

	bool b = true;
	while (b)
	{
		this->displayMenuEveniment();


		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddEveniment();
			contor = true;
		}
		else if (optiune == 2 and contor)
		{
			this->uiGetAllEveniment();
		}
		else if (optiune == 2 and !contor)
		{
			cout << "Nu s a adaugat niciun eveniment";
			cout << endl;
		}
		else if (optiune == 3 and contor)
		{
			this->uiUpdateEveniment();
		}
		else if (optiune == 4 and contor)
		{
			this->uiDeleteEveniment();

		}
		else if (optiune == 5)
		{
			b = false;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 and optiune != 5)
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}
	}
}

void UI::cerinteMesaj()
{
	int optiune;
	

	bool b = true;
	while (b)
	{
		this->displayMenuMesaj();


		cin >> optiune;
		if (optiune == 1)
		{
			this->uiAddMesaj();
			//contor = true;
		}
		else if (optiune == 2)
		{
			this->uiGetAllMesaj();
		}
		else if (optiune == 2 )
		{
			cout << "Nu s a adaugat niciun mesaj";
			cout << endl;
		}
		else if (optiune == 3)
		{
			this->uiUpdateMesaj();
		}
		else if (optiune == 4)
		{
			this->uiDeleteMesaj();

		}
		else if (optiune == 5)
		{
			b = false;
		}
		else if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 and optiune != 5)
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}
	}
}

UI::UI()
{
	Utilizator u1(1, 16, "Alex", "Zalau");
	Utilizator u2(2, 17, "Andreea", "Zalau");
	Utilizator u3(3, 13, "Dan", "Zalau");
	Utilizator u4(4, 20, "Carla", "Cluj");
	Utilizator u5(5, 25, "Andrei", "Brasov");
	Utilizator u6(6, 16, "Alexia", "Bucuresti");
	Utilizator u7(7, 24, "Gabriela", "Cluj");
	Utilizator u8(8, 20, "Bernadett", "Timisoara");
	Utilizator u9(9, 21, "Andreea", "Sibiu");
	Utilizator u10(10, 17, "Giorgia", "Zalau");
	Utilizator u11(11, 18, "Ioan", "Cluj");
	Utilizator u12(12, 18, "Andrei", "Cluj");
	Utilizator u13(13, 18, "Gabriel", "Timisoara");
	Utilizator u14(14, 22, "Razvan", "Iasi");
	Utilizator u15(15, 16, "Emanuel", "Cluj");
	this->serv.addServUtilizator(u1);
	this->serv.addServUtilizator(u2);
	this->serv.addServUtilizator(u3);
	this->serv.addServUtilizator(u4);
	this->serv.addServUtilizator(u5);
	this->serv.addServUtilizator(u6);
	this->serv.addServUtilizator(u7);
	this->serv.addServUtilizator(u8);
	this->serv.addServUtilizator(u9);
	this->serv.addServUtilizator(u10);
	this->serv.addServUtilizator(u11);
	this->serv.addServUtilizator(u12);
	this->serv.addServUtilizator(u13);
	this->serv.addServUtilizator(u14);
	this->serv.addServUtilizator(u15);

	Prietenie p1(1, 3);
	Prietenie p2(1, 5);
	Prietenie p3(2, 5);
	Prietenie p4(2, 6);
	Prietenie p5(3, 7);
	Prietenie p6(3, 6);
	Prietenie p7(4, 7);
	Prietenie p8(4, 8);
	Prietenie p9(7, 8);
	Prietenie p10(9, 11);
	Prietenie p11(9, 10);
	Prietenie p12(10, 11);
	Prietenie p13(10, 13);
	Prietenie p14(12, 13);
	Prietenie p15(12, 14);
	Prietenie p16(13, 14);
	Prietenie p17(15, 14);
	Prietenie p18(15, 1);
	this->serv.addServPrietenie(p1);
	this->serv.addServPrietenie(p2);
	this->serv.addServPrietenie(p3);
	this->serv.addServPrietenie(p4);
	this->serv.addServPrietenie(p5);
	this->serv.addServPrietenie(p6);
	this->serv.addServPrietenie(p7);
	this->serv.addServPrietenie(p8);
	this->serv.addServPrietenie(p9);
	this->serv.addServPrietenie(p10);
	this->serv.addServPrietenie(p11);
	this->serv.addServPrietenie(p12);
	this->serv.addServPrietenie(p13);
	this->serv.addServPrietenie(p14);
	this->serv.addServPrietenie(p15);
	this->serv.addServPrietenie(p16);
	this->serv.addServPrietenie(p17);
	this->serv.addServPrietenie(p18);

	this->serv.addServMesaj(Mesaj(1, 3, "Heei, ce faci?"));
	this->serv.addServMesaj(Mesaj(1, 3, "Bine, tu?"));
	this->serv.addServMesaj(Mesaj(1, 5, "Salut!"));
	this->serv.addServMesaj(Mesaj(1, 5, "Salut si tie! Ce mai faci?"));
	this->serv.addServMesaj(Mesaj(2, 5, "Bine, tu?"));
	this->serv.addServMesaj(Mesaj(2, 5, "Mananc acum, nu pot vorbi"));
	this->serv.addServMesaj(Mesaj(2, 6, "Mergem afara?"));
	this->serv.addServMesaj(Mesaj(2, 6, "Ma imbrac si vin"));
	this->serv.addServMesaj(Mesaj(3, 7, "Abia astept sa te vad"));
	this->serv.addServMesaj(Mesaj(3, 7, "Si eu astept"));
	this->serv.addServMesaj(Mesaj(3, 6, "Avem tema la mate?"));
	this->serv.addServMesaj(Mesaj(3, 6, "Nu cred"));
	this->serv.addServMesaj(Mesaj(4, 7, "ok.paaaa"));
	this->serv.addServMesaj(Mesaj(4, 7, "paaa"));
	this->serv.addServMesaj(Mesaj(4, 8, "ii greu?"));
	this->serv.addServMesaj(Mesaj(4, 8, "e destul de greu"));
	this->serv.addServMesaj(Mesaj(7, 8, "o sa merg afara"));
	this->serv.addServMesaj(Mesaj(7, 8, "vin si eu"));
	this->serv.addServMesaj(Mesaj(9, 11, "distarctiv"));
	this->serv.addServMesaj(Mesaj(9, 11, "daaa!"));
	this->serv.addServMesaj(Mesaj(9, 10, "munca"));
	this->serv.addServMesaj(Mesaj(9, 10, "scoala"));
	this->serv.addServMesaj(Mesaj(10, 11, "plec"));
	this->serv.addServMesaj(Mesaj(10, 11, "o sa vin si eu"));
	this->serv.addServMesaj(Mesaj(12, 13, "ploua?"));
	this->serv.addServMesaj(Mesaj(12, 13, "nunu"));
	this->serv.addServMesaj(Mesaj(12, 14, "ieei"));
	this->serv.addServMesaj(Mesaj(12, 14, "hihi"));
	this->serv.addServMesaj(Mesaj(13, 14, "ce copii frumosi"));
	this->serv.addServMesaj(Mesaj(13, 14, "asa e "));
	this->serv.addServMesaj(Mesaj(15, 14, "salut"));
	this->serv.addServMesaj(Mesaj(15, 14, "bunaa"));
	this->serv.addServMesaj(Mesaj(15, 1, "pa"));
	this->serv.addServMesaj(Mesaj(15, 1, "papa"));
}

UI::UI(Service& service)
{
	this->serv = service;
}

UI::~UI()
{
}

void UI::runMenu()
{
	int optiune;
	bool contor = false;

	while (true)
	{
		this->displayMenu();


		cin >> optiune;
		if (optiune == 1)
		{
			this->cerinteUtilizator();
			//contor = true;
		}
		else if (optiune == 2 )
		{
			this->cerintePrietenie();
			//contor = true;
		}
		else if (optiune == 3 )
		{
			this->cerinteEveniment();
			//contor = true;
		}
		else if (optiune == 4 )
		{
			this->cerinteMesaj();
			//contor = true;
		}
		else if (optiune == 5)
		{
			break;
		}
		else// if (optiune != 1 and optiune != 2 and optiune != 3 and optiune != 4 and optiune != 5);
		{
			cout << "Optiune gresita! Reincercati!" << endl;
		}
	}
}
