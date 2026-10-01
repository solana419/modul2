#include <iostream>
using namespace std;

// Menukar 3 variabel dengan POINTER (rotasi: a <- b, b <- c, c <- a)
void tukarPointer(int *a, int *b, int *c) {
    int temp = *a;
    *a = *b;
    *b = *c;
    *c = temp;
}

// Menukar 3 variabel dengan REFERENCE (rotasi: a <- b, b <- c, c <- a)
void tukarReference(int &a, int &b, int &c) {
    int temp = a;
    a = b;
    b = c;
    c = temp;
}

int main() {
    int x, y, z;

    cout << "Masukkan nilai x: ";
    cin >> x;
    cout << "Masukkan nilai y: ";
    cin >> y;
    cout << "Masukkan nilai z: ";
    cin >> z;

    cout << "\nNilai awal         : x = " << x << ", y = " << y << ", z = " << z << endl;

    // Menggunakan pointer (kirim alamat variabel)
    tukarPointer(&x, &y, &z);
    cout << "Setelah pointer    : x = " << x << ", y = " << y << ", z = " << z << endl;

    // Menggunakan reference (kirim variabel langsung)
    tukarReference(x, y, z);
    cout << "Setelah reference  : x = " << x << ", y = " << y << ", z = " << z << endl;

    return 0;
}