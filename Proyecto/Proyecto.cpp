#include <iostream>
#include <cstdlib>
#include<windows.h>
#include <string>
#include <iomanip>
#include<ctime>
#include<conio.h>
#include <clocale>
#include <wchar.h>
#include <locale.h>
//***Importante colocar en opciones que soporte codigos ascii ***
//***Por motivos que un compañero utilizo otro IDE utilizar el compilador ISO C++11 ***
//***y deshabilitar las advertencias por los codigos ASCII ***

using namespace std;
//*****METODOS VISUALES*****
void textcolor(int color) {//METODO PARA CAMBIAR EL COLOR DE UN COUT ESPECIFICO
    HANDLE hcon = GetStdHandle(STD_OUTPUT_HANDLE);
    SetConsoleTextAttribute(hcon,color);
}

void gotoxy(int x,int y){//METODO PARA POSICIONAR EL CURSOR EN UNA POSICION ESPECIFICA(PARA IMPRIMIR) de la libreria #include<windows.h>
//A partir de dos parámetros enteros ( x, y) asignarle una posición en forma de coordenada donde se imprimirán los datos de salida.
      HANDLE hcon;
      hcon = GetStdHandle(STD_OUTPUT_HANDLE);
      COORD dwPos;
      dwPos.X = x;
      dwPos.Y= y;
      SetConsoleCursorPosition(hcon,dwPos);
 }

