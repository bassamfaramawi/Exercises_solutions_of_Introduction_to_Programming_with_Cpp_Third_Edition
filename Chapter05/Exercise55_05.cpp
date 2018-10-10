/*
 **5.55 (Math tutor) Write a program that displays a menu as shown in the sample 
run. You can enter 1, 2, 3, or 4 for choosing an addition, subtraction, 
multiplication, or division test. After a test is finished, the menu is 
redisplayed. You may choose another test or enter 5 to exit the system. Each 
test generates two random singledigit numbers to form a question for addition, 
subtraction, multiplication, or division.
For a subtraction such as number1 – number2, number1 is greater than
or equal to number2. For a division question such as number1 / number2,
number2 is not zero.
 */

/* 
 * File:   Exercise55_05.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on October 11, 2018, 12:20 AM
 */

#include <iostream> // For the cin & cout functions
#include <cstdlib>  // For rand() and srand()
#include <ctime>  // For time functions

using namespace std;

int main() {
    int input;
    int number1;
    int number2;
    double result;
    srand(time(0));
    do {
        cout << "\n\nMain menu\n1: Addition\n2: Subtraction\n3: "
                "Multiplication\n4: Division\n5: Exit\nEnter a choice: ";
        cin >> input;
        
        switch(input) {
            case 1: number1 = rand() % 10;
                    number2 = rand() % 10;
                    cout << "What is " << number1 << " + " << number2 << "? ";
                    cin >> result;
                    if(number1 + number2 == result)
                        cout << "Correct";
                    else 
                        cout << "Your answer is wrong. The correct answer is " 
                                << (number1 + number2);
                    break;
                    
            case 2: number1 = rand() % 10;
                    do{
                        number2 = rand() % 10;
                    }while(number2 > number1);
                    cout << "What is " << number1 << " - " << number2 << "? ";
                    cin >> result;
                    if(number1 - number2 == result)
                        cout << "Correct";
                    else 
                        cout << "Your answer is wrong. The correct answer is " 
                                << (number1 - number2);
                    break;
                    
            case 3: number1 = rand() % 10;
                    number2 = rand() % 10;
                    cout << "What is " << number1 << " * " << number2 << "? ";
                    cin >> result;
                    if(number1 * number2 == result)
                        cout << "Correct";
                    else 
                        cout << "Your answer is wrong. The correct answer is " 
                                << (number1 * number2);
                    break;
                    
             case 4: number1 = rand() % 10;
                    do{
                        number2 = rand() % 10;
                    }while(number2 == 0);
                    cout << "What is " << number1 << " / " << number2 << "? ";
                    cin >> result;
                   if(number1 / (double)number2 == result)
                        cout << "Correct";
                    else 
                        cout << "Your answer is wrong. The correct answer is " 
                                << (number1 / (double)number2);
        }
    } while(input != 5);

    return 0;
}

