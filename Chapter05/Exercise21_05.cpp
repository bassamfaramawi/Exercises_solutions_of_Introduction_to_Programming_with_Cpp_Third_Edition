/*
 **5.21 (Display numbers in a pyramid pattern) Write a nested for loop that prints the
following output:
       a b c d e f g h h g f e d c b a
         a b c d e f g g f e d c b a
           a b c d e f f e d c b a
             a b c d e e d c b a
               a b c d d c b a
                 a b c c b a
                   a b b a
                    a a
 */

/* 
 * File:   Exercise21_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 30, 2018, 6:33 AM
 */

#include <iostream> // For the cin & cout functions
#include <cmath>  // For math functions

using namespace std;

int main() {
    for(int n = 0; n <= 8; n++) {
        
        for(int i = 0; i <= n; i++)
            cout << "  ";
        
        for(int i = 8 - n; i >= -(8 - n); i--){
            if(i == 0)
                continue;
            cout << (char)(abs(abs(i) - 8) + (int)'a' - n) << " ";
        }
        
        cout << endl;
    }

    return 0;
}

