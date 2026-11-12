#include <iostream>
using namespace std;

int countzeros(int arr[], int sz) {
    int count = 0;

    for (int i = 0; i < sz; i++) {
        if (arr[i] == 0) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 0, 0, 8, 7, 9, 0, 0};
    int sz = 10;

    cout << "The total number of zeros in the given array is: " << countzeros(arr, sz) << endl;

    return 0;
}
