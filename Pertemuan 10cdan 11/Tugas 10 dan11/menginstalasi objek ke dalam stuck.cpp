#include <iostream>
#include <string>
using namespace std;

//implementasi cara menginstalasikan objek ke dalam struct
struct siswa {
  int no_induk;
  string nama;
  float nilai;
};

int main() {
  siswa jery{1, "Jery Januari", 85.5};
  siswa tono{2, "Tono Laksono", 89.9};


  cout << jery.nama << " mendapatkan nilai " << jery.nilai << endl;
  cout << tono.nama << " mendapatkan nilai " << tono.nilai << endl;

  return 0;
}

