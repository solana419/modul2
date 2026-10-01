#include <iostream>
using namespace std;

void tukar(int *x, int *y) {
    int temp; 

    temp = *x;
    *x = *y;
    *y = temp;
}

int main() {
    int a = 4;
    int b = 6;

    cout << "sebelum ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    tukar(a, b);

    cout << "setelah ditukar: " << endl;
    cout << "a = " << a << endl;
    cout << "b = " << b << endl;


    
}