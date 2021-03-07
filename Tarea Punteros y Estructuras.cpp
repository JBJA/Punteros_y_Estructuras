//Josué Benjamín Juárez Arevalo
//Carnet: 1290-20-1186

#include<iostream>
#include<string.h>
#include<stdlib.h>
using namespace std;

int main()
{
	int fila=0,columna=0,**pm_notas;
	int *codigo;
	string *nombre;
	
	cout<<"Cuantos Estudiantes Desea Ingresar: ";
	cin>>fila;	
	cout<<"Cuantas Notas Desea Ingresar: ";
	cin>>columna;	
	pm_notas = new  int *[fila];
	codigo = new int [fila];
	nombre = new string [fila];
	for (int i=0;i<fila;i++){
	pm_notas[i] = new int[columna]; 	
	}
cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
cout<<"--------------- INGRESE NOTAS ---------------"<<endl;
	for (int i=0;i<fila;i++){
		cout<<"Ingrese el codigo: ";
		cin>>codigo[i];
		cin.ignore();
		cout<<"Ingrese el nombre: ";
		getline(cin,nombre[i]);
		for (int ii=0;ii<columna;ii++){
			cout<<"Ingrese la Nota "<<++ii<<" : ";
			cin>>*(*(pm_notas+i)+ii);
			ii--;
			}
cout<<"---------------------------------------------"<<endl;
	}
cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;

cout<<"\n°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;
cout<<"--------------- MOSTRAR NOTAS ---------------"<<endl;
	for (int i=0;i<fila;i++){
			cout<<"Codigo: ";
			cout<<codigo[i]<<" | Nombre: ";
			cout<<nombre[i]<<endl;
		for (int ii=0;ii<columna;ii++){
			cout<<"Notas "<<++ii<<" : ";
			cout<<*(*(pm_notas+i)+ii)<<endl;
			ii--;
			}
cout<<"---------------------------------------------"<<endl;
	}
	for (int i=0;i<fila;i++){
		delete [] pm_notas[i];
	}
	delete [] pm_notas;

cout<<"°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°°"<<endl;


	system("PAUSE");
	return 0;
}
