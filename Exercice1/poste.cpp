#include <iostream>
using namespace std;

const double tauxRabais = 0.01;
const double prixPois1 = 0.45; 
const double prixPois2 = 0.90;
const double prixPois3 = 1.10;
const double prixPois4 = 1.50;
const double taxe1 = 0.05;
const double taxe2 = 0.09975;

void main() {
	double pois, somme, sousTotale, prixTaxe1, prixTaxe2, rabais, nblettre;
	
	sousTotale = 0;
	nblettre = 0;

	do {
		//do{
		cout << "saisir le pois de la lettre : " << endl;
		cin >> pois;
		//} while (pois > 0);
		

		if (pois >= 120 ) {
			sousTotale = sousTotale + prixPois4;
		}
		else if (pois >= 81) {
			sousTotale = sousTotale + prixPois3;
		}
		else if (pois >= 27) {
			sousTotale = sousTotale + prixPois2;
		}
		else if (pois > 0){
			sousTotale = sousTotale + prixPois1;
		}

		nblettre = nblettre + 1;

	} while (pois != 0);


	prixTaxe1 = sousTotale * taxe1;
	prixTaxe2 = sousTotale * taxe2;

	if (sousTotale > 20) {

		somme = (sousTotale - (sousTotale * tauxRabais)) + sousTotale * (taxe1 + taxe2);
		rabais = sousTotale * tauxRabais;

		cout << " Sous totale : " << sousTotale << endl;
		cout << " Reduction : " << rabais << endl;
		cout << " TPS (5%)  : " << prixTaxe1 << endl;
		cout << " TVQ (9.975%)  : " << prixTaxe2 << endl;
		cout << " Totale : " << somme << endl;

	}
	else {
		somme = sousTotale + sousTotale * (taxe1 + taxe2);

		cout << " Sous totale : " << sousTotale << endl;
		cout << " Reduction : " << 0 << endl;
		cout << " TPS (5%)  : " << prixTaxe1 << endl;
		cout << " TVQ (9.975%)  : " << prixTaxe2 << endl;
		cout << " Totale : " << somme << endl;
	}

			

}