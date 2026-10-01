#include <iostream>
using namespace std;

int main() {
    char arr[6];

    arr[0] = 'A';
    arr[1] = 'B';
    arr[2] = 'C';
    arr[3] = 'B';
    arr[4] = 'D';
    arr[5] = 'E';

    cout << arr[3] << endl;
    cout << &(arr[4]) << endl;

    return 0;
}