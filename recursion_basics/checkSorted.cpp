#include<iostream>
using namespace std;

bool checkForSorted(int arr[], int n){
    if(n <= 1) { // Base Case: When the array size becomes one
        return true;
    }

    // checkForSorted(arr+1, n-1) means array's memory pointer 
    // starts from the next element thereby making the size reduced by 1
    if(arr[0] < arr[1] && checkForSorted(arr+1, n-1)){
        return true;
    } 
    return false;
    
}

int main() {
    int arr[7] = {6, 3, 8, 5, 4, 2, 1};
    int sortedArr[5] = {5, 10, 12, 18, 25};

    int size = sizeof(arr)/sizeof(int);
    int sortedSize = sizeof(sortedArr)/sizeof(int);

    cout << checkForSorted(arr, size) << endl; // returns 0
    cout << checkForSorted(sortedArr, sortedSize) << endl; // returns 1
    
    return 0;
}