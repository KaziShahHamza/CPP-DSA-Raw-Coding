#include <iostream>
using namespace std;

int main() {
    int n = 18;
    
    // 1. Convert boundaries to floats so decimals aren't accidentally cut off
    float j = 0;         // Lower boundary
    float m = n;         // Upper boundary
    float sqr = 0;       // Holds our final answer
    
    // 2. Loop until the search window is microscopically small (precision)
    while ((m - j) > 0.0001) { 
        
        // Find the absolute midpoint of the current search window
        float mid = j + (m - j) / 2; 
        float chk = mid * mid;
        
        if (chk > n) {
            m = mid;     // If too high, bring the upper roof down to mid
        } else if (chk < n) {
            j = mid;     // If too low, bring the lower floor up to mid
        } else {
            sqr = mid;   // Perfect match found
            break;
        }
        
        sqr = mid;       // Store the closest estimate
    }

    cout << "Square Root: " << sqr << endl;
    return 0;
}
