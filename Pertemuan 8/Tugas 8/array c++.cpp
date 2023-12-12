#include <iostream>
#include <stdio.h>
#include <windows.h>
#include <iomanip>
#include <cstdio>
#include <conio.h>
using namespace std;

void gotoxy(int x, int y){
COORD coord;
coord.X=x;
coord.Y = y;
SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE),coord);}

int main() 
{
int i,menu; //Deklarasi Variabel Angka
struct
{
char nama[20],lagi; //char adalah menyimpan data jenis karakter masing masing
int a,b,c;
float nilaiakhir,ket; //fungsi float untuk melooping angka
}barang[5];

atas:
system("cls"); //fungsi cls membersihkan layar pada program yang dijalankan
cout << "\t\t\t INPUT PENJUALAN BARANG " << endl; //menampilkan output pada layar input penjualan barang
cout << "\t\t\t __________ " << endl;

cout<<" Masukan Input Jumlah Barang : ";//menampilkan output pada layar input jumlah barang
cin>>menu; //fungsi cin membutuhkan variabel untuk menyimpan data
cout<<endl; //output yang ditampilkan pada layar komputer

for (i=1;i<=menu;i++) //fungsi for untuk pengeksekusisan beberapa pernyataan secara berulang ulang
{
cout<<" Data Penjualan Barang Ke – " <<i<<endl; 
cout<<" Nama Barang : " ;//fungsi untuk menampilkan output pada layar komputer pada nama barang
cin>>barang[i].nama; //fungsi cin untuk membutuhkan variabel untuk menyimpan data
cout <<" Data tahun 2001 " << endl;
cout<<" Jumlah Penjualan : ";
cin>>barang[i].a;
cout << " Data tahun 2002 " << endl;
cout<<" Jumlah Penjualan : ";
cin>>barang[i].b;
cout << " Data tahun 2003 " << endl;
cout<<" Jumlah Penjualan : ";
cin>>barang[i].c;
cout<<endl;
}

system("cls");
cout<<endl;
cout<<endl;
cout<<" HASIL PENJUALAN BARANG"<<endl;
cout<<"__________________"<<endl;
cout<<"__________________"<<endl;
cout<<"No. \tNama\t Barang\t 2001\t 2002\t 2003"<<endl;
cout<<"__________________"<<endl;

for (i=1;i<=menu;i++){
	gotoxy(2,i+7); cout<<i;
	gotoxy(6,i+7); cout<< "\t" << barang[i].nama;
	gotoxy(28,i+7); cout<< "\t" <<barang[i].a;
	gotoxy(46,i+7); cout<< "\t" <<barang[i].b;
	gotoxy(64,i+7); cout<< "\t" <<barang[i].c<<endl;
}
cout<<endl;

cout<<"__________"<<endl;
cout<<"Input data lagi [Y]/[T]? :";
cin>>barang[i].lagi;
if(barang[i].lagi=='Y'||barang[i].lagi=='y') {
goto atas;
}
getch();

}
