/*
 **5.44 (Monte Carlo simulation) A square is divided into four smaller regions 
as shown below in (a). If you throw a dart into the square 1,000,000 times, what 
is the probability for a dart to fall into an odd-numbered region? Write a 
program to simulate the process and display the result.
(Hint: Place the center of the square in the center of a coordinate system, as 
shown in (b). Randomly generate a point in the square and count the number of 
times for a point to fall into an odd-numbered region.)
 */

/* 
 * File:   Exercise44_05.cpp
 * Author: Administrator
 *
 * Created on October 9, 2018, 12:08 PM
 */

#include <iostream> // For the cin & cout functions
#include <cstdlib>  // For rand() and srand() functions
#include <ctime>  // For the time function

using namespace std;

int main() {
    
    const double SQUARE_SIDE = 10;  // The square side as a constant
    const int COUNT = 1E6;
    
    srand(time(0));  // Set the rand() seed
    
    int oddRegion = 0,
            evenRegion = 0;
    
    double x, y,  // The point coordinates
            x0 = 5, y0 = 0, x1 = 0, y1 = 5, // Points of line between region 2 and 3
            oddProbability,
            evenProbability;
    
    for(int i = 0; i < COUNT; i++) {
        x = rand() % 11 - 5;
        y = rand() % 11 - 5;
        
        if(x == 0 || y == 0)  // Will not count points that is on x or y axis
            continue;
        
        else if(x < 0) // If point in region 1
            oddRegion++;
        
        else if(y < 0)  // If point in region 4
            evenRegion++;
        
        else if(y > 0) {  // If in region 2 or 3
            if((x1 - x0)*(y - y0) - (x - x0)*(y1 - y0) == 0)
                continue; // Neglect the points on the line between region 2 and 3
            
            else if((x1 - x0)*(y - y0) - (x - x0)*(y1 - y0) > 0)
                oddRegion++;  // On the left side of the line (region 3)
            
            else if((x1 - x0)*(y - y0) - (x - x0)*(y1 - y0) < 0)
                evenRegion++;  // On the right side of the line (region 2)
        }
        
    }
    
    oddProbability = oddRegion / (double) COUNT ;
    evenProbability = evenRegion / (double) COUNT;
    
    // Display the result
    cout << "oddProbability = %" << oddProbability << endl
            << "evenProbability = %" << evenProbability;

    return 0;
}

