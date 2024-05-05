#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int a,b;
    int total;
    int input;
    for(a = 2;a <= 10;a += 2) {
        total = 0;
	    for(b = 2;b <= a;b += 2) {
            if(b != 2)
            cout << " + "; 
            cout << b;
   	        total = total + b;
            } cout << " = " << total << endl;
   }

getch();
}