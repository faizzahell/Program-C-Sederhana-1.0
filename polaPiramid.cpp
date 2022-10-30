#include <iostream> // pacakge library yang digunakan
using namespace std;

int main() {
  int tinggi, baris, jarak, icon;

  cout << "=========================================" << endl;
  cout << "----------- Program Pola Piramid --------" << endl;
  cout << "=========================================" << endl << endl;
  cout << " Masukkan tinggi piramid : "; cin >> tinggi;
  cout << endl;
  cout << "-----------------------------------------" << endl << endl;

  for(baris = 1; baris <= tinggi; baris++) { // mengatur banyak baris
    for (jarak = 1; jarak <= tinggi - baris; jarak++) {  // memberi spasi tambahan 
      cout << " "; // spasi untuk menengahkan icon bintang
    }

    for (icon = 1; icon <= baris; icon++) {
      cout << " *"; // memberi jarak antar icon, perbandingan 2 : 1 dari jarak
    }
    cout << endl;
  }

  cout << endl;
  cout << "===========================================" << endl;
  cout << "-------------- Program Selesai ------------" << endl;
  cout << "===========================================";

  return 0;
}
