/*
 *3.29 (Geometry: point position) Given a directed line from point p0(x0, y0) to 
      p1(x1, y1), you can use the following condition to decide whether a point p2(x2, 
      y2) is on the left of the line, on the right, or on the same line:
                                           
                                              (> 0) p2 is on the left side of the line
(x1 - x0)*(y2 - y0) - (x2 - x0)*(y1 - y0)===  (= 0) p2 is on the same line
                                              (< 0) p2 is on the right side of the line
 */

/* 
 * File:   Exercise29_03.cpp
 * Author: BASSAM FARAMAWI / tiodaronzi3@yahoo.com
 *
 * Created on August 22, 2018, 2:30 AM
 */

#include <iostream> // For cin & cout functions

using namespace std;

int main() {
    // Asking to enter three points for p0, p1, and p2
    cout << "Enter three points for p0, p1, and p2: ";
    double x0, y0, x1, y1, x2, y2;
    
    cin >> x0 >> y0 >> x1 >> y1 >> x2 >> y2;  // Receive values
    
    // Calculate the position
    double position = (x1 - x0) * (y2 - y0) - (x2 - x0) * (y1 - y0);
            
    // If position value > 0 the point is  on the left side
    if(position > 0) 
        cout << "(" << x2 << ", " << y2 << ") is on the left side of the line";
    
    // If position value = 0 the point is on the same line
    else if(position == 0)
        cout << "(" << x2 << ", " << y2 << ") is on the same line";
    
    // If position value , 0 the point is  on the right side
    else
        cout << "(" << x2 << ", " << y2 << ") is on the right side of the line";

    return 0;
}

