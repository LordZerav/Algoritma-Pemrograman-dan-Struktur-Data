#include <iostream>
#include <stdio.h>
#include <string>

using namespace std;

int main() {
    int bil = 1;
    int total = 0;

    cout << "Deret Bilangan Ganjil\n";
    do {
        cout << bil;
        total += bil;
        bil += 2;
        if (bil <= 19) {
            cout << " + ";
        } else {
            cout << "";
        } 
    }   while (bil <= 19);
            cout << " = " << total;

    return 0;

}