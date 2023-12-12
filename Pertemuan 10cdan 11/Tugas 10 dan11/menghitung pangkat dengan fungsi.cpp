#include <iostream>

using namespace std;

int pangkat(int x, int y) {
  int hasil = 1;
  for (int i = 1; i <= y; i++) {
    hasil *= x;
  }
  return hasil;
}

int main() {
  int x, y;
  cout << "Masukkan nilai x: ";
  cin >> x;
  cout << "Masukkan nilai y: ";
  cin >> y;

  int hasil = pangkat(x, y);
  
  cout << x << "Di Pangkatkan" << y << " = " << hasil << endl;

  return 0;
}
