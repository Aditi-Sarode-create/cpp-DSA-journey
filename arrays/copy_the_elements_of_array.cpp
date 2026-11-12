#include <iostream>
using namespace std;

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz = 6;

    int copy[6];

    cout << "Original array elements:" << endl;
    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    for (int i = 0; i < sz; i++) {
        copy[i] = arr[i];
    }

    cout << "Copied array elements:" << endl;
    for (int i = 0; i < sz; i++) {
        cout << copy[i] << " ";
    }
    cout << endl;

    return 0;
}
