#include<iostream>
using namespace std;

void increasingOrder(int num) {
    if(num <= 0){
        return ;
    }

    // This prints the 'num' after reaching the base condition (>=0). That's why printing is done from 1 ... num
    increasingOrder(num-1);
    cout << num << " ";
}

void decreasingOrder(int num){
    if(num <= 0){
        return ;
    }

    // This prints the 'num' before reaching the base case (>=0). That's why printing is done from num ... 1
    cout << num << " ";
    decreasingOrder(num-1);
}

int main() {
    int n=5;
    cout << "Increasing Order: " << endl;
    increasingOrder(n);
    cout << endl;

    cout << "Decreasing Order: " << endl;
    decreasingOrder(n);
}