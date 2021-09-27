#include<iostream>
#include<cstdlib>
#include<conio.h>
#include<ctime>
using namespace std;

int main (int argc, char *argv[]) {
	//INGRESAMOS LA VARIABLES
	int cash = 10;
	int salida = -1;
	int tiradas = 0;
	
	srand(time(NULL));

	cout<<"------[TRAGAMONEDAS]------"<<endl;
	cout<<"[TU AFICION ES MI FORTUNA]"<<endl;
	
	cout<<endl;
	
	while(salida <=1){
		//INGRESAMOS LAS TIRAADAS PARA PODER JUEGAR
		cout<<"Cuantas monedas desea ingresar?:";
		cin>>tiradas;
		//LAS TIRADAS TIENEN QUE ESTAR ENTRE 1 Y 9
		if((tiradas >= 1)&&(tiradas <= 9)){
			cout<<"Usted ingreso correctamente"<<endl;
		}else{
			cout<<"ERROR, vuelva a ingresar la moneda"<<endl;
			exit (EXIT_FAILURE);
		}
		cout<<endl;
		//INGRESAMOS LAS VARIABLES DE LOS NUMEROS
		int slot1 = 1;
		int slot2 = 1;
		int slot3 = 1;
		
		cout<<"------BIENBENIDO------"<<endl;
		cout<<"     |"<<slot1<<"|    |"<<slot2<<"|    |"<<slot3<<"| "<<endl;
		cout<<"START:TIRE LA PALANCA(PRESIONE ENTER)"<<endl;
		
		cout<<endl;
		//BUCLE DE LAS TIRADAS
		for(int x = 0 ; x < tiradas ; x++){
			
			getch();
			cout<<endl;
			cout<<"GIRANDO..."<<endl;
			cout<<"------RESULTADO------"<<endl;
			//DECLARAMOS LOS NUMEROS ALEATORIOS
			slot1 = rand() % 7 + 1;
			slot2 = rand() % 7 + 1;
			slot3 = rand() % 7 + 1;
			//IMPRIME LOS NUMEROS ALEATORIOS
			cout<<"     |"<<slot1<<"|    |"<<slot2<<"|    |"<<slot3<<"| "<<endl;
			
			if((slot1 == slot2) && (slot2 == slot3)){
				
				cout<<"Gano 10 monedas!"<<endl;
				cash += 10;
				cout<<"[total de monedas en cartera: "<<cash<<"]"<<endl;
			}else if((slot1 == slot2) || (slot1 == slot3)|| (slot2 == slot3)){
				
				cout<<"Gano 5 monedas!"<<endl;
				cash += 5;
				cout<<"[total de monedas en cartera: "<<cash<<"]"<<endl;
			}else{
				
				cout<<"Perdio 3 moneda!"<<endl;
				cash -= 3;
				cout<<"[total de monedas en cartera: "<<cash<<"]"<<endl;
			}
			
		}
		
		cout<<endl;
		//SALIDA DEL JUEGO
		cout<<"Desea salir del juego?"<<endl;
		cout<<"1:no  2:si"<<endl;
		cout<<"Respuesta:";
		cin>>salida;	
		
	}
	
	return 0;
}

