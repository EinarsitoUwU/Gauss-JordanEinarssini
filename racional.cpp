#include "racional.h"
//Entrada de racionales
Frac racional(int n, int d){
	Frac frac;frac.num=n;frac.den=d;
	return frac;
}
Frac racional(int i,int n, int d){
	Frac frac;frac.integers=i;frac.num=n;frac.den=d;
	return frac;
}
Frac inverse_ofInt(int num){
	Frac frac;frac.num=1;frac.den=num;
	return frac;
}
Frac transformFrac_integers(Frac owo){
	Frac frac = owo;
	int newNum;
	if (owo.integers != 0 && owo.den != 0) {
		newNum = owo.integers*owo.den+owo.num;	
		frac.integers=0;frac.num=newNum;
	}	
	else if (owo.integers != 0 && owo.den == 0) {
		frac.num = frac.integers;frac.den=1;
	}
	return frac;
}
Frac plusFrac( Frac one, Frac two){
	int time1,time2,time3,plus;
	one = transformFrac_integers(one);
	two = transformFrac_integers(two);
	Frac frac;time1=one.num*two.den;time2=two.num*one.den;time3=one.den*two.den;plus=time1+time2;
	frac.num=plus;frac.den=time3;
	frac.simple_Integers();
	return frac;
}
