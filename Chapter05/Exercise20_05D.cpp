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
 * File:   Exercise20_05D.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 30, 2018, 6:24 AM
 */

#include <iostream> // For the cin & cout functions

using namespace std;

int main() {
    cout << "Pattern D" << endl;
    
    for(int n = 1; n <= 6; n++) {
        for(int i = 1; i <= 6 - n; i++)
            cout << " ";
        for(int i = 1; i <= n; i++)
            cout << i << " ";
        cout << endl;
    }

    return 0;
}

