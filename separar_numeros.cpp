#include <iostream>
using namespace std;

int main() {

int numero=0;

cout<<"Ingresa el numero que quieras separar: "<<endl;
cin>>numero; //5623

int calculador=numero;  //5623
int digitos=0;
int numerador=1;

while(calculador>0){
	digitos++;				//1 → 2 → 3 → 4
	calculador=calculador/10; //562 → 56 → 5 → 0 
}

int digitos2=digitos; //digitos2 = 4

int cifras[digitos];

while(numero>0){
	cifras[digitos]=numero%10; //3 → 2 → 6 → 5 → 0
	numero=numero/10; 
	digitos--;
}

while (digitos2>0){
cout<<"Cifra "<<numerador<<": "<<cifras[numerador]<<endl; //Cifra [1→2→3→4]: [5→6→2→3]
digitos2--; //4 → 3 → 2 → 1 → 0
numerador++; //1 → 2 → 3 → 4 → 5
}


	return 0;
}