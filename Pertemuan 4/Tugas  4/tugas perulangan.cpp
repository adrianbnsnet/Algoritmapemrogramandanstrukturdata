#include <iostream>
using namespace std;

int main() {
    int n;

    cout << "Masukkan sebuah angka: ";
    cin >> n;

    cout << "Angka genap dari 1 hingga " << n << " adalah: ";
    for (int i = 2; i <= n; i += 2) {
        cout << i <<endl;
    }
    cout <<endl;
    
    cout << "Masukkan sebuah angka: ";
    cin >> n;

    cout << "Angka ganjil dari 1 hingga " << n << " adalah: ";
    for (int i = 1; i <= n; i += 2) {
        cout << i <<endl;
    }
    cout <<endl;

    return 0;
}
