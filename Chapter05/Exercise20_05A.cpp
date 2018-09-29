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
 * File:   Exerecise20_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on September 29, 2018, 5:52 PM
 */

#include <iostream> // For the cin & cout functions
#include <string>  // For string function

using namespace std;

int main() {
    cout << "Pattern A" << endl;
    
    for(int n = 1; n <= 6; n++) {
        for (int i = 1; i <= 6; i++)  {
            if(n == 1 || n == 6 || i == 1 || i == 6)
                cout << i;
            else
                cout << " ";
        }
        cout << endl;
    }
    return 0;
}

