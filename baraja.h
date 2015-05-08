#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

typedef int Carta

int main(){
	//xd
}

class Baraja{
	vector<Carta> cartas;

	Baraja(Carta numCartas=207){
		for(Carta i = 0; i < numCartas; i++)
			cartas.push_back(i);
	}

	public:
		void Revolver(){
			random_shuffle(cartas.begin(), cartas.end());
		}

		Carta Jalar(){
			Carta carta = cartas[0];
			cartas.erase(cartas.begin());
			return carta;
		}
};

class Mano{
	vector <Carta> cartas;
	vector <int> Valores;

	void AgregarMano(Baraja baraja){
		cartas.push_back(baraja.Jalar());
	}
	void CalculaValor(){
		
	}

};
