#include <iostream>
#include <cmath>
#include <cstdlib>
#include <clocale>
#include<windows.h>

using namespace std;
// Ejercicio2
int main(int argc, char** argv) {
	int NumeroRandom = 0;//se declara la variable que generara los numeros aleatorios para la pregunta
	string respuesta[11];//array para almacenar la respuesta del usuario
	string RespuestaDefinitiva;
	setlocale(LC_CTYPE, "Spanish");//este codigo junto con la libreria #include <clocale> para usar caractes como ççÒ
	/*Aqui se declara las preguntas*/string millonario[11][2]{
		
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
		,"7.øC˙al fue la moneda oficial de italia durante mas de cien aÒos antes de ser reemplazada por el euro?\n  A:Corona\n  B:Rublo\n  C:Libra\n  D:Lira"
		,"D"
		//////
		,"8.øC˙antas aristas tiene un cubo?\n  A:16\n  B:12\n  C:8\n  D:4"
		,"B"
		//////
		,"9.Durante el programa de la NASA \"Apolo\",øcu·ntos astronautas pisaron la Luna?\n  A:3\n  B:6\n  C:9\n  D:12"
		,"D"
		//////
		,"10.øCu·l es el gas que infla las bolsas de aire,o \"airbags\",que se encuentran en los automÛviles?\n  A:Helio\n  B:NitrÛgeno\n  C:OxÌgeno\n  D:HidrÛgeno"
		,"B"
	};


	bool verificacionRepetidos[11]{ false,false,false,false,false,false,false,false,false,false,false};//

	for (int i = 0;i<11;i++) {//Aqui se imprimen las preguntas y se valida que no se repitan
	NumeroRandom = rand() % 13;//Variable que genera numeros aleatorios
	cout << NumeroRandom<<endl;
		
		if (verificacionRepetidos[NumeroRandom]==false) {//
			cout << millonario[NumeroRandom][0] << endl;
			cin >> respuesta[NumeroRandom];
			
			do {
				
				cout << "Respuesta definitiva?\nDigita SI o NO tambien puedes acceder a uno de tus comodines escribiendo Comodin" << endl;
				cin >> RespuestaDefinitiva;
				system("cls");
				
				if (RespuestaDefinitiva == "SI" || RespuestaDefinitiva == "si") {
					respuesta[NumeroRandom] = respuesta[NumeroRandom];
				}
				else if (RespuestaDefinitiva == "Comodin") {
					respuesta[NumeroRandom] = "comodin";

				}
				else {
					cout << "Te repito de nuevo la pregunta" << endl;
					cout << millonario[NumeroRandom][0] << endl;
					cin >> respuesta[NumeroRandom];
					system("cls");
				}

			} while (RespuestaDefinitiva != "SI" || RespuestaDefinitiva != "SI");
			
			verificacionRepetidos[NumeroRandom] = true;
			system("cls");

		}
		else {
			i--;
		}
		
	}
	
	system("PAUSE");
	return 0;
}// main
