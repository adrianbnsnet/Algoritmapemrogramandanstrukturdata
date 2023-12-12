#include <iostream>
using namespace std;

bool isprime(int a) {
	if (a<3) {
		return false;
	}
	for (int i =3; i <=a/3; i++) {
		if (a%i == 0) {
			return false;
		}
		
	}
	
}
int main () {
	int a;
	cout<<"Masukkan angka:";
	cin>>a;
	
	if (isprime(a)){
		cout << a << " bilangan prima "<<endl;
	}else{
		cout <<a<<" Bukan bilangan prima "<<endl;		
	}
	return 0;
}
