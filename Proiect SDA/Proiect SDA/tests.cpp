#include "tests.h"
#include "Utilizator.h"
#include "Prietenie.h"
#include "Mesaj.h"
#include "Eveniment.h"
#include <assert.h>
#include "Service.h"

void testUtilizator()
{
	Utilizator ut1;
	assert(ut1.getId() == 0);
	assert(ut1.getVarsta() == 0);
	assert(strcmp(ut1.getNume(), "") == 0);
	assert(strcmp(ut1.getLocalitate(), "") == 0);


	Utilizator ut2(1,12,"Alex","Zalau");
	assert(ut2.getId() == 1);
	assert(ut2.getVarsta() == 12);
	assert(strcmp(ut2.getNume(), "Alex") == 0);
	assert(strcmp(ut2.getLocalitate(), "Zalau") == 0);

	Utilizator ut3(ut2);
	assert(ut3.getId() == 1);
	assert(ut3.getVarsta() == 12);
	assert(strcmp(ut3.getNume(), "Alex") == 0);
	assert(strcmp(ut3.getLocalitate(), "Zalau") == 0);

	ut3.setVarsta(20);
	assert(ut3.getVarsta() == 20);
	ut3.setId(3);
	assert(ut3.getId() == 3);
	ut3.setNume("Mihai");
	assert(strcmp(ut3.getNume(), "Mihai") == 0);
	ut3.setLocalitate("Cluj");
	assert(strcmp(ut3.getLocalitate(), "Cluj") == 0);

	Utilizator ut4;
	ut4 = ut2;
	assert(ut4.getId() == 1);
	assert(ut4.getVarsta() == 12);
	assert(strcmp(ut4.getNume(), "Alex") == 0);
	assert(strcmp(ut4.getLocalitate(), "Zalau") == 0);


	assert(ut2 == ut4);
	assert(!(ut3 == ut2));
}

void testPrietenie()
{
	Prietenie pr1;
	assert(pr1.getIdUtilizator1() == 0);
	assert(pr1.getIdUtilizator2() == 0);

	Prietenie pr2(1,2);
	assert(pr2.getIdUtilizator1() == 1);
	assert(pr2.getIdUtilizator2() == 2);
	

	Prietenie pr3(pr2);
	assert(pr3.getIdUtilizator1() == 1);
	assert(pr3.getIdUtilizator2() == 2);
	

	pr3.setIdUtilizator1(20);
	assert(pr3.getIdUtilizator1() == 20);
	pr3.setIdUtilizator2(3);
	assert(pr3.getIdUtilizator2() == 3);
	

	Prietenie pr4;
	pr4 = pr2;
	assert(pr4.getIdUtilizator1() == 1);
	assert(pr4.getIdUtilizator2() == 2);



	assert(pr2 == pr4);
	assert(!(pr3 == pr2));
}

void testMesaj()
{

	Mesaj ms1;
	assert(ms1.getIdUtilizator1() == 0);
	assert(ms1.getIdUtilizator2() == 0);
	assert(strcmp(ms1.getInformatie(), "") == 0);


	Mesaj ms2(1, 2, "aici");
	assert(ms2.getIdUtilizator1() == 1);
	assert(ms2.getIdUtilizator2() == 2);
	assert(strcmp(ms2.getInformatie(), "aici") == 0);


	Mesaj ms3(ms2);
	assert(ms2.getIdUtilizator1() == 1);
	assert(ms2.getIdUtilizator2() == 2);
	assert(strcmp(ms2.getInformatie(), "aici") == 0);

	ms3.setIdUtilizator1(20);
	assert(ms3.getIdUtilizator1() == 20);
	ms3.setIdUtilizator2(3);
	assert(ms3.getIdUtilizator2() == 3);
	ms3.setInformatie("voi");
	assert(strcmp(ms3.getInformatie(), "voi") == 0);


	Mesaj ms4;
	ms4 = ms2;
	assert(ms2.getIdUtilizator1() == 1);
	assert(ms2.getIdUtilizator2() == 2);
	assert(strcmp(ms2.getInformatie(), "aici") == 0);


	assert(ms2 == ms4);
	assert(!(ms3 == ms2));
}

