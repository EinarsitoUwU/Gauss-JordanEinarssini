#include <array>
#include <iostream>
#include <list>
#include <ostream>
#include <string>
//todos los metodos tienen que devolver enteros
class Frac{
	public:
		int num,den;
		double aprox;
		void setValues(int n,int d){
			num =n;den=d;	
		}
		void setForArray(std::array<int, 2> in){
			num = in[0]; den=in[1];
		}
		std::list<int> inverse_list(){
			std::list<int> inverses;
			inverses.push_back(den);inverses.push_back(num);
			return inverses;
		}
		Frac inverse(){
			Frac inverses;
			inverses.num = den;inverses.den=num;
			return inverses;
		}
		//metodo chafa
		void printear(){
			std::cout<<"El numerador es : "<<num<<std::endl;
			std::cout<<"El denominador es : "<<den<<std::endl;
		}
		void expresion(){
			std::cout<<num << "/" << den<<std::endl;
		}
		std::string returnS(){
			std::string sep = "/";
			return (std::to_string(num)+sep+std::to_string(den));
		}
		std::array<int, 2> returnArray(){
			std::array<int, 2> out;out[0]=num;out[1]=den;
			return out;
		}

};

Frac racional(int,int),createRacional(double);

Frac racional(int n, int d){
	Frac frac;frac.num=n;frac.den=d;
	return frac;
}
Frac createRacional_double(double num){
	Frac frac;
	return frac;
}
