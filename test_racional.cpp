#include <iostream>
#include <string>
#include <vector>
#include "racional.h"
using namespace std;
list<Frac> lista_Frac;
Frac bufferFrac;
int main(){
	int i =1,nume,deno;
	string num,den;
	while (i==1) {
		cout<<"Ingresa la primer fraccion : ";cin>>num;cin>>den;
		nume = stoi(num);deno = stoi(den); 
		lista_Frac.push_back(racional(nume,deno));
		cout<<"\nOtra? ";cin>>i;
		}
	for (Frac element : lista_Frac) {
		cout<<element.returnS()<<endl;	
	}
	return 0;
}
