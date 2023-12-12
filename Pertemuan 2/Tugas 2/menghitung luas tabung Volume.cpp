#include <iostream>
using namespace std;

int main () {
	//Deklarasi variabel
	float r,t,l,v;
	float phi=3.14;
	
	cout <<"Menghitung luas dan volume Tabung"<<endl;
	cout<<"----------www.adriansch.com----------"<<endl;
	cout<<endl;
	
	cout<<"No.1 Masukkan jari-jari : ";
	cin>>r;
	
	cout<<"Masukkan tinggi : ";
	cin>>t;
	
	//hitung luas tabung
	l=(2*phi*r*(r+t));
	
	//Hitung volume tabung
	v=(phi*t*(r*r));
	
	cout<<endl;
	cout<<"Luas Balok    :"<<l<<endl;
	cout<<"Volume balok  :"<<v<<endl;
		
	return 0;	
}
