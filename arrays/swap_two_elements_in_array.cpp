#include <iostream>
using namespace std;

void swaptwoelements(int arr[], int a, int b) {
    int temp;
    temp = arr[a];
    arr[a] = arr[b];
    arr[b] = temp;
}

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6};
    int sz = 6;

    swaptwoelements(arr, 1, 2);

    for (int i = 0; i < sz; i++) {
        cout << arr[i] << " " << endl;
    }

    return 0;
}
