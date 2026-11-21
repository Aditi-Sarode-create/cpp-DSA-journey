#include <iostream>
#include <vector>
using namespace std;

int smallest(vector<int>arr){

     int smallest = arr[0];

    for (int i = 1; i < sz; i++) {
        if (arr[i] < smallest) {
            smallest = arr[i];
        }
    }
    return smallest;
}

int main() {

    vector<int>arr={50,30,60,10}
    
    cout << "The smallest element in the array is: " << smallest(arr) << endl;

    return 0;
}
