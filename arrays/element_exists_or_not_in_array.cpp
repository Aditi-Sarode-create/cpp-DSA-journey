#include <iostream>
using namespace std;

bool elementexists(int arr[], int sz, int target) {
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            return true;
        }
    }
    return false;
}

int main() {
    int arr[] = {1, 2, 3, 0, 9, 8, 0, 7, 0, 0};
    int sz = 10;
    int target = 24;

    if (elementexists(arr, sz, target)) {
        cout << "The element exists in the given array" << endl;
    } else {
        cout << "The element does not exist in the given array" << endl;
    }

    return 0;
}
