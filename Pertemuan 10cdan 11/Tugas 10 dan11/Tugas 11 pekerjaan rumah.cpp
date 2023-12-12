#include <iostream>

using namespace std;

struct Pembayaran {
  string nama;
  int nim;
  string matkul;
  int sks;
};

int main() {
  Pembayaran pembayaran;
  cout << "Nama mahasiswa: ";
  getline(cin, pembayaran.nama);
  cout << "NIM: ";
  cin >> pembayaran.nim;
  cout << "Mata kuliah: ";
  getline(cin, pembayaran.matkul);
  cout << "Jumlah SKS: ";
  cin >> pembayaran.sks;

  int biaya = 50000 * pembayaran.sks;

  cout << endl;
  cout << "Nama mahasiswa: " << pembayaran.nama << endl;
  cout << "NIM: " << pembayaran.nim << endl;
  cout << "Mata kuliah: " << pembayaran.matkul << endl;
  cout << "Jumlah SKS: " << pembayaran.sks << endl;
  cout << "Biaya pembayaran: Rp" << biaya << endl;

  return 0;
}
