#include <iostream>
#include <stdlib.h>
using namespace std;

int main (){
	char kata[20];
	float angka,a,b;
	//clrscr();
	cout<<"Masukkan Sembarangan kata berupa angka=";
	cin>>kata;
	angka= atoi(kata);
	a= angka + 7;
	cout<<"Hasil Perubahan ditambah dengan 7="<<a;
	getchar();
	
}
