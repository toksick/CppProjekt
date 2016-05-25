// main.cpp

#include "Verein.h"
#include "FeldSpieler.h"
#include "Trainer.h"
#include "Torwart.h"

int main() {
	const unsigned int maxAnzKader = CKader::maxAnzKader;
	const unsigned int maxAnzFuehrung = CVerein::maxAnzFuehrung;
	CSpieler::e_position torwart = CSpieler::torwart;
	CSpieler::e_position mittelfeld = CSpieler::mittelfeld;
	CSpieler::e_position abwehr = CSpieler::abwehr;
	CSpieler::e_position sturm = CSpieler::sturm;

	CFuehrung::e_aufgabe praesident = CFuehrung::praesident;
	CFuehrung::e_aufgabe vorstand = CFuehrung::vorstand;
	CFuehrung::e_aufgabe sportdirektor = CFuehrung::sportdirektor;



	CPerson * pPersonenListe[maxAnzKader + maxAnzFuehrung];
	for (unsigned int i=0; i<maxAnzKader + maxAnzFuehrung; i++)
		pPersonenListe[i] = 0x0;
	
	unsigned int idx = 0;

	CVerein * vfbStuttgart = new CVerein();
	CKader * vfbKader = new CKader();

	// Aufbau des Kaders

	CTorwart * lehmann = new CTorwart("Lehmann", "Jens", 38, torwart, 1);
	vfbKader->add(*lehmann); pPersonenListe[idx++] = lehmann;
	lehmann->setStrafRaumBerherrschung(12);
	lehmann->setLinienQualitaet(4);
	lehmann->setAbwehrKommunikation(49);

	CTorwart * stolz = new CTorwart("Stolz", "Alexander", 25, torwart, 12);
	vfbKader->add(*stolz); pPersonenListe[idx++] = stolz;
	stolz->setStrafRaumBerherrschung(54);
	stolz->setLinienQualitaet(24);
	stolz->setAbwehrKommunikation(5);

	CTorwart * ulreich = new CTorwart("Ulreich", "Swen", 20, torwart, 24);
	vfbKader->add(*ulreich); pPersonenListe[idx++] = ulreich;
	ulreich->setBallbeherrschung(123);
	ulreich->setSchussgenauigkeit(24);
	ulreich->setSchusskraft(63);
	ulreich->setVerteidigung(21);

	CFeldSpieler * boka = new CFeldSpieler("Boka", "Arthur", 25, abwehr, 15);
	vfbKader->add(*boka); pPersonenListe[idx++] = boka;
	boka->setBallbeherrschung(29);
	boka->setSchussgenauigkeit(57);
	boka->setSchusskraft(93);
	boka->setVerteidigung(10);

	CFeldSpieler * boulahrouz = new CFeldSpieler("Boulahrouz", "Khalid", 26, abwehr, 4);
	vfbKader->add(*boulahrouz); pPersonenListe[idx++] = boulahrouz;
	boulahrouz->setBallbeherrschung(49);
	boulahrouz->setSchussgenauigkeit(19);
	boulahrouz->setSchusskraft(94);
	boulahrouz->setVerteidigung(38);

	CFeldSpieler * delpierre = new CFeldSpieler("Delpierre", "Matthieu", 27, abwehr, 17);
	vfbKader->add(*delpierre); pPersonenListe[idx++] = delpierre;
	delpierre->setBallbeherrschung(85);
	delpierre->setSchussgenauigkeit(93);
	delpierre->setSchusskraft(5);
	delpierre->setVerteidigung(33);

	CFeldSpieler * magnin = new CFeldSpieler("Magnin", "Ludewic", 29, abwehr, 21);
	vfbKader->add(*magnin); pPersonenListe[idx++] = magnin;
	magnin->setBallbeherrschung(43);
	magnin->setSchussgenauigkeit(29);
	magnin->setSchusskraft(94);
	magnin->setVerteidigung(29);

	CFeldSpieler * osorio = new CFeldSpieler("Osorio", "Ricardo", 28, abwehr, 3);
	vfbKader->add(*osorio); pPersonenListe[idx++] = osorio;
	osorio->setBallbeherrschung(9);
	osorio->setSchussgenauigkeit(39);
	osorio->setSchusskraft(37);
	osorio->setVerteidigung(48);

	CFeldSpieler * pischorn = new CFeldSpieler("Pischorn", "Marco", 22, abwehr, 42);
	vfbKader->add(*pischorn); pPersonenListe[idx++] = pischorn;
	pischorn->setBallbeherrschung(2);
	pischorn->setSchussgenauigkeit(92);
	pischorn->setSchusskraft(68);
	pischorn->setVerteidigung(57);

	CFeldSpieler * tasci = new CFeldSpieler("Tasci", "Serdar", 21, abwehr, 5);
	vfbKader->add(*tasci); pPersonenListe[idx++] = tasci;
	tasci->setBallbeherrschung(48);
	tasci->setSchussgenauigkeit(68);
	tasci->setSchusskraft(40);
	tasci->setVerteidigung(86);

	CFeldSpieler * bastuerk = new CFeldSpieler("Bastuerk", "Yildiray", 30, mittelfeld, 10);
	vfbKader->add(*bastuerk); pPersonenListe[idx++] = bastuerk;
	bastuerk->setBallbeherrschung(28);
	bastuerk->setSchussgenauigkeit(95);
	bastuerk->setSchusskraft(84);
	bastuerk->setVerteidigung(93);

	CFeldSpieler * elson = new CFeldSpieler("Elson", "", 27, mittelfeld, 25);
	vfbKader->add(*elson); pPersonenListe[idx++] = elson;
	elson->setBallbeherrschung(93);
	elson->setSchussgenauigkeit(11);
	elson->setSchusskraft(22);
	elson->setVerteidigung(23);

	CFeldSpieler * hilbert = new CFeldSpieler("Hilbert", "Roberto", 24, mittelfeld, 19);
	vfbKader->add(*hilbert); pPersonenListe[idx++] = hilbert;
	hilbert->setBallbeherrschung(99);
	hilbert->setSchussgenauigkeit(76);
	hilbert->setSchusskraft(96);
	hilbert->setVerteidigung(69);

	CFeldSpieler * hitzlsberger = new CFeldSpieler("Hitzlsberger", "Thomas", 26, mittelfeld, 11);
	vfbKader->add(*hitzlsberger); pPersonenListe[idx++] = hitzlsberger;
	hitzlsberger->setBallbeherrschung(10);
	hitzlsberger->setSchussgenauigkeit(39);
	hitzlsberger->setSchusskraft(17);
	hitzlsberger->setVerteidigung(52);

	CFeldSpieler * khedira = new CFeldSpieler("Khedira", "Sami", 21, mittelfeld, 28);
	vfbKader->add(*khedira); pPersonenListe[idx++] = khedira;
	khedira->setBallbeherrschung(55);
	khedira->setSchussgenauigkeit(45);
	khedira->setSchusskraft(84);
	khedira->setVerteidigung(21);

	CFeldSpieler * lanig = new CFeldSpieler("Lanig", "Martin", 24, mittelfeld, 7);
	vfbKader->add(*lanig); pPersonenListe[idx++] = lanig;
	lanig->setBallbeherrschung(52);
	lanig->setSchussgenauigkeit(84);
	lanig->setSchusskraft(85);
	lanig->setVerteidigung(73);

	CFeldSpieler * mandjeck = new CFeldSpieler("Mandjeck", "Georgis", 19, mittelfeld, 29);
	vfbKader->add(*mandjeck); pPersonenListe[idx++] = mandjeck;
	mandjeck->setBallbeherrschung(12);
	mandjeck->setSchussgenauigkeit(54);
	mandjeck->setSchusskraft(57);
	mandjeck->setVerteidigung(52);

	CFeldSpieler * pardo = new CFeldSpieler("Pardo", "Pavel", 32, mittelfeld, 13);
	vfbKader->add(*pardo); pPersonenListe[idx++] = pardo;
	pardo->setBallbeherrschung(99);
	pardo->setSchussgenauigkeit(66);
	pardo->setSchusskraft(33);
	pardo->setVerteidigung(77);

	CFeldSpieler * rudy = new CFeldSpieler("Rudy", "Sebastian", 18, mittelfeld, 16);
	vfbKader->add(*rudy); pPersonenListe[idx++] = rudy;
	rudy->setBallbeherrschung(51);
	rudy->setSchussgenauigkeit(15);
	rudy->setSchusskraft(91);
	rudy->setVerteidigung(19);

	CFeldSpieler * simak = new CFeldSpieler("Simak", "Jan", 30, mittelfeld, 8);
	vfbKader->add(*simak); pPersonenListe[idx++] = simak;
	simak->setBallbeherrschung(12);
	simak->setSchussgenauigkeit(22);
	simak->setSchusskraft(37);
	simak->setVerteidigung(47);

	CFeldSpieler * traesch = new CFeldSpieler("Traesch", "Christian", 21, mittelfeld, 35);
	vfbKader->add(*traesch); pPersonenListe[idx++] = traesch;
	traesch->setBallbeherrschung(85);
	traesch->setSchussgenauigkeit(64);
	traesch->setSchusskraft(73);
	traesch->setVerteidigung(19);
	
	CFeldSpieler * cacau = new CFeldSpieler("Cacau", "", 27, sturm, 18);
	vfbKader->add(*cacau); pPersonenListe[idx++] = cacau;
	cacau->setBallbeherrschung(79);
	cacau->setSchussgenauigkeit(46);
	cacau->setSchusskraft(13);
	cacau->setVerteidigung(28);

	CFeldSpieler * fischer = new CFeldSpieler("Fischer", "Manuel", 19, sturm, 23);
	vfbKader->add(*fischer); pPersonenListe[idx++] = fischer;
	fischer->setBallbeherrschung(73);
	fischer->setSchussgenauigkeit(40);
	fischer->setSchusskraft(18);
	fischer->setVerteidigung(42);

	CFeldSpieler * gomez = new CFeldSpieler("Gomez", "Mario", 23, sturm, 33);
	vfbKader->add(*gomez); pPersonenListe[idx++] = gomez;
	gomez->setBallbeherrschung(68);
	gomez->setSchussgenauigkeit(37);
	gomez->setSchusskraft(24);
	gomez->setVerteidigung(1);

	CFeldSpieler * ljuboja = new CFeldSpieler("Ljuboja", "Danijel", 30, sturm, 38);
	vfbKader->add(*ljuboja); pPersonenListe[idx++] = ljuboja;
	ljuboja->setBallbeherrschung(95);
	ljuboja->setSchussgenauigkeit(51);
	ljuboja->setSchusskraft(10);
	ljuboja->setVerteidigung(3);

	CFeldSpieler * marica = new CFeldSpieler("Marica", "Ciprian", 23, sturm, 9);
	vfbKader->add(*marica); pPersonenListe[idx++] = marica;
	marica->setBallbeherrschung(45);
	marica->setSchussgenauigkeit(12);
	marica->setSchusskraft(78);
	marica->setVerteidigung(65);

	CTrainer * veh = new CTrainer("Veh", "Armin", 47);
	vfbKader->add(*veh); pPersonenListe[idx++] = veh;
	veh->setLizenzstufe(12);

	// Aufbau des Vereins

	vfbStuttgart->add(*vfbKader);

	CFuehrung * staudt = new CFuehrung("Staudt", "Erwin", 60, praesident);
	vfbStuttgart->add(*staudt);  pPersonenListe[idx++] = staudt;

	CFuehrung * ruf = new CFuehrung("Ruf", "Ulrich", 52, vorstand);
	vfbStuttgart->add(*ruf);  pPersonenListe[idx++] = ruf;

	CFuehrung * heldt = new CFuehrung("Heldt", "Horst", 38, sportdirektor);
	vfbStuttgart->add(*heldt);  pPersonenListe[idx++] = heldt;

	// Ausgabe des Vereins

	vfbStuttgart->print();

	system("pause");

	// Abbau des allokierten Speichers

	for (int i=0; i<maxAnzFuehrung + maxAnzKader; i++)
		if (pPersonenListe[i] != 0x0)
			delete pPersonenListe[i];

	delete vfbKader;
	delete vfbStuttgart;

	return 0;
}

//#include "Trainer.h"
//#include "Fuehrung.h"
//
//int main() {
//
//	CTrainer* trainer = new CTrainer("Max", "Mustermann", 55);
//	trainer->print();
//	CFuehrung* fuehrung = new CFuehrung("Max", "Mustermann", 55, CFuehrung::praesident);
//	fuehrung->print();
//
//	std::cout << "Press enter to continue ..."; 
//    std::cin.get(); 
//	//system("pause");
//	return 0;
//}