#include <iostream>
#include <stdio.h>
#include <conio.h>

using namespace std;

int main() {
    int a,b;
    int total;
    int input;
    for(a = 1;a <= 10;a += 2) {
        total = 1;
	    for(b = 1;b <= a;b += 2) {
            if(b != 1)
            cout << " * "; 
            cout << b;
   	        total *= b;
            } cout << " = " << total << endl;
   }

getch();
}