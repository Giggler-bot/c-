#include <iostream>
#include <cmath>
#include <iomanip>

using namespace std;

#define PI 3.14159265358979323846
#define START 0.0
#define END (2.0 * PI)
#define STEP (PI / 8.0)
#define HEADER (cout << \
    " *******  Sine Function Table *******\n\n")

int main() {
    HEADER;

    cout << setw(16) << "X" << setw(20) << "sin(x)\n"
            << "---------------------------------------\n"
            << fixed << setprecision(4);
    
    
    double x;
    for (x = START; x < END + STEP/2; x += STEP) 
        cout << setw(20) << x << setw(16) << sin(x);
        cout << endl << endl;

    
    return 0;
}
