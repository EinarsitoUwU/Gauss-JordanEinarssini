#include <algorithm>
#include <cstdlib>
#include <iostream>
#include <cmath>
#include <list>
#include <string>
#include "racional.h" 
//einarssini
using namespace std;
//declaracion de funciones
list<double> systemeq(int, int,list<double>),inserteq(int,int);
void insertVars();
//declaracion de variables globales
int r,c;
list<double> alfa;
list<double> result;
list<string> vars;
list<Frac> fracciones;

string bufferTest;
Frac bufferFrac,iwi;
int main(){
	iwi = racional(1, 20);
	cout<<iwi.returnS()<<endl;
	bufferFrac = iwi.inverse();
	cout<<bufferFrac.returnS()<<endl;
	cout<<"Ingresa el numero de filas"<<endl;	
	cin>>r;
	cout<<"Ingresa el numero de columnas"<<endl;
	cin>>c;
	insertVars();
	alfa = inserteq(c, r);
	return 0;
}
//retorna la lista de las variables de la solucion
list<double> systemeq(int rows,int columns,list<double> data){
	list<double> sol;
	int limit = columns;
	for (double element : data) {
	
	}
	return sol;
}
//var = column // eq = rows //
//retorna la lista
list<double> inserteq(int numVar,int numEq){
	int i,x;
	double buffr;
	list<double> owo;
	for (i=1; i<numEq+1; i++) {
		cout<<"Ecuacion "<<i<<endl;
		for (x=1;x<numVar+1;x++) {
			cout<<"Ingresa el valor "<<i<<":"<<x<<"\t:";
			cin>>buffr;
			owo.push_back(buffr);
		}
		cout<<"Ingresa el resultado de la escuacion no "<<i<<" :\t";
		cin>>buffr;
		result.push_back(buffr);
	}
	return owo;
}
//Insertar en variable global
void insertVars(){
	int i;string varr;
	for (i=0; i<c; i++) {
		cout<<"Ingresa la variable no "<<(i+1)<<" : \t";cin>>varr;vars.push_back(varr);
	}
}
