#include<iostream>
using namespace std;

int fibo(int n){
    if(n <= 1) { // Base Case: When n is either 0 or 1
        return n;
    }

    // Otherwise, fibonacci term is sum of previous two fibonacci terms
    int prevTerm = fibo(n-1);
    int prevOfPrevTerm = fibo(n-2);

    return prevTerm + prevOfPrevTerm;
}

int main() {
    int num = 10;

    cout << fibo(num) << endl;
    return 0;
}