#include <iostream>
using namespace std;

void reversearray(int arr[], int sz) {
    int start = 0;
    int end = sz - 1;

    while (start < end) {
        swap(arr[start], arr[end]);
        start++;
        end--;
    }
}

int main() {
    int arr[] = {10, 20, 30, 40, 50, 60};
    int sz = 6;

    reversearray(arr, sz);

    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }

    cout << endl;
    return 0;
}
