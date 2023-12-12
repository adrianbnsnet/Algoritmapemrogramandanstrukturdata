#include <iostream>
#include <string>
using namespace std;
struct siswa{
	int no_induk;
	string nama;
	float nilai;
};
	int main(){
		siswa Arkan, Lucas;
		Arkan.no_induk = 1;
		Arkan.nama = "Arkan Januar";
		Arkan.nilai = 75.5;
		lucas.no_induk = 2;
		lucas.nama = "Lucas Laksono";
		lucas.nilai = 89.9;
		cout<<Arkan.nama<< "dengan nomor induk" <<Arkan.no_induk<<"mendapatkan nilai"<<Arkan.nilai<<endl;
		cout<<lucas.nilai<<endl;
		return 0
	}
