#include <iostream>
#include <string>
#include <stdio.h>

using namespace std;

int main() {
    int bil = 2;
    int total = 0;

    cout << "Deret Bilangan Genap:\n";
    do {
        cout << bil;
        total += bil;
        bil += 2;
        if (bil <= 20) {
            cout << " + ";

        } else {
            cout << "";
        }
    }   while (bil <= 20);
        cout << " = " << total; 
    return 0;
}