#include <iostream>
using namespace std;

int firstOccurrence(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[] = {1, 2, 3, 4, 1, 2, 3, 4};
    int sz = 8;
    int target = 3;

    cout << "The first occurrence of the element in the given array is: " << firstOccurrence(arr, sz, target) << endl;

    return 0;
}
