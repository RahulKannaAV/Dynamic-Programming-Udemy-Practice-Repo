#include<iostream>
using namespace std;

int fact(int num) {
    // Base Case
    if(num == 0) {
        return 1;
    }

    // Recursive case: N * (N-1)!
    int result = num * fact(num-1);
    return result;
}

int main() {
    int n = 4;
    cout << "Factorial of "<< n << " : " << fact(n) << endl;

    return 0;
}