void LogoMillonario(){//METODO DE CODIGO ASCII PARA IMPRIMIR EL LOGO EN LA PANTALLA INCIAL
	for (int j = 0; j < 5; j++) {
				std::cout <<"\n\n\n\n\n\n\n\n\n"<< R"(
         ___        _                          _                                           _ _ _                        _       
        / _ \ _   _(_) ___ _ __     __ _ _   _(_) ___ _ __ ___   ___  ___ _ __   _ __ ___ (_) | | ___  _ __   __ _ _ __(_) ___  
       | | | | | | | |/ _ \ '_ \   / _` | | | | |/ _ \ '__/ _ \ / __|/ _ \ '__| | '_ ` _ \| | | |/ _ \| '_ \ / _` | '__| |/ _ \ 
       | |_| | |_| | |  __/ | | | | (_| | |_| | |  __/ | |  __/ \__ \  __/ |    | | | | | | | | | (_) | | | | (_| | |  | | (_) |
        \__\_\\__,_|_|\___|_| |_|  \__, |\__,_|_|\___|_|  \___| |___/\___|_|    |_| |_| |_|_|_|_|\___/|_| |_|\__,_|_|  |_|\___/ 
                                      |_|                                                                                       
)" << '\n';
			system("color 0B");
			Sleep(200);
			system("color 07");
			Sleep(200);
			system("color 02");
			Sleep(200);
			system("color 04");
			Sleep(200);
			system("color 06");
			Sleep(100);
			system("cls");
		}

Sleep(30);
system("color 07");
}

void telefono(){//METODO PARA IMPRIMIR UN CELULAR PARA SER USADO MAS ADELANTE EN EL METODO DE COMODIN
	system("mode con: cols=150 lines=38");
std::cout <<"\n\n\n\n\n\n\n\n\n"<< R"(
               .sss.      
                $P'`T.     
                $;  :;     
                $;  :$     
        __......$b__d$     
   .sd$$$P^^^^^^^TBuG$s.   
  .$P'      ___     _`T$.  
  $P        """    (_) T$  
 s$   _..---***---.._   $s 
 $$ .'    ALCATEL    `. $$ 
.$$.  .-------------.  .$$.
:$$: :               ; ;$$;
$$;| |               | |:$$
$$'| |               | |'$$
$$ | |               | | $$
$$ | |               | | $$
$$ | :               ; | $$
$$.;  `-------------'  :.$$
$$; . (C)   .-.       . :$$
:$$  `-.   / _ \   .-'  $$;
'$$  .-.`.: (_) ;.'.-.  $$'
 $$ :   ; `.___.' :   ; $$ 
 $$  `-'           `-'  $$ 
 $$.( 1 )  ( 2 )  ( 3 ).$$ 
 $$;                   :$$ 
 :$$ ( 4 ).( 5 ).( 6 ) $$; 
 '$$                   $$' 
  $$ ( 7 ) ( 8 ) ( 9 ) $$  
  $$                   $$  
  $$ ( * ) ( 0 ) ( # ) $$  
  $$.                 .$$  
  $$; o               :$P  
   T$b.             .d$P   
    `^T$$$$$$$$$$$$$P^'                                                                                     
)" << '\n';	
}

void MostrarHora(){//METODO PARA IMPRIMIR LA HORA ACTUAL
	SYSTEMTIME stBuffer;
    char buffer[9];
 
    GetLocalTime(&stBuffer);
    GetTimeFormat(LOCALE_SYSTEM_DEFAULT,
                  TIME_FORCE24HOURFORMAT,
                  &stBuffer, "hh':'mm':'ss",
                  buffer,
                  sizeof(buffer));
    cout<<"\t\t\t"<<buffer<<endl;
}

int TablaComodin(){//FUNCION PARA IMPRIMIR Y SOLICITAR EL NUMERO DE COMODIN
	int n;
std::cout <<""<<R"(
					+----------------------+
					|      COMODINES       |
					+----------------------+
					| 1.50/50              |
					| 2.LLAMADA TELEFONICA |
					+----------------------+
)"<<'\n';
std::cin >> n;
return n;
}

void Dinero(int i){//METODO DE CODIGO ASCII PARA IMPRIMIR LA TABLA DE PREMIOS
int PremiosLista2[]{100000,250000,500000,750000,1000000,2000000,2500000,3000000,5000000,7500000,10000000,12000000,15000000,20000000,25000000 };
//se usa std::cout por su compatibilidad para imprimir ascii en cambio cout normal tiene muchos errores a la hora de imprimir ascii
std::cout <<""<<R"(
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦                     ¦¦
¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦¦)"<<'\n';
	gotoxy(3,2);
	int k;
for(int j=14;j>-1;j--){//ciclo para que imprima los 15 premios
	if(j==4||j==7||j==9||j==12||j==14){//esta condicion se hace para cambiar el color a blanco si esta en la posicion de las zonas seguras definiendo una variable con el numero del color
		k=15;// el color blanco es 15
	}else{
		k=6;//el color naranja es 6
	}
			textcolor(k);//cambie el color dependiendo del valor de K
		std::cout<<"\t"<<j+1<<" "<<PremiosLista2[j]<<"\n";
	}
	if(i==14){//estas condiciones son para imprimir en una posicion especifica cada valor ya que al ser un rectangulo hecho en ascii se tiene que tener una posicion correcta o se imprime mal
		gotoxy(3,2);
		
		textcolor(4);
		Sleep(200);
			std::cout<<"\t"<<15<<" "<<PremiosLista2[14]<<"\n";
			
		}
		else if(i==13){
		gotoxy(3,3);
		
		textcolor(4);
		Sleep(200);
			std::cout<<"\t"<<14<<" "<<PremiosLista2[13]<<"\n";
			
		}
		else if(i==12){
		gotoxy(3,4);
		textcolor(4);
		Sleep(200);
			std::cout<<"\t"<<13<<" "<<PremiosLista2[12]<<"\n";
			
		}
		else if(i==11){
		gotoxy(3,5);
		textcolor(4);
		Sleep(200);
			std::cout<<"\t"<<12<<" "<<PremiosLista2[11]<<"\n";
			
		}
		else if(i==10){
		gotoxy(3,6);
		textcolor(4);
		Sleep(200);
			std::cout<<"\t"<<11<<" "<<PremiosLista2[10]<<"\n";
			
		}
		else if(i==9){
		gotoxy(3,7);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<10<<" "<<PremiosLista2[9]<<"\n";
			
		}
		else if(i==8){
		gotoxy(3,8);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<9<<" "<<PremiosLista2[8]<<"\n";
			
		}
		else if(i==7){
		gotoxy(3,9);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<8<<" "<<PremiosLista2[7]<<"\n";
			
		}
		else if(i==6){
		gotoxy(3,10);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<7<<" "<<PremiosLista2[6]<<"\n";
			
		}
		else if(i==5){
		gotoxy(3,11);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<6<<" "<<PremiosLista2[5]<<"\n";
			
		}
		else if(i==4){
		gotoxy(3,12);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<5<<" "<<PremiosLista2[4]<<"\n";
			
		}
		else if(i==3){
		gotoxy(3,13);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<4<<" "<<PremiosLista2[3]<<"\n";
			
		}
		else if(i==2){
		gotoxy(3,14);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<3<<" "<<PremiosLista2[2]<<"\n";
			
			
		}
		else if(i==1){
		gotoxy(3,15);
		textcolor(4);
		Sleep(200);	
			std::cout<<"\t"<<2<<" "<<PremiosLista2[1]<<"\n";
			
		}
		else if(i==0){
		gotoxy(3,16);
		textcolor(4);
		Sleep(190);	
			std::cout<<"\t"<<1<<" "<<PremiosLista2[0]<<"\n";
			
		}
Sleep(2500);//congelar 2.5 segundos el programa
system("cls");//borrar consola
}
//*****METODOS VISUALES*****
bool PreguntarComodin(){
		int PreguntaMenu;
		int numeroComodin;
	string OpcionMenu;
	int NumeroComodin;
	bool comodin1Pregunta;
	cout<<"\n\n\t\t\tDesea usar comodin? Digite SI/NO  ";
	cin>>OpcionMenu;
	while(OpcionMenu!="SI"&&OpcionMenu!="si"&&OpcionMenu!="NO"&&OpcionMenu!="no"){
		cout<<"\t\t\tOpcion incorrecta digita SI o NO ";
			cin>>OpcionMenu;
		}
		if(OpcionMenu=="SI"||OpcionMenu=="si"){
			return true;
		}else{
			return false;
		}
}

void Comodin(string millonario[],int NumeroRandom,string respuestaCorrecta,int i,int dineroAcumulado,int NumeroComodin,bool UsarComodin){//METODO QUE VALIDA EL COMODIN
	srand(time(NULL));
	int PreguntaMenu;
	string OpcionMenu;
	
	if(UsarComodin==true){
		if(NumeroComodin==1){
			system("cls");
			int contador=0;
		if(respuestaCorrecta=="A"){
			contador=1;
		}else if(respuestaCorrecta=="B"){
			contador=2;
		}else if(respuestaCorrecta=="C"){
			contador=3;
		}else if(respuestaCorrecta=="D") {
			contador=4;
		}		
			int NumeroRandom2=0;	
			NumeroRandom2 = rand() % 4;
				while(contador==NumeroRandom2||NumeroRandom2==0){
				NumeroRandom2 = rand() % 4;
				}
				cout<<"\n\n\n\n\n\n"<<endl;
				MostrarHora();
				cout << "\t\t\tPregunta #" << i+1<< " Por un premio de: ¢" <<dineroAcumulado<< endl << endl;
				cout<<"\t\t\t"<<millonario[0]<<endl<<endl;
				if(contador==1&&NumeroRandom2==2){
					cout<<"\t\t\t"<<millonario[contador]<<"\t\t\t"<<millonario[NumeroRandom2]<<endl;
				}
				else if(contador==1&&NumeroRandom2==3){
					cout<<"\t\t\t"<<millonario[contador]<<"\t\t\t"<<millonario[NumeroRandom2]<<endl;
				}
				else if(contador==1&&NumeroRandom2==4){
						cout<<"\t\t\t"<<millonario[contador]<<"\n\t\t\t\t\t\t\t\t"<<millonario[NumeroRandom2]<<endl;
				}
				else if(contador==2&&NumeroRandom2==1){
							cout<<"\t\t\t"<<millonario[NumeroRandom2]<<"\t\t\t"<<millonario[contador]<<endl;
				}
				
				else if(contador==2&&NumeroRandom2==3){
						cout<<"\t\t\t\t\t\t\t"<<millonario[contador]<<"\n\t\t\t"<<millonario[NumeroRandom2]<<endl;
				}
				else if(contador==2&&NumeroRandom2==4){
						cout<<"\t\t\t"<<millonario[contador]<<"\t\t\t"<<millonario[NumeroRandom2]<<endl;
				}
				else if(contador==3&&NumeroRandom2==1){
						cout<<"\t\t\t"<<millonario[NumeroRandom2]<<"\t\t\t"<<millonario[contador]<<endl;
				}else if(contador==3&&NumeroRandom2==2){
					cout<<"\t\t\t\t\t\t\t"<<millonario[NumeroRandom2]<<"\n\t\t\t"<<millonario[contador]<<endl;
				}else if(contador==3&&NumeroRandom2==4){
					cout<<"\t\t\t"<<millonario[contador]<<"\t\t\t"<<millonario[NumeroRandom]<<endl;
				}else if(contador==4&&NumeroRandom2==1){
					cout<<"\t\t\t"<<millonario[NumeroRandom2]<<"\n\t\t\t\t\t\t\t\t"<<millonario[contador]<<endl;
				}else if(contador==4&&NumeroRandom2==2){
						cout<<"\t\t\t"<<millonario[NumeroRandom2]<<"\t\t\t"<<millonario[contador]<<endl;
				}
				else if(contador==4&&NumeroRandom2==3){
						cout<<"\t\t\t"<<millonario[NumeroRandom]<<"\t\t\t"<<millonario[contador]<<endl;
				}
				
		  }else{
		  	char opciones[4]{'A','B','C','D'};
	int NumeroRandom3;
	int NumeroRandom4;
		  	telefono();
			srand(time(NULL));//parametro necesario para NumeroRandom
			NumeroRandom3 = rand() % 3;//Variable que genera un Numero aleatorio entre 0 y 2
		if(NumeroRandom3==0){
			NumeroRandom4 = rand() % 4;
			gotoxy(6,14);
			cout<<"         ";
			gotoxy(6,15);
			cout<<"        ";
			gotoxy(6,16);
			cout<<"        ";
			gotoxy(6,14);
				cout<<"\t  Llamando";
					gotoxy(6,15);
				cout<<"\t  a Oscar";
				for(int z=0;z<3;z++){
						gotoxy(7,16);
				Sleep(500);
				cout<<" ";
				Sleep(500);
				cout<<"  ";
				Sleep(500);
				cout<<"   ";
			    Sleep(500);
				cout<<"  ";
				Sleep(500);
				cout<<" ";
				Sleep(500);
				cout<<"";
			    gotoxy(6,15);
				}
				system("cls");
				telefono();
				gotoxy(6,14);
				cout<<"Creo que es la";
				gotoxy(6,15);
				textcolor(3);
				cout<<"\n\t     "<<opciones[NumeroRandom4]<<endl;
				textcolor(15);
		}
		else if(NumeroRandom3==1){
			srand(time(NULL));
			NumeroRandom4 = rand() % 4;
			gotoxy(6,14);
			cout<<"         ";
			gotoxy(6,15);
			cout<<"        ";
			gotoxy(6,16);
			cout<<"        ";
			gotoxy(6,14);
				cout<<"\t  Llamando";
					gotoxy(6,15);
				cout<<"\t  a Bryan";
				for(int z=0;z<3;z++){
						gotoxy(7,16);
				Sleep(250);
				cout<<" ";
				Sleep(250);
				cout<<"  ";
				Sleep(250);
				cout<<"   ";
			Sleep(250);
				cout<<"  ";
				Sleep(250);
				cout<<" ";
				Sleep(250);
				cout<<"";
			gotoxy(6,15);
				}
				system("cls");
				telefono();
				gotoxy(6,14);
				cout<<"Creo que es la";
				gotoxy(6,15);
				textcolor(3);
				cout<<"\n\t     "<<opciones[NumeroRandom4]<<endl;
				textcolor(15);
		}
		else{
			srand(time(NULL));
			NumeroRandom4 = rand() % 4;
			gotoxy(6,14);
			cout<<"         ";
			gotoxy(6,15);
			cout<<"        ";
			gotoxy(6,16);
			cout<<"        ";
			gotoxy(6,14);
				cout<<"\t  Llamando";
					gotoxy(6,15);
				cout<<"\t  a Mario";
				for(int z=0;z<3;z++){
						gotoxy(7,16);
				Sleep(250);
				cout<<" ";
				Sleep(250);
				cout<<"  ";
				Sleep(250);
				cout<<"   ";
			Sleep(250);
				cout<<"  ";
				Sleep(250);
				cout<<" ";
				Sleep(250);
				cout<<"";
			gotoxy(6,15);
				}
				system("cls");
				telefono();
				gotoxy(6,14);
				cout<<"Creo que es la";
				gotoxy(6,15);
				textcolor(3);
				cout<<"\n\t     "<<opciones[NumeroRandom4]<<endl;
				textcolor(15);
		}
		gotoxy(30,16);
		system("PAUSE");
		system("cls");		
		cout<<"\n\n\n\n\n\n"<<endl;//cout para centrar texto
			MostrarHora();//ejecutar el metodo de imprimir hora
		cout<<"\t\t\t"<<millonario[0]<<endl<<endl;//imprimir solo la pregunta
				for(int z=1;z<5;z++){//se inicia ciclo para imprimir las opciones
					if(z==3){//condicion para cuando se imprima la letra C haga un salgo de linea antes
						cout<<"\n\n";
					}
					cout<<"\t\t\t";//con este cout se imprimira la letras con saltos de 15 espacios
					cout<<millonario[z]<<"\t";//se imprime la opcion correspondiente al valor de z
				}
				cout<<endl;//salto de linea
			
		  }
	}
		
			}	


int Premios(int i) {//METODO PARA IMPRIMIR SISTEMA DE PREMIOS 
	int PremiosLista[]{100000,250000,500000,750000,1000000,2000000,2500000,3000000,5000000,7500000,10000000,12000000,15000000,20000000,25000000 };//Se declara un vector con el valor de los premios
	if (i == 5) {//se valida si el valor del contador es 5 entonces que le indique que llego a la primer zona segura
		for (int j = 0; j < 5; j++) {
			system("cls");
		
			std::cout <<"\n\n\n\n\n\n"<<R"(	
                    _   _             _ _                      _                 _                    _                     
                   | | | | __ _ ___  | | | ___  __ _  __ _  __| | ___     __ _  | | __ _   _ __  _ __(_)_ __ ___   ___ _ __ 
                   | |_| |/ _` / __| | | |/ _ \/ _` |/ _` |/ _` |/ _ \   / _` | | |/ _` | | '_ \| '__| | '_ ` _ \ / _ \ '__|
                   |  _  | (_| \__ \ | | |  __/ (_| | (_| | (_| | (_) | | (_| | | | (_| | | |_) | |  | | | | | | |  __/ |   
                   |_| |_|\__,_|___/ |_|_|\___|\__, |\__,_|\__,_|\___/   \__,_| |_|\__,_| | .__/|_|  |_|_| |_| |_|\___|_|   
                                               |___/                                      |_|                               
                                       _______  _ __   __ _   ___  ___  __ _ _   _ _ __ __ _                                                  
                                      |_  / _ \| '_ \ / _` | / __|/ _ \/ _` | | | | '__/ _` |                                                 
                                       / / (_) | | | | (_| | \__ \  __/ (_| | |_| | | | (_| |                                                 
                                      /___\___/|_| |_|\__,_| |___/\___|\__, |\__,_|_|  \__,_|                                                 
                                                                       |___/                                                                                                                                                
 )"<<'\n';
			system("color 0B");
			Sleep(200);
			system("color 07");
			Sleep(200);
			system("color 02");
			Sleep(200);
			system("color 04");
			Sleep(200);
			system("color 06");
			Sleep(100);
			system("cls");
		}
system("color 07");
gotoxy(3,8);
	}
	//
	else if (i == 8) {//se valida si el valor del contador es 8 entonces que le indique que llego a la segunda zona segura
		for (int j = 0; j < 5; j++) {
			system("cls");
			std::cout <<"\n\n\n\n\n\n"<<R"(	
                    _   _             _ _                      _                 _                                        _       
                   | | | | __ _ ___  | | | ___  __ _  __ _  __| | ___     __ _  | | __ _   ___  ___  __ _ _   _ _ __   __| | __ _ 
                   | |_| |/ _` / __| | | |/ _ \/ _` |/ _` |/ _` |/ _ \   / _` | | |/ _` | / __|/ _ \/ _` | | | | '_ \ / _` |/ _` |
                   |  _  | (_| \__ \ | | |  __/ (_| | (_| | (_| | (_) | | (_| | | | (_| | \__ \  __/ (_| | |_| | | | | (_| | (_| |
                   |_| |_|\__,_|___/ |_|_|\___|\__, |\__,_|\__,_|\___/   \__,_| |_|\__,_| |___/\___|\__, |\__,_|_| |_|\__,_|\__,_|
                                               |___/                                                |___/                         
                                        _______  _ __   __ _   ___  ___  __ _ _   _ _ __ __ _                                                        
                                       |_  / _ \| '_ \ / _` | / __|/ _ \/ _` | | | | '__/ _` |                                                       
                                        / / (_) | | | | (_| | \__ \  __/ (_| | |_| | | | (_| |                                                       
                                       /___\___/|_| |_|\__,_| |___/\___|\__, |\__,_|_|  \__,_|                                                       
                                                                        |___/                                                                                                                                                                                                                        
 )"<<'\n'; 
			system("color 0B");
			Sleep(200);
			system("color 07");
			Sleep(200);
			system("color 02");
			Sleep(200);
			system("color 04");
			Sleep(200);
			system("color 06");
			Sleep(100);
			system("cls");
		}
cout<<"\n\n\n\n\n\n"<<endl;
system("color 07");
gotoxy(3,8);
	}
	//
	else if (i == 10) {//se valida si el valor del contador es 10 entonces que le indique que llego a la tercer zona segura

		for (int j = 0; j < 5; j++) {
			system("cls");
			std::cout <<"\n\n\n\n\n\n"<<R"(	
                    _   _             _ _                      _                 _         _                              
                   | | | | __ _ ___  | | | ___  __ _  __ _  __| | ___     __ _  | | __ _  | |_ ___ _ __ ___ ___ _ __ __ _ 
                   | |_| |/ _` / __| | | |/ _ \/ _` |/ _` |/ _` |/ _ \   / _` | | |/ _` | | __/ _ \ '__/ __/ _ \ '__/ _` |
                   |  _  | (_| \__ \ | | |  __/ (_| | (_| | (_| | (_) | | (_| | | | (_| | | ||  __/ | | (_|  __/ | | (_| |
                   |_| |_|\__,_|___/ |_|_|\___|\__, |\__,_|\__,_|\___/   \__,_| |_|\__,_|  \__\___|_|  \___\___|_|  \__,_|
                                               |___/                                                                      
                                       _______  _ __   __ _   ___  ___  __ _ _   _ _ __ __ _                                                
                                      |_  / _ \| '_ \ / _` | / __|/ _ \/ _` | | | | '__/ _` |                                               
                                       / / (_) | | | | (_| | \__ \  __/ (_| | |_| | | | (_| |                                               
                                      /___\___/|_| |_|\__,_| |___/\___|\__, |\__,_|_|  \__,_|                                               
                                                                       |___/                                                                                                                                                                                                                                                                       
 )"<<'\n';
			
			system("color 0B");
			Sleep(200);
			system("color 07");
			Sleep(200);
			system("color 02");
			Sleep(200);
			system("color 04");
			Sleep(200);
			system("color 06");
			Sleep(100);
			system("cls");
		}
system("color 07");
gotoxy(3,8);
	}
	//
	else if (i == 13) {//se valida si el valor del contador es 13 entonces que le indique que llego a la cuarta zona segura
		for (int j = 0; j < 5; j++) {
			system("cls");
			std::cout <<"\n\n\n\n\n\n"<<R"(	
                    _   _             _ _                      _                 _                               _        
                   | | | | __ _ ___  | | | ___  __ _  __ _  __| | ___     __ _  | | __ _    ___ _   _  __ _ _ __| |_ __ _ 
                   | |_| |/ _` / __| | | |/ _ \/ _` |/ _` |/ _` |/ _ \   / _` | | |/ _` |  / __| | | |/ _` | '__| __/ _` |
                   |  _  | (_| \__ \ | | |  __/ (_| | (_| | (_| | (_) | | (_| | | | (_| | | (__| |_| | (_| | |  | || (_| |
                   |_| |_|\__,_|___/ |_|_|\___|\__, |\__,_|\__,_|\___/   \__,_| |_|\__,_|  \___|\__,_|\__,_|_|   \__\__,_|
                                               |___/                                                                      
                                      _______  _ __   __ _   ___  ___  __ _ _   _ _ __ __ _                                                
                                     |_  / _ \| '_ \ / _` | / __|/ _ \/ _` | | | | '__/ _` |                                               
                                      / / (_) | | | | (_| | \__ \  __/ (_| | |_| | | | (_| |                                               
                                     /___\___/|_| |_|\__,_| |___/\___|\__, |\__,_|_|  \__,_|                                               
                                                                      |___/                                                                                                                                                                                                                                                                                                                                       )"<<'\n';
			system("color 0B");
			Sleep(200);
			system("color 07");
			Sleep(200);
			system("color 02");
			Sleep(200);
			system("color 04");
			Sleep(200);
			system("color 06");
			Sleep(100);
			system("cls");
		}
system("color 07");
gotoxy(3,8);
	}
	//
	else if (i == 15) {//se valida si el valor del contador es 15 entonces que le indique que consiguio el gran premio
system("mode con: cols=150 lines=38");
			for (int j = 0; j < 5; j++) {	
              std::cout <<""<<R"(                                                      
               .:^!7?JY5PP5YJ?7!^:.                               
         :!YB&@@@@@@@@&!77!&@@@@@@@@&BY!:                        
     .!G&@@@@@@@@#GY?7:    .~~!7JG@@@@@@@&G!                     
   .5@@@@@@@@@@7.    :7JJJJ?7!~:.G@@@@@@@@@@@Y.                  
  :@@@@@@@@@@@&.     7B&&@@@@@@@@@@@@@@@@@@@@@&.                  
  B@@@@@@@@@@@@@#57^.      ..:~?5#@@@@@@@@@@@@@G                 
  ?@@@@@@@@@@@@@@@@@@@&&BPJ!.     .#@@@@@@@@@@@7                 
   7@@@@@@@@@@@G!J5GB#&&&&&#7      #@@@@@@@@@@!                  
  .. 7#@@@@@@@&~:..           .:!5@@@@@@@@@#7 ..                 
  B@7  .~5#@@@@@@@@@@@?    B@@@@@@@@@@@#5!.  ?@G                 
  ?@@@P^    .^7YPB#&&@&####&@&&#BPY7^.     ~P#&~                 
   !&@@@@#P7^.                       .~?5GB##BBPY7^.                      _   _                                         _
  JJ.!B@@@@@@@@&#GPYJ?77!!77?Y7. .7B&@@@@@&###@@@@@@&5~                  | | | | __ _ ___    __ _  __ _ _ __   __ _  __| | ___
  G@&?..^YB&@@@@@@@@@@@@@@@@&7.~B@@@@@@@@@7   &@@@@@@@@@5.               | |_| |/ _` / __|  / _` |/ _` | '_ \ / _` |/ _` |/ _ \
  .#@@@#Y~...:~?5GB#&&&&@@&? :#@@@@@@@@#PJ.   ^7?5G&@@@@@@P.             |  _  | (_| \__ \ | (_| | (_| | | | | (_| | (_| | (_) |
  ::7&@@@@@&#PJ!^:........  Y@@@@@@@@J.            5@@@@@@@&^            |_| |_|\__,_|___/  \__, |\__,_|_| |_|\__,_|\__,_|\___/
  B@7.:J#@@@@@@@@@@@@@&&#. P@@@@@@@@!    ~5GGGG5?~~@@@@@@@@@@^            _                 |___/                                
  7@@@P~..:!YG&&@@@@@@@@7 7@@@@@@@@@     B@@@@@@@@@@@@@@@@@@@@.       ___| |   __ _ _ __ __ _ _ __    _ __  _ __ ___ _ __ ___ (_) ___
   ~&@@@@&P?^.....:^~~!!  &@@@@@@@@@J     ^JG#&@@@@@@@@@@@@@@@J      / _ \ |  / _` | '__/ _` | '_ \  | '_ \| '__/ _ \ '_ ` _ \| |/ _ \
  YY.~G@@@@@@@@&#BP5Y??^ .@@@@@@@@@@@&?.        :7B@@@@@@@@@@@B     |  __/ | | (_| | | | (_| | | | | | |_) | | |  __/ | | | | | | (_) |
  G@&J:.:?G&@@@@@@@@@@@# .@@@@@@@@@@@@@@&P7:       :&@@@@@@@@@B      \___|_|  \__, |_|  \__,_|_| |_| | .__/|_|  \___|_| |_| |_|_|\___/
  .#@@@&5!....^7J5GB#&&B  &@@@@@@@@@@@@@@@@@@#?.    ^@@@@@@@@@7               |___/                  |_|         
  ::!#@@@@@@#GY7~:......  ~@@@@@@@@@@B&@@@@@@@@~    ^@@@@@@@@&   
  B@?..?B@@@@@@@@@@@@@@@@~ J@@@@@@@@7  .:^!77!:     #@@@@@@@@.   
  !@@@G!...~JP#&@@@@@@@@@@7 !@@@@@@@^.            ~&@@@@@@@#.    
   ~&@@@@&GJ~:.....:^^~~!!!  .P@@@@@@@&#GP.   JG#@@@@@@@@&7      
     ~G&@@@@@@@@&#GP5YJ????Y5J..Y&@@@@@@@@~  .@@@@@@@@@#7        
        :?G&@@@@@@@@@@@@@@@@@@@#?^~Y#@@@@@@@@@@@@@@&G7.          
             .^!J5GB##&&&&&&##BGP?:   .^!?Y555J?~:.       )"<<'\n';   
     
			                                                                                                                                                                                                                                                                                                                                                              
			system("color 0B");
			Sleep(200);
			system("color 07");
			Sleep(200);
			system("color 02");
			Sleep(200);
			system("color 04");
			Sleep(200);
			system("color 06");
			Sleep(100);
			system("cls");
		}
system("color 07");
gotoxy(3,8);
Sleep(3000);
	}
	int retornar = PremiosLista[i];
	return retornar;
	cout<<"\n\n\n\n\n\n"<<endl;
}

string Convertir(char respuesta) {//METODO QUE CONVIERTE UN CHAR A STRING PARA PODER VALIDAR SI LA RESPUESTA ES CORRECTA
	int CHAR_LENGTH = 1;
	string respuestaConv(CHAR_LENGTH, respuesta);
	return respuestaConv;
}

int ConsultarRespuesta(string respuestaConv, string respuestaCorrecta,int i) {//METODO QUE VALIDA SI LAS RESPUESTAS SON CORRECTAS
int PremiosLista[]{100000,250000,500000,750000,1000000,2000000,2500000,3000000,5000000,7500000,10000000,12000000,15000000,20000000,25000000 };

	if (respuestaConv == respuestaCorrecta) {//se valida si la respuesta ya convertida de char a string es igual a la respuesta correcta
		cout << "\t\t\tCorrecto" << endl;
		for (int i = 0; i < 3; i++) {//ciclo para que la consola parpadee 3 veces de color verde
			system("color 27");
			Sleep(15);
			system("color 07");
		}
		Sleep(900);//congelar por 1 segundo la consola
		return i;
	}
	else {// si no es incorrecto
		cout << "\t\t\tincorrecto" << endl;
		cout << "\t\t\tLa respuesta Correcta es ----> " << respuestaCorrecta << endl;

		for (int i = 0; i < 3; i++) {//ciclo para que la consola parpadee 3 veces de color rojo
			system("color 47");
			Sleep(15);
			system("color 07");
		}
		if(i>=5||i>=8||i>=10||i>=11||i>=15){
			cout<<"Felicidades has ganado: "<< PremiosLista[i]<<endl;
		}
		
		Sleep(3000);
		system("cls");
		Sleep(1500);
		cout<<"\t\t\tVuelve a intentarlo luego"<<endl;
		cout<<"\t\t\t";
		system("PAUSE");
		i=17;
		return i;
	}
}

bool ComprobarLetra(char respuesta) {//FUNCION QUE VALIDA SI EL USUARIO INGRESA OTRA LETRA FUERA DE A,B,C,D
	bool comprobacion = false;

	if (respuesta == 'A' || respuesta == 'B' || respuesta == 'C' || respuesta == 'D') {

		return comprobacion = true;
	}
	else {
		return comprobacion = false;
	}


}
/////
bool RespuestaDefinitiva(string respuestaDefinitiva) {//FUNCION QUE RETORNA UN True SI LA RESPUESTA DEFINITIVA ES SI
	if (respuestaDefinitiva == "SI") {
		return true;
	}
	else {

		return false;
	}
}
////////////////////////////////////////////
void MostrarPreguntas() {//METODO PRINCIPAL DONDE SE IMPRIMIRAN LAS PREGUNTAS Y LOS DEMAS METODOS

//DECLARACION DE LAS VARIABLES
	int dineroAcumulado;
	int NumeroComodin=0;
	int NumeroRandom = 0;
	int ValidacionDeComodines1=0,ValidacionDeComodines2=0;
	string posRespuestaDefinitiva;
	bool preguntaComodin=false;
	string respuestaCorrecta;
	bool repetidos[15]{ false,false,false,false,false,false,false,false,false,false,false,false,false,false,false};//array para que sirvira para verificar que las preguntas no se repitan
	/*Aqui se declara las preguntas,sus opciones y la respuesta correcta*/string millonario[15][6]{
	"Quien descubrio America","A)Magallanes","B)Colon","C)Bush","\tD)Araya","B"
	,"En que alimentos encontramos la vitamina C","A)Citricos:La naranja","\tB)Granos:El arroz","C)Legumbres:habichuelas","\tD)Lacteos:La leche","A"
	,"Como se  llama el movimiento de retroceso que hacen las olas luego de llegar a la orilla","A)Resaca","B)Arrastre","C)Turbulencia","D)Repunte","A"
	,"Que pais se tendria que visitar para ver las ruinas de troya","A)Grecia","B)Turquía","C)Bulgaria","D)Rumania","B"
	,"En el Castillo de Amboise localizado en Francia se encuentra la tumba del pintor:","A)Francisco de Goya","B)Leonardo da Vinci","C)Miguel Angel","\tD)Claude Monet","B"
	,"En cual de los siguientes paises el desierto de \"Sahara\" no forma parte de su extension:","A)Egipto","B)Tunez","C)Argelia","D)Kenia","D"
	,"En que pais esta ubicada \"Capital Gate\",la torre mas inclinada del mundo","A)Jordania","B)Arabia Saudita","C)Marruecos","D)Emiratos Arabes Unidos","D"
	,"¿Cúal fue la moneda oficial de italia durante mas de cien años antes de ser reemplazada por el euro?","A)Corona","B)Rublo","C)Libra","\tD)Lira","D"
	,"¿Cúantas aristas tiene un cubo?","A)16","B)12","C)8","D)4","B"
	,"Durante el programa de la NASA \"Apolo\"¿cuántos astronautas pisaron la Luna?","A)3","B)6","C)9","D)12","D"
	,"¿Cuál es el gas que infla las bolsas de aire,o \"airbags\",que se encuentran en los automóviles?","A)Helio","\tB)Nitrógeno","C)Oxígeno","D)Hidrógeno","B"
	,"Cual de los siguientes no es un color primario?","A)Azul","\tB)Rojo","C)Amarillo","D)Blanco","D"
    ,"Cual de los siguientes animales no se reproduce por huevos","A)La rana","B)La ballena","C)La avestruz","D)La serpiente","B"
    ,"Cual es la capital de Paraguay","A)Montevideo","B)Asuncion","C)Managua","D)San Juan","B"
    ,"Que nombre recibe el grupo de aves que vuelan juntas?","A)Banda","\tB)Flotilla","C)Bandada","D)Manada","C"};
	string respuestaDefinitiva;
	char respuesta;
//DECLARACION DE LAS VARIABLES

	for (int i = 0; i<=16; i++) {//for para que se muestre las 15 preguntas 
	if(i<15){
	srand(time(NULL));//parametro necesario para NumeroRandom
		NumeroRandom = rand() % 15;//Variable que genera un Numero aleatorio entre 0 y 14
		if (repetidos[NumeroRandom] == false) {//Condicion para verificar que la pregunta no se repita 
		repetidos[NumeroRandom] = true;
			system("cls");//borrar consola
			Dinero(i);//ejecutar el metodo de Dinero con el valor de i
			cout<<"\n\n\n\n\n\n"<<endl;//cout para centrar texto
			MostrarHora();//ejecutar el metodo de imprimir hora
			dineroAcumulado=Premios(i);//se define esa variable para ser utilizada para mostar el premio y para utilizarlo en otro metodo
			cout <<"\t\t\t"<< "Pregunta #" << i+1<< " Por un premio de: ¢" <<dineroAcumulado<< endl << endl;
			system("color 0A");//cambiar color 
			Sleep(70);//congelar por 70 milisegundos el programa
			system("color 07");//cambiar color 
			Sleep(150);//congelar por 150 milisegundos el programa
			system("color 0A");//cambiar color 
			Sleep(100);//congelar por 100 milisegundos el programa
			system("color 07");//cambiar color 
			Sleep(100);//congelar por 100 milisegundos el programa
			respuestaCorrecta = millonario[NumeroRandom][5];//definimos que la respuesta correcta se encuentra en la la posicion 5 del numero aletorio que se genero
				cout<<"\t\t\t"<<millonario[NumeroRandom][0]<<endl<<endl;//imprimir solo la pregunta
				for(int z=1;z<5;z++){//se inicia ciclo para imprimir las opciones
					if(z==3){//condicion para cuando se imprima la letra C haga un salgo de linea antes
						cout<<"\n\n";
					}
					cout<<"\t\t\t";//con este cout se imprimira la letras con saltos de 15 espacios
					cout<<millonario[NumeroRandom][z]<<"\t";//se imprime la opcion correspondiente al valor de z
				}
				cout<<endl;//salto de linea
				bool ComodinUso=true;
				while(ComodinUso!=false){
					bool UsarComodin=PreguntarComodin();
			if(	UsarComodin==true){
				NumeroComodin=TablaComodin();
				if(NumeroComodin==1){
					if(ValidacionDeComodines1!=1){
					Comodin(millonario[NumeroRandom],NumeroRandom,respuestaCorrecta,i,dineroAcumulado,NumeroComodin,UsarComodin);
					ValidacionDeComodines1=1;
						ComodinUso=false;
					}else{
						system("cls");
						cout<<endl<<endl<<endl<<endl;
						textcolor(4);
						cout<<"\t\t\tEste comodin ya se utilizo"<<endl;
						textcolor(15);
							MostrarHora();
						cout <<"\t\t\t"<< "Pregunta #" << i+1<< " Por un premio de: ¢" <<dineroAcumulado<< endl << endl;
						ComodinUso=true;
						cout<<"\t\t\t"<<millonario[NumeroRandom][0]<<endl<<endl;//imprimir solo la pregunta
				for(int z=1;z<5;z++){//se inicia ciclo para imprimir las opciones
					if(z==3){//condicion para cuando se imprima la letra C haga un salgo de linea antes
						cout<<"\n\n";
					}
					cout<<"\t\t\t";//con este cout se imprimira la letras con saltos de 15 espacios
					cout<<millonario[NumeroRandom][z]<<"\t";//se imprime la opcion correspondiente al valor de z
				}
					}
				}else{
					if(ValidacionDeComodines2!=1){
					Comodin(millonario[NumeroRandom],NumeroRandom,respuestaCorrecta,i,dineroAcumulado,NumeroComodin,UsarComodin);
					ValidacionDeComodines2=1;
					ComodinUso=false;
					}else{
						system("cls");
							cout<<endl<<endl<<endl<<endl;
						cout<<"\t\t\tEste comodin ya se utilizo"<<endl;
						MostrarHora();
						cout <<"\t\t\t"<< "Pregunta #" << i+1<< " Por un premio de: ¢" <<dineroAcumulado<< endl << endl;
						cout<<"\t\t\t"<<millonario[NumeroRandom][0]<<endl<<endl;//imprimir solo la pregunta
				for(int z=1;z<5;z++){//se inicia ciclo para imprimir las opciones
					if(z==3){//condicion para cuando se imprima la letra C haga un salgo de linea antes
						cout<<"\n\n";
					}
					cout<<"\t\t\t";//con este cout se imprimira la letras con saltos de 15 espacios
					cout<<millonario[NumeroRandom][z]<<"\t";//se imprime la opcion correspondiente al valor de z
				}
							ComodinUso=true;
					}
				}
			}else{
			ComodinUso=false;	
			}
				}
			
				//Comodin(millonario[NumeroRandom],NumeroRandom,respuestaCorrecta,i,dineroAcumulado);
				cout<<"\n\n\t\t\tRespuesta: " ;
				cin >> respuesta;//guardamos el resultado en la variable respuesta
			if (ComprobarLetra(respuesta) != true) {//verificamos con el metodo ComprobarLetra si la respuesta corresponde a A,B,C,D 
	while (ComprobarLetra(respuesta) != true) {
					cout <<"\t\t\tOPCION INVALIDA" << endl << endl << "\t\t\tSU RESPUESTA:  ";
					cin >> respuesta;
				}
			}
			//Respuesta definitiva
			cout << "\t\t\tRespuesta definitiva?\t";//preguntar si la respuesta es definitiva
			cin >> respuestaDefinitiva;//guardarla en la variable
			if (RespuestaDefinitiva(respuestaDefinitiva) != true) {
			while (respuestaDefinitiva != "SI") {
					system("cls");
					cout<<"\n\n\n\n\n\n"<<endl;//cout para centrar texto
					cout <<"\t\t\tTe repito la pregunta" << endl;
					posRespuestaDefinitiva = millonario[NumeroRandom][0];
					cout<<"\t\t\t"<<millonario[NumeroRandom][0]<<endl<<endl;//imprimir solo la pregunta
				for(int z=1;z<5;z++){//se inicia ciclo para imprimir las opciones
					if(z==3){//condicion para cuando se imprima la letra C haga un salgo de linea antes
						cout<<"\n\n";
					}
					cout<<"\t\t\t";//con este cout se imprimira la letras con saltos de 15 espacios
					cout<<millonario[NumeroRandom][z]<<"\t";//se imprime la opcion correspondiente al valor de z
				}
				cout<<endl;//salto de linea
				cout<<"\n\n\t\t\tRespuesta: " ;
				cin >> respuesta;//guardamos el resultado en la variable respuesta
					cout <<"\t\t\tRespuesta definitiva?\t";
					cin >> respuestaDefinitiva;
					if (ComprobarLetra(respuesta) != true) {
						while (ComprobarLetra(respuesta) != true) {
							cout << "\t\t\tOPCION INVALIDA " << endl << "\t\t\tSU RESPUESTA:   ";
							cin >> respuesta;
						}
					}
					
				}	
			}
			//se consulta la respuesta para ver si es correcta o no
			i=ConsultarRespuesta(Convertir(respuesta), respuestaCorrecta,i);
		}
		else {//si el numero random se repite descuente -1 al valor de i para que se muestren las 15 preguntas
			i--;
		}//else
	
	}else{
		Premios(i);
	}
	
	}//for

}//void



/////////////MAIN
int main(int argc, char** argv) {// EL MAIN
	SetConsoleTitle("Quien quiere ser millonario GRUPO 5");//PERMITE CAMBIAR EL NOMBRE DE LA CONSOLA
	system("mode con: cols=150 lines=25");//PERMITE CAMBIAR EL TAMAÑO DE LA CONSOLA
	setlocale(LC_CTYPE, "Spanish");//este codigo junto con la libreria #include <clocale> para usar caractes como ñ
	string Nombre;
	cout<<"Digita tu nombre: ";
	cin>>Nombre;
	cout<<"Bienvenid@ "<<Nombre<<" selecciona una opcion para jugar o salir"<<endl;
	Sleep(2000);
	int menu;
	do {
		system("cls");
		cout << "1.JUGAR\n2.SALIR" << endl;
	cin >> menu;
	system("cls");
		switch (menu)
		{
		case 1:	
			LogoMillonario();
			MostrarPreguntas();//metodo principal;
			break;
		case 2:
			exit(EXIT_SUCCESS);
			break;
		}
	} while (menu != 2);
	system("PAUSE");
	return 0;
}// main