void testEveniment()
{
	Eveniment ev1;
	assert(strcmp(ev1.getNume(), "") == 0);
	assert(strcmp(ev1.getDescriere(), "") == 0);


	Eveniment ev2("Casa", "nord");
	assert(strcmp(ev2.getNume(), "Casa") == 0);
	assert(strcmp(ev2.getDescriere(), "nord") == 0);

	Eveniment ev3(ev2);
	assert(strcmp(ev3.getNume(), "Casa") == 0);
	assert(strcmp(ev3.getDescriere(), "nord") == 0);

	ev3.setNume("Doi");
	assert(strcmp(ev3.getNume(), "Doi") == 0);
	ev3.setDescriere("Cluj");
	assert(strcmp(ev3.getDescriere(), "Cluj") == 0);

	Eveniment ev4;
	ev4 = ev2;
	assert(strcmp(ev4.getNume(), "Casa") == 0);
	assert(strcmp(ev4.getDescriere(), "nord") == 0);


	assert(ev2 == ev4);
	assert(!(ev3 == ev2));
}

void testService()
{

	//pentru utilizator
	Service service;
	Utilizator ut1(1, 15, "Andrei", "Zalau");
	Utilizator ut2(2, 17, "Bogdan", "Zalau");

	service.addServUtilizator(ut1);
	service.addServUtilizator(ut2);
	assert(service.elemAtServUtilizator(0) == ut1);
	assert(service.elemAtServUtilizator(1) == ut2);

	Utilizator ut3(3, 25, "Alex", "Cluj");
	service.addServUtilizator(ut3);
	service.deleteServEveniment(0);
	assert(service.elemAtServUtilizator(0) == ut1);
	Utilizator ut(4, 15, "Mirela", "Brasov");
	service.updateServUtilizator(1, ut);
	assert(service.elemAtServUtilizator(0) == ut);


	//pentru Prietenie
	Prietenie pr1(1, 2);
	Prietenie pr2(1, 3);
	Prietenie pr3(2, 3);

	service.addServPrietenie(pr1);
	service.addServPrietenie(pr2);
	service.addServPrietenie(pr3);
	assert(service.elemAtServPrietenie(0) == pr1);
	assert(service.elemAtServPrietenie(1) == pr2);
	assert(service.elemAtServPrietenie(2) == pr3);
	service.deleteServPrietenie(1);
	assert(service.elemAtServPrietenie(0) == pr2);
	assert(service.elemAtServPrietenie(1) == pr3);
	Prietenie pr(9, 9);
	service.updateServPrietenie(1, pr);
	assert(service.elemAtServPrietenie(0) == pr);


	//pentru Evenimente
	Eveniment ev1("Zana", "pentru copii");
	Eveniment ev2("Ana", "pentru adulti");
	Eveniment ev3("Micul print", "pentru adulti");

	service.addServEveniment(ev1);
	service.addServEveniment(ev2);
	service.addServEveniment(ev3);
	assert(service.elemAtServEveniment(0) == ev1);
	assert(service.elemAtServEveniment(1) == ev2);
	assert(service.elemAtServEveniment(2) == ev3);
	service.deleteServEveniment(1);
	assert(service.elemAtServEveniment(0) == ev2);
	assert(service.elemAtServEveniment(1) == ev3);
	Eveniment ev("Cenusereasa", "pentru copii");
	service.updateServEveniment(1, ev);
	assert(service.elemAtServEveniment(0) == ev);

	

	//pentru mesaj
	Mesaj ms1(1, 2, "nu e ok");
	Mesaj ms2(2, 3, "e bine");
	Mesaj ms3(1, 3, "super");
	service.addServMesaj(ms1);
	service.addServMesaj(ms2);
	service.addServMesaj(ms3);
	assert(service.elemAtServMesaj(0) == ms1);
	assert(service.elemAtServMesaj(1) == ms2);
	assert(service.elemAtServMesaj(2) == ms3);
	service.deleteServMesaj(1);
	assert(service.elemAtServMesaj(0) == ms2);
	assert(service.elemAtServMesaj(1) == ms3);
	Mesaj ms(1, 10, "caine");
	service.updateServMesaj(1, ms);
	assert(service.elemAtServMesaj(0) == ms);

	



}

void testAll()
{
	testEveniment();
	testMesaj();
	testUtilizator();
	testPrietenie();
	testService();

}
