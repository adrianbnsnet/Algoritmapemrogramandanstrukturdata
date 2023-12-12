#include <iostream>
using namespace std;

int main() {
	string Nama;
	int x,y,z, rata_rata;
	cout<<"Nama Siswa = ";
	cin>>Nama;
	cout<<"nilai pertandingan 1 = ";
	cin>>x;
	cout<<"nilai pertandingan 2 = ";
	cin>>y;
	cout<<"nilai pertandingan 3 = ";
	cin>>z;
	
	rata_rata= (x+y+z)/3;
	if(rata_rata>=85) {
		cout<<"hadiah computer Core I5";
	}else if(rata_rata>=70){
		cout<<"hadiah uang sebesar Rp.2.500,000";
	}else {
	cout<<"hadiah hiburan";
	}
	
	//Switch
	cout<<"\nNama Siswa = ";
	cin.ignore();
	getline(cin, Nama);
//	cin>>Nama;
	cout<<"\nnilai pertandingan 1 = ";
	cin>>x;
	cout<<"\nnilai pertandingan 2 = ";
	cin>>y;
	cout<<"\nnilai pertandingan 3 = ";
	
	cin>>z;
	
	char nilai;
	
	rata_rata= (x+y+z)/3;
	
	if(rata_rata>=85) {
		nilai = 'A';
		
	}else if(rata_rata>=70){
		nilai = 'B';
	}else {
		nilai = 'C';
	}
	
	switch(nilai) {
		case 'A' :
			cout<<"Hadiah Komputer core i5";
			break;
		case 'B' :
			cout<<"Hadiah Uang Rp. 2jt 500rb";
			break;
		default :
			cout<<"Hiburan";		
	}
	
}
