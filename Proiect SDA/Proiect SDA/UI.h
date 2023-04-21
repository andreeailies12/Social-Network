#pragma once
#include "Service.h"
//#include "serviceUtilizator.h"

using namespace std;

class UI {
private:
	Service serv;
	void displayMenu();
	void displayMenuUtilizator();
	void displayMenuPrietenie();
	void displayMenuEveniment();
	void displayMenuMesaj();
	void cerinteUtilizator();
	void cerintePrietenie();
	void cerinteEveniment();
	void cerinteMesaj();

	void uiAddUtilizator();
	void uiGetAllUtilziator();
	void uiUpdateUtilizator();
	void uiDeleteUtilizator();

	void uiAddPrietenie();
	void uiGetAllPrietenie();
	void uiUpdatePrietenie();
	void uiDeletePrietenie();

	void uiAddEveniment();
	void uiGetAllEveniment();
	void uiUpdateEveniment();
	void uiDeleteEveniment();

	void uiAddMesaj();
	void uiGetAllMesaj();
	void uiUpdateMesaj();
	void uiDeleteMesaj();

	void uiPrieteniUtilizatori();
	void uiMesajeUtilizator();

public:
	UI();
	UI(Service& service);
	~UI();
	void runMenu();
};