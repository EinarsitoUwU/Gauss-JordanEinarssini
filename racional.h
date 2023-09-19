#include <array>
#include <iostream>
#include <iterator>
#include <list>
#include <ostream>
#include <cstdlib>
#include <string>
#include <vector>
//todos los metodos tienen que devolver enteros
class Frac{
	private:
		double aprox;
	public:
		int num=0,den=0,integers=0;
		void setValues(int n,int d){
			num =n;den=d;	
		}
		void setForArray(std::array<int, 2> in){
			num = in[0]; den=in[1];
		}
		void setForString(std::string n,std::string d){
			int pass1,pass2;
			pass1=std::stoi(n);
			pass2=std::stoi(d);
			num = pass1;
			den = pass2;
		}
		void setForString_Integers(std::string i,std::string n,std::string d){
			int pass1,pass2,passI;
			passI=std::stoi(i);
			pass1=std::stoi(n);
			pass2=std::stoi(d);
			integers=passI;
			num = pass1;
			den = pass2;
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
		std::string returnS(){
			std::string sep = "/";
			return (std::to_string(num)+sep+std::to_string(den));
		}
		std::string returnIS(){
			std::string sep = "/";
			return (std::to_string(integers)+" "+std::to_string(num)+sep+std::to_string(den));
		}

		std::array<int, 2> returnArray(){
			std::array<int, 2> out;out[0]=num;out[1]=den;
			return out;
		}
		double aproxi(){
			double result;
			if (num == 0) {
				result = integers;	
			}else {
				result = (num + 0.0)/den + integers;
				aprox = result;
			}
			return result;
				}
		void simple(){
			int i,found=1;
			for (i=2; i<num; i++) {
				if (num%i == 0 && den%i == 0) {
					found = i;	
				}	
			}
			num=num/found;
			den=den/found;
		}
		void simple_Integers(){
			simple();
			if (den == 1) {
				integers = num;
				num=0;
				den=0;
			}else {
				integers = num/den;
				num = num%den;
			}
		}

};

Frac racional(int,int,int),racional(int,int),double_toFrac(float),plusFrac(Frac,Frac),minusFrac(Frac,Frac),timesFrac(Frac,Frac),divide_byFrac(Frac,Frac),inverse_ofInt(int),transformFrac_integers(Frac);
