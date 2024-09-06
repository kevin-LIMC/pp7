// pp7.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main() {

	const int capacidad = 10;

	vector<int>elementos(capacidad);
	int cima = -1;

	cout << "Tecla elemento de la pila (termina con -1) \n";

	int x = 0;
	const int CLAVE = -1;

	while (x != CLAVE) {

		string entrada;
		cin >> entrada;
		try {

			x = stoi(entrada);
			if (cima < capacidad - 1) {

				cima++;
				elementos[cima] = x;


			}
			else {

				cout << "Pila Llena\n";
				break;
			}
		}
		catch (const invalid_argument&) {
			"Entrada no valida\n";

		}


	}
	if (cima >= 0) {

		cout << "Elementos de la pila\n";

		while (cima >= 0) {
			x = elementos[cima];
			cima--;
			cout << x << " ";
		}
	}
	else {
		cout << "Pila Vacia\n";
	}

	return 0;

