#include <iostream>  // package library yang digunakan
using namespace std;

int main() {
  int input; // variable untuk menyimpan jumlah bilangan yang ingin dicetak
  cout << "=================================================================" << endl;
  cout << "--------------------- Mencetak Bilangan Prima -------------------" << endl;
  cout << "=================================================================" << endl << endl;
  cout << " Masukkan jumlah bilangan yang ingin dicetak : "; cin >> input;
  cout << endl << endl;

  int counter = 2; // variable yang digunakan untuk menyimpan bilangan prima
  int output = 0; // variable penentu untuk menjalankan program sesuai dengan input

  cout << " " << input << " bilangan prima pertama : ";

  while (output < input) {
    int jumlah_faktor = 0;
    for(int i = 1; i <= counter; i++) {
      if (counter % i == 0) {  
        jumlah_faktor++; // menaikan jumlah faktor ketika memenuhi kondisi
      }
    }
    
    if (jumlah_faktor == 2) {
      cout << counter << " ";  // menampilkan bilangan prima 
      output++; // setalah menampilkan counter, output dinaikan
    }
    counter++; // menaikan counter, untuk mengecek bilangan selanjutnya
  }

  cout << endl << endl;
  cout << "=================================================================" << endl;
  cout << "------------------------ Program Selesai ------------------------" << endl;
  cout << "=================================================================";

  return 0;
}
