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
using std::cout;
using std::cin;
using std::endl;
using std::string;
////

int NumeroAleatorio() {
	srand(time(NULL));

	int NumeroRandom=0;
	return NumeroRandom = rand() % 10;
}
string Convertir(char respuesta) {
	int CHAR_LENGTH = 1;
	string respuestaConv(CHAR_LENGTH, respuesta);
	return respuestaConv;
}

bool ConsultarRespuesta(string respuestaConv,string respuestaCorrecta,string vector) {
	string JugarDeNuevo;
	if (respuestaConv == respuestaCorrecta ) {
		
		cout << "Correcto" << endl;
		for (int i = 0; i < 3; i++) {
			system("color 27");
			Sleep(15);
			system("color 07");
			return true;
		}

	}
	else {
		cout << "incorrecto" << endl;
		cout << "La respuesta Correcta es ----> "<<respuestaCorrecta<< endl;
		
		for (int i = 0; i < 3;i++) {
			system("color 47");
			Sleep(15);
			system("color 07");
		}
			
		system("cls");
		cout << "Desea jugar de nuevo?" << endl;
		cin >> JugarDeNuevo;
		if (JugarDeNuevo == "SI"|| JugarDeNuevo == "si" || JugarDeNuevo == "Si") {
			system("cls");
			
		}
		else {
			exit(EXIT_SUCCESS);
			
		}
	}

}
////////
bool ComprobarLetra(char respuesta) {
	bool comprobacion = false;
	
		if (respuesta == 'A' || respuesta == 'B' || respuesta == 'C' || respuesta == 'D'|| respuesta == 'a' || respuesta == 'b' || respuesta == 'c' || respuesta == 'd') {

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
	int NumeroRandom=0;
	string posRespuestaDefinitiva;
	string respuestaCorrecta;
	bool repetidos[11]{ false,false,false,false,false,false,false,false,false,false,false};
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

		,"3.Que pais se tendria que visitar para ver las ruinas de troya\n  A:Grecia\n  B:Turquia\n  C:Bulgaria\n  D:Rumania"
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
	string respuestaDefinitiva;
	char respuesta;
	srand(time(NULL));

	for (int i = 0; i<10; i++) {
		NumeroRandom = NumeroAleatorio();
		cout << NumeroRandom << endl;
		if (repetidos[NumeroRandom] == false) {
			
			system("cls");
			
			cout<< millonario[NumeroRandom][0]<<endl;
			cin >> respuesta;
			if (ComprobarLetra(respuesta)==true) {
				
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
					posRespuestaDefinitiva = millonario[NumeroRandom][0];
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
			string vector;
			vector = millonario[NumeroRandom][0];

			respuestaCorrecta = millonario[NumeroRandom][1];
			ConsultarRespuesta(Convertir(respuesta),respuestaCorrecta,vector);
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
