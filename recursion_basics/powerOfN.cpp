#include<iostream>
using namespace std;

// a^n = a * a^n-1
// a^n-1 is the subproblem
// Takes O(N) TC & SC
int powerOfN(int base, int power) {
    if(power <= 0) {
        return 1;
    }

    int result = base * powerOfN(base, power-1);
    return result;
}

// Optimized way: a^n = (a^(n/2))^2 if 'n' is even
// a^n = a * (a^(n/2))^2 if 'n' is odd
// only takes log2(power) steps
int optimizedPowerOfN(int base, int power) {
    // Base case
    if(power == 0) {
        return 1;
    }

    int recCase = optimizedPowerOfN(base, power/2);

    // Power Odd Even Recursive Case
    if(power%2 == 0) {
        // a^(n/2) * a^(n/2)
        return recCase * recCase;
    } else {
        // a * a^(n/2) * a^(n/2)
        return base * recCase * recCase;
    }
}

int main() {
    int base = 2;
    int power = 10;

    cout << powerOfN(base, power) << endl;
    cout << "Optimized Way Answer: " << optimizedPowerOfN(base, power) << endl;
    return 0;
}