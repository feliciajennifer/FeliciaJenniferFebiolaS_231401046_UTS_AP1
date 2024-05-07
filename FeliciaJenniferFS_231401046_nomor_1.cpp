#include <iostream>
#include <iomanip>
using namespace std;

int main () {   
    int waktu, jam, menit, detik;
    
    cout << "Masukkan detik : ";
    cin >> waktu;
    
    jam = waktu / 3600;
    menit = (waktu % 3600) / 60;
    detik = (waktu % 3600) - (menit * 60);
    
    cout << setfill('0') << setw(2) << jam << ":";
    cout << setfill('0') << setw(2) << menit << ":";
    cout << setfill('0') << setw(2) << detik << endl;
}