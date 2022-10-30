#include <iostream> // package library yang digunakan
using namespace std;

int main() {
  int awal;

  cout << "=========================================" << endl;
  cout << "----- Program Deret Bilangan Menurun ----" << endl;
  cout << "=========================================" << endl << endl;
  cout << " Masukkan bilangan awal : "; cin >> awal;
  cout << endl;
  cout << "-----------------------------------------" << endl << endl;
  
  for(int i = awal; i > 0; i-=2) {  // i mengurangi nilai sebesar 2
    cout << "  |  "<< i << endl;
  }

  cout << endl;
  cout << "==========================================" << endl;
  cout << "-------------- Program Selesai -----------" << endl;
  cout << "==========================================";

  return 0;

}