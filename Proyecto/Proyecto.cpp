#include <iostream>
#include <cmath>
#include <cstdlib>
#include <clocale>
#include<windows.h>
#include <string>
#include <iomanip>
#include <algorithm>
#include <sstream>
#include <map>
#include<cstdio>
#include<ctime>
#include<fstream>
#include<conio.h>
using namespace std;
// METODOS

////
bool ConsultarRespuesta(string respuesta,string respuestaCorrecta) {
	if (respuesta == respuestaCorrecta ) {
		return true;
	}
	else {
		return false;
	
	}
}
////////
bool ComprobarLetra(char respuesta) {
	bool comprobacion = false;
	
		if (respuesta == 'A' || respuesta == 'B' || respuesta == 'C' || respuesta == 'D') {
			return comprobacion = true;
		}
		else {
			return comprobacion = false;
		}
	
	
}
/////
bool RespuestaDefinitiva(string respuestaDefinitiva) {
	if (respuestaDefinitiva == "SI" || respuestaDefinitiva == "si") {
		return true;
	}
	else {
		return false;
	}
}
////////////////////////////////////////////
void MostrarPreguntas() {

	bool repetidos[]{ false,false,false,false,false,false,false,false,false,false,false,false,false,false,false };
	/*Aqui se declara las preguntas*/string millonario[11][6]{

		 "0.Quien descubrio America\n  A:Magallanes\n  B:Colon\n  C:Bush\n  D:Araya"
		  ,"B"
		,"A:Magallanes"
		,"B:Colon"
		,"C:Bush"
		,"D:Araya"
		//////

		,"1.En que alimentos encontramos la vitamina C\n  A:Citricos:La naranja\n  B:Granos:El arroz\n  C:Legumbres:habichuelas\n  D:Lacteos:La leche"
		,"A"
		,"A:Citricos:La naranja"
		,"B:Granos:El arroz"
		,"C:Legumbres:habichuelas"
		,"D:Lacteos:La leche"
		//////

		,"2.Como se  llama el movimiento de retroceso que hacen las olas luego de llegar a la orilla\n  A:Resaca\n  B:Arrastre\n  C:Turbulencia\n  D:Repunte"
		,"A"
		,"A:Resaca"
		,"B:Arrastre"
		,"C:Turbulencia"
		,"D:Repunte"
		/////

		,"3.Que pais se tendria que visitar para ver las ruinas de troya\n  A:Grecia\n  B:Turquia\n  C:Bulgaria\n  D:Rumania"
		,"B"
		,"A:Grecia"
		,"B:Turquia"
		,"C:Bulgaria"
		," D:Rumania"
		/////
		,"4.En el Castillo de Amboise localizado en Francia se encuentra la tumba del pintor:\n  A:Francisco de Goya\n  B:Leonardo da Vinci\n  C:Miguel Angel\n  D:Claude Monet"
		,"B"
		,"A:Francisco de Goya"
		,"B:Leonardo da Vinci"
		,"C:Miguel Angel"
		,"D:Claude Monet"
		////

		,"5.En cual de los siguientes paises el desierto de **Sahara** no forma parte de su extension:\n  A:Egipto\n  B:Tunez\n  C:Argelia\n  D:Kenia"
		,"D"
		,"A:Egipto"
		,"B:Tunez"
		,"C:Argelia"
		,"D:Kenia"
		///

		,"6.En que pais esta ubicada **Capital Gate**,la torre mas inclinada del mundo\n  A:Jordania\n  B:Arabia Saudita\n  C:Marruecos\n  D:Emiratos Arabes Unidos"
		,"D"
		,"A:Jordania"
		,"B:Arabia Saudita"
		,"C:Marruecos"
		,"D:Emiratos Arabes Unidos"
		/////

		,"7.øC˙al fue la moneda oficial de italia durante mas de cien aÒos antes de ser reemplazada por el euro?\n  A:Corona\n  B:Rublo\n  C:Libra\n  D:Lira"
		,"D"
		,"A:Corona"
		,"B:Rublo"
		,"C:Libra"
		,"D:Lira"
		//////

		,"8.øC˙antas aristas tiene un cubo?\n  A:16\n  B:12\n  C:8\n  D:4"
		,"B"
		,"A:16"
		,"B:12"
		,"C:8"
		,"D:4"
		//////
		,"9.Durante el programa de la NASA \"Apolo\",øcu·ntos astronautas pisaron la Luna?\n  A:3\n  B:6\n  C:9\n  D:12"
		,"D"
		,"A:3"
		,"B:6"
		,"C:9"
		,"D:12"
		//////
		,"10.øCu·l es el gas que infla las bolsas de aire,o \"airbags\",que se encuentran en los automÛviles?\n  A:Helio\n  B:NitrÛgeno\n  C:OxÌgeno\n  D:HidrÛgeno"
		,"B"
		,"A:Helio"
		,"B:NitrÛgeno"
		,"C:OxÌgeno"
		,"D:HidrÛgeno"
	};
	string respuestaDefinitiva;
	char respuesta;
	int NumeroRandom = 0;
	for (int i = 0; i < 11; i++) {
		NumeroRandom = rand() % 13;
		if (repetidos[NumeroRandom] == false) {
			system("cls");
			cout << millonario[NumeroRandom][0]<<endl;
			cin >> respuesta;
			if (ComprobarLetra(respuesta)==true) {
				//cout << "Respuesta definitiva?" << endl;
			}//if letra
			///////////////////////
			else {
				///////////////
				while (ComprobarLetra(respuesta) != true) {
					
					
					cout << "OPCION INVALIDA" << endl << endl << "S U   R E S P U E S T A  :   ";
					cin >> respuesta;
				}
				///////////////
			}//else

			//Respuesta definitiva
			cout << "Respuesta definitiva?" << endl;
			cin >> respuestaDefinitiva;
			if (RespuestaDefinitiva(respuestaDefinitiva) == true) {

			}
			else {
				while (respuestaDefinitiva != "SI") {
					system("cls");
					cout << "Te repito la pregunta" << endl;
					cout << millonario[NumeroRandom][0] << endl;
					cin >> respuesta;

					cout << "Respuesta definitiva?" << endl;
					cin >> respuestaDefinitiva;
					if (ComprobarLetra(respuesta) == true) {
						//cout << "Respuesta definitiva?" << endl;
					}//if letra
					///////////////////////
					else {
						///////////////
						while (ComprobarLetra(respuesta) != true) {


							cout << "OPCION INVALIDA" << endl << endl << "S U   R E S P U E S T A  :   ";
							cin >> respuesta;
						}
						///////////////
					}//else
				}
			}
			//Respuesta definitiva
			int CHAR_LENGTH = 1;
			string respuestaConv(CHAR_LENGTH, respuesta);
			string respuestaCorrecta;
			respuestaCorrecta = millonario[NumeroRandom][1];
			if (ConsultarRespuesta(respuestaConv,respuestaCorrecta) == true) {
				cout << "correcto" << endl;
				
			}
			else {
				cout << "incorrecto" << endl;
				exit(0);

			}
			////////////////
			
		}//if repetidos
		
		
		//if
		else {//else de repetidos
			i--;
		}//else
		
	}//for

}//void





/////////////MAIN
int main(int argc, char** argv) {
	int NumeroRandom = 0;
	int menu;
	setlocale(LC_CTYPE, "Spanish");//este codigo junto con la libreria #include <clocale> para usar caractes como ççÒ
	
	
	///Juego
	cout << "1.JUGAR\n2.Salir" << endl;
	cin >> menu;
	system("cls");
	do {
		switch (menu)
		{
		case 1:
			MostrarPreguntas();
			break;
		case 2:
			exit(EXIT_SUCCESS);
			break;
		}
	} while (menu != 2);
	


	system("PAUSE");
	return 0;
}// main
