#include <iostream>
using namespace std;

int main () {
	//const untuk mendeklarasikan nilai tetap
	const float phi = 3.14;
	float l, r;
	
	//value r
	cout<<"No.1 masukkan jari jari lingkaran = ";
	cin>>r;
	
	//proses perhitungan luas
	l = phi * r *r;
	//pemanis
	cout<<"diketahui = "<<endl;
	cout<<"phi       = "<<phi<<endl;
	cout<<"r         = "<<r<<endl;
	cout<<"======================"<<endl;

	
	//penampilan hasil
	cout<<"luas lingkaran dengan jari-jari "<<r<<" cm"<<" adalah ";
	cout<<l; "cm2";

	//value r
	cout<<"N0.2 masukkan jari jari lingkaran = ";
	cin>>r;
	
	//proses perhitungan luas
	l = phi * r *r;
	//pemanis
	cout<<"diketahui = "<<endl;
	cout<<"phi       = "<<phi<<endl;
	cout<<"r         = "<<r<<endl;
	cout<<"======================"<<endl;

	
	//penampilan hasil
	cout<<"luas lingkaran dengan jari-jari "<<r<<" cm"<<" adalah ";
	cout<<l; "cm2";
}

