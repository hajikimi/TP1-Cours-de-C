#include <iostream>
using namespace std;

const double rabais = 0.01;
const double prixPois1 = 0.45; 
const double prixPois2 = 0.90;
const double prixPois3 = 1.10;
const double prixPois4 = 1.50;
const double taxe1 = 0.0775;
const double taxe2 = 0.0775;

void main() {
	double pois, somme, sousTotale, nblettre;
	
	sousTotale = 0;
	nblettre = 0;

	do {
		do{
		cout << "saisir le pois de la lettre : " << endl;
		cin >> pois;
		} while (pois > 0);
		{
			if (pois < 0){
			cout << "saisir un chiffre positif" << endl;
			}
		}

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
	if (sousTotale > 20) {
		somme = sousTotale - (sousTotale * rabais);


	}
	else {
		somme = sousTotale;
	}


	
}