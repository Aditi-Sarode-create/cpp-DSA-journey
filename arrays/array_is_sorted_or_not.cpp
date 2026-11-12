#include <iostream>
using namespace std;

bool isSorted(int arr[], int sz) {
    for (int i = 0; i < sz - 1; i++) {
        if (arr[i] > arr[i + 1]) {
            return false;
        }
    }
    return true;
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int sz = 5;

    if (isSorted(arr, sz)) {
        cout << "The given array is sorted." << endl;
    } else {
        cout << "The given array is not sorted." << endl;
    }

    return 0;
}
