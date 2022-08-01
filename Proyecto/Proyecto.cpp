#include <iostream>
#include <cmath>
#include <cstdlib>
#include <clocale>

using namespace std;
// Ejercicio2
int main(int argc, char** argv) {
	setlocale(LC_CTYPE, "Spanish");
	int a = 0;
	bool verificado;
	string respuesta[8];
	////////////DECLARACION DE PREGUNTAS
	


	string millonario[8][2]{
		
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
		////
		,"5.En cual de los siguientes paises el desierto de **Sahara** no forma parte de su extension:\n  A:Egipto\n  B:Tunez\n  C:Argelia\n  D:Kenia"
		,"D"
		///
		,"6.En que pais esta ubicada **Capital Gate**,la torre mas inclinada del mundo\n  A:Jordania\n  B:Arabia Saudita\n  C:Marruecos\n  D:Emiratos Arabes Unidos"
		,"D"
		/////
		,"7.Cal fue la moneda oficial de italia durante mas de cien años antes de ser reemplazada por el euro?\n  A:Corona\n  B:Rublo\n  C:Libra\n  D:Lira"
		,"D"
	};


	bool pregunta[8]{ false,false,false,false,false,false,false,false};

	for (int i = 0;i<8;i++) {
	a = rand() % 8;
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
