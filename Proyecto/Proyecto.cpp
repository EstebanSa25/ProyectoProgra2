#include <iostream>
#include <math.h>
#include <cmath>
using namespace std;
// Ejercicio2 
int main(int argc, char** argv) {
	double promediopar = 0, promedioimpar = 0, sumadorpar = 0, sumadorimpar = 0;
	int  numero[12];
	int cont1 = 0, cont2 = 0;
	for (int j = 0; j < 12; j++) {
		cout << "Digite el monto del numero" << endl;
		cin >> numero[j];
		if (numero[j] % 2 == 0) {
			cont1 += 1;
			sumadorpar += numero[j];
		}
		else {
			cont2 += 1;
			sumadorimpar += numero[j];
		}
	}
	promedioimpar = sumadorimpar / cont2;
	promediopar = sumadorpar / cont1;
	cout << "El promedio de numeros pares es de: " << promediopar << "\nEl promedio de numeros impares es de: " << promedioimpar << endl;
	system("PAUSE");
	return 0;
}