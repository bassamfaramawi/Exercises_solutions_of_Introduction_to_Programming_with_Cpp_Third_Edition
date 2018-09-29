/*
 *5.20 (Display four patterns using loops) Use nested loops that display the 
 following patterns in four separate programs:
    Pattern A    Pattern B             Pattern C      Pattern D
    123456               1                 3              1
    1    6             1 2 3             3 3             1 2
    1    6           1 2 3 4 5         3 3 3            1 2 3
    1    6         1 2 3 4 5 6 7         3 3           1 2 3 4
    1    6       1 2 3 4 5 6 7 8 9         3          1 2 3 4 5
    123456                                           1 2 3 4 5 6
 */

/* 
 * File:   Exercise20_05B.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 11:30 PM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    cout << "Pattern B" << endl;
    
    for(int n = 1; n <= 9; n += 2) {
        for(int i = 1; i <= 9 - n; i++)
            cout << " ";
        
        for(int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

