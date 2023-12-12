#include <iostream> //fungsi nya untuk memasukkan file untuk mengakses fitur tambahan

using namespace std; //fungsi nya untuk mendeklarasikan/ kepada compiler semua class file

int main() { //adalah tempat di mana eksekusi program dimulai.
  // Deklarasi variabel
  int bilangan = 1; //variabel bilangan yang memiliki nilai 1.

  // Perulangan untuk menghitung 10 deret bilangan ganjil
  for (int i = 0; i < 10; i++) { //perulangan sebanyak 10 kali
    cout << bilangan << endl;// untuk menangani operasi input dan output (I/O) dasar.
    bilangan += 2; // penambahan bilangan ditambah 2
    
  }

  return 0;
}
