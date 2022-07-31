#include <iostream>
#include <cmath>
#include <cstdlib>
using namespace std;
// Ejercicio2
int main(int argc, char** argv) {
	int a = 0;
	bool verificado;
	string respuesta[3];
	////////////DECLARACION DE PREGUNTAS
	string millonario[5][2]{
		
		 "0.Quien descubrio America\n  A:Magallanes\n  B:Colon\n  C:Bush\n  D:Araya"
		  ,"B"
		//////
		,"1.En que alimentos encontramos la vitamina C\n  A:Citricos:La naranja\n  B:Granos:El arroz\n  C:Legumbres:habichuelas\n  D:Lacteos:La leche"
		,"A"
		//////
		,"2.Como se  llama el movimiento de retroceso que hacen las olas luego de llegar a la orilla\n  A:Resaca\n  B:Arrastre\n  C:Turbulencia\n  D:Repunte"
		,"A"
		/////
		,"3.Que pais se tendria que visitar para ver las ruinas de troya\n  A:Grecia\n  B:Turquia\n  C:Bilgaria\n  D:Rumania"
		,"B"
		/////
		,"4.En el Castillo de Amboise localizado en Francia se encuentra la tumba del pintor:\n  A:Francisco de Goya\n  B:Leonardo da Vinci\n  C:Miguel Angel\n  D:Claude Monet"
		,"B"
		/////
	};
	////////////DECLARACION DE PREGUNTAS
	string millonarioRespuestasCorrectas[5]{
	/*Preunta 0*/"B"
	/*Preunta 1*/,"A"
	/*Preunta 2*/,"A"
	/*Preunta 3*/,"B"
	/*Preunta 4*/,"B"
	
	};
	bool pregunta[5]{ false,false,false,false};

	for (int i = 0;i<5;i++) {
	a = rand() % 3;
	cout << a<<endl;
		verificado=pregunta[a];
		if (verificado==false) {
			cout <<""<< millonario[a][0] << endl;
			cin >> respuesta[a];
			pregunta[a] = true;
		}
		else {
			i--;
		}
		
	}
	
	system("PAUSE");
	return 0;
}// main
