#include <iostream>
#include "racional.h"
using namespace std;

int main(){
	Frac *owo = new Frac; 
	owo->setValues(2, 5);
	cout<<owo->returnS()<<endl;
	owo->aproxi();
	
	delete owo;
	return 0;
}
