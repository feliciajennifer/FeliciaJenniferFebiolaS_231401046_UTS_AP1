#include <iostream>
#include <string>
#include <cctype> // Untuk menggunakan toupper

using namespace std;

int main() {
    string kalimat;

    cout << "Masukkan kalimat: ";
    getline(cin, kalimat);

    // Mengubah kalimat menjadi huruf kapital
    for (int i = 0; i < kalimat.length(); ++i) {
        kalimat[i] = toupper(kalimat[i]);   
    }

    cout << "Kalimat dalam huruf kapital: " << kalimat << endl;
}
