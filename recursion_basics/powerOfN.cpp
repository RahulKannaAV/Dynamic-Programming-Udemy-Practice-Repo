#include<iostream>
using namespace std;

// a^n = a * a^n-1
// a^n-1 is the subproblem

int powerOfN(int base, int power) {
    if(power <= 0) {
        return 1;
    }

    int result = base * powerOfN(base, power-1);
    return result;
}

int main() {
    int base = 2;
    int power = 10;

    cout << powerOfN(base, power) << endl;
}