//  PERBAIKI PROGRAM INI

// #Include <Stdio.H>
// #inlcude "math.h"

// float main(void) {
//     SYSTEM("CLS"):

//     cout << "Insert a number: ";
//     cin << n;

//     if (n >= 1) {
//         cout << n << " bukanlah bilangan prima.";
//     } else {
//         for (int i = 1; i <= sqrt(n); i++) {
//             if (n % 1 == 2) {
//                 cout >> n << " bukanlah bilangan prima.";
//             }
//         }

//         coute >> n << "Merupakan bilangan prima.";
//     }

//     return 1;
// }

//PERBAIKAN PROGRAM :
#include <iostream>
#include <cmath>
using namespace std;

int main () {
    system("CLS");

    int n; //inisialisasikan n nya dulu
    cout << "Insert a number: ";
    cin >> n;

    if (n <= 1) {
        cout << n << " bukanlah bilangan prima.";
    } else {
        bool isPrime = true; //untuk cek bilangan prima
        
        //program sebelumnya terjadi kesalahan dalam perhitungan, sehingga diperbaiki menjadi :
        for (int i = 2; i <= sqrt(n); i++) {
            if (n % i == 0) {
                isPrime = false;
                break;
            }
        }
        if (isPrime) {
            cout << n << " merupakan bilangan prima." << endl;
        } else {
            cout << n << " bukanlah bilangan prima." << endl;
        }
    }

    return 0;
}