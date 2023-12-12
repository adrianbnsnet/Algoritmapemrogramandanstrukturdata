#include <iostream>

using namespace std;

struct mhs {
  char nama[20];
  char nim[10];
  char matkul[15];
  int sks;
};

mhs bayar[2];

int main() {
  int bts, var, tetap;

  for (int i = 0; i < 2; i++) {
    // Input data

    cout << "\n\n- Mahasiswa ke-" << (i + 1) << " -" << endl;

    cout << "Nama mhs = ";
    cin >> bayar[i].nama;

    cout << "NIM = ";
    cin >> bayar[i].nim;

    cout << "Mata Kuliah = ";
    cin >> bayar[i].matkul;

    cout << "Jumlah SKS = ";
    cin >> bayar[i].sks;
  }

  // ... kode untuk menghitung biaya dan melakukan proses lainnya ...

  return 0;
}
