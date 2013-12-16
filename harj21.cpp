/* HARJOITUS 21

Tekija: Hanna Lukkarinen, IIO13S1
Pvm: 19.11.2013

Kuvaus:
Muunna harjoitus 11 niin, etta k‰yt‰t seuraavia aliohjelmia:
int KysyValinta(void);
-> KysyValinta palauttaa k‰ytt‰j‰n antaman valintanumeron (0-6)
double Summa(float luku1, int luku2);
-> Summa laskee yhteen annetut tiedot ja palauttaa summan p‰‰ohjelmaan */

#include <iostream> 
using namespace std; 

int luku1, luku2;
float tulos;

int KysyValinta(void);
double Summa(int luku1, int luku2);

void main() 
{
	int summa = 0, keskeytys = 0;
	cout<<"Anna kaksi kokonaislukua: \n";
	cin>>luku1>>luku2;

	while(keskeytys == 0)
	{
	int valinta = KysyValinta();

	switch(valinta) 
		{ 
		case 0:
			keskeytys = 1;
			break;
		case 1:	
			tulos=Summa(luku1, luku2);
			cout<<"Lukujen summa: "<<tulos<<endl;
 		    break; 
		case 2: cout<<"Anna luku: "<<endl;
			cin>>luku1;
			cout<<"Anna toinen luku: "<<endl;
			cin>>luku2;
			continue;
		default:
			keskeytys = 1;
			break; 
		} 
	}

}

double Summa(int luku1, int luku2)
{
	double tulos;

	tulos = luku1+luku2;
	return tulos;
}

int KysyValinta()
{
	int valinta;
	cout<<	"VALIKKO\n"
			"0. Lopetus\n"
			"1. Summa\n"
			"2. Syˆt‰ uudet luvut laskemista varten"<<endl;
	cin>>valinta;
	return valinta;
}