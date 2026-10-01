#include <iostream>
using namespace std;

int maks3(int a, int b, int c) {
    int temp_maks = a;

    if (b > temp_maks) 
        temp_maks = b;

    if (c > temp_maks) 
        temp_maks = c;
    
    return temp_maks;
}