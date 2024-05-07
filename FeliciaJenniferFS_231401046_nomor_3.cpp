#include <iostream>
#include <cmath>
#include <string>
using namespace std;

int main() {
    string angka;   

    cout << "Masukkan sebuah angka: ";
    cin >> angka;

    // Menghitung jumlah angka prima 
    int jumlah = 0;
    for (char digit : angka) {
        int DigitAngka = digit - '0'; // Mengonversi karakter ke nilai integer
        
        bool isPrime = true; // Cek bilangan prima

        if (DigitAngka <= 1) {
            isPrime = false;
        } else {
            for (int i = 2; i  <= sqrt(DigitAngka); ++i) {
                if (DigitAngka % i == 0) {
                    isPrime = false;
                    break;
                }
            }
        }

        if (isPrime) {
            jumlah += DigitAngka;
        }
    }

    cout << "Jumlah angka prima: " << jumlah << endl;
}
