#include <iostream> // package library yang digunakan
using namespace std;

int main() {
  int pilihan, jumlah, range, i, bilangan;
  string jenis;

  cout << "==========================================================" << endl;
  cout << "------------------ Program Deret Bilangan ----------------" << endl;
  cout << "==========================================================" << endl << endl;
  cout << " 1. Bilangan Ganjil      2. Bilangan Genap" << endl << endl;
  cout << "==========================================================" << endl;
  cout << " Masukkan pilihan deret bilangan        :  "; cin >> pilihan; // input untuk memilih program


  switch(pilihan) {
    case 1: jenis = "ganjil"; // program untuk mencetak deret bilangan ganjil
    cout << " Masukkan panjang deret bilangan ganjil :  "; cin >> range; // memilih banyaknya bilangan
    cout << "==========================================================" << endl << endl;
    cout << " Deret bilangan " << jenis << " yang didapatkan : ";
  
    for (i = 1; i <= range; i++) {
      cout << i * 2 - 1; // ganjil dimulai dari 1, maka 1 x 2 - 1 = 1, begitu seterusnya
      if (i < range) {
        cout << ", "; // mencetak koma pada akhir bilangan, untuk i lebih kecil dari range
      } 
    }

    cout << endl;
    cout << " Hasil penjumlahan dari " << range << " deret bilangan :" << endl << endl;
    cout << " =>   ";

    for (i = 1; i <= range; i++) {
      cout << i * 2 - 1;
      if (i < range) {
        cout << " + "; // mencetak tanda plus diakhir bilangan, untuk i lebih kecil dari range
      } 
    }

    jumlah = range;  // pemasukan nilai jumlah yang di dapat dari nilai range
    jumlah = jumlah * jumlah; // penjumlahan deret bilangan ganjil memiliki rumus range kuadrat
    cout << "  =  " << jumlah << endl << endl;
    break;

    case 2: jenis = "genap";
    bilangan = 0; // pendeklarasian bilangan dengan nilai 0
    jumlah = bilangan; // pemasukkan nilai jumlah yang di dapat dari nilai bilangan
 
    cout << " Masukkan panjang deret bilangan genap  :  "; cin >> range;
    cout << "==========================================================" << endl << endl;
    cout << " Deret bilangan " << jenis << " yang didapatkan : ";  

    for (i = 1; i <= range; i++) {
      bilangan = bilangan + 2; // bilangan awalnya 0 agar dapat menjadi 2, ditambahkan 2
      cout << bilangan;
      if (i < range) {
        cout << ", ";
      }
    }
    bilangan = 0; // pengulangan nilai bilangan menjadi 0, agar dapat digunakan dengan normal

    cout << endl;
    cout << " Hasil penjumlahan dari " << range << " deret bilangan :" << endl << endl;
    cout << " =>   ";

    for (i = 1; i <= range; i++) {
      bilangan = bilangan + 2;
      jumlah = jumlah + bilangan; // jumlah didapatkan dari nilai jumlah awal ditamabah bilangan
      cout << bilangan;
      if (i < range) {
        cout << " + ";
      }
    }
    cout << "  =  " << jumlah << endl << endl;
    break;
    
    default: cout << "----------------------------------------------------" << endl << endl;
    cout << " Pilihan yang anda masukkan salah. " << endl << endl;
  }

  cout << "==========================================================" << endl;
  cout << "--------------------- Program Selesai --------------------" << endl;
  cout << "==========================================================";

  return 0;
}