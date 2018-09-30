/*
 *5.20 (Display four patterns using loops) Use nested loops that display the 
 following patterns in four separate programs:
     Pattern A    Pattern B           Pattern C      Pattern D
     123456               1               3              1
     1    6             1 2 3           3 3             1 2
     1    6           1 2 3 4 5       3 3 3            1 2 3
     1    6         1 2 3 4 5 6 7       3 3           1 2 3 4
     1    6        1 2 3 4 5 6 8 9        3          1 2 3 4 5
     123456                                         1 2 3 4 5 6
 */

/* 
 * File:   Exercise20-05C.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 30, 2018, 5:52 AM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    cout << "Pattern C" << endl;
    
    for(int n = 0; n <= 3; n++) {
        for(int i = 0; i < 4 - n; i++)
            cout << "  ";
        for(int i = 0; i < n; i++)
            cout << "3 ";
        cout << endl;
    }
    
    for(int n = 2; n > 0; n--) {
        for(int i = 4 - n; i > 0; i--)
            cout << "  ";
        for(int i = 0; i  < n; i++)
            cout << "3 ";
        cout << endl;
    }
    
    return 0;
}

