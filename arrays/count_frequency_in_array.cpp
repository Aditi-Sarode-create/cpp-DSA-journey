#include <iostream>
using namespace std;

int countfrequency(int arr[], int sz, int target) {
    int count = 0;
    for (int i = 0; i < sz; i++) {
        if (arr[i] == target) {
            count++;
        }
    }
    return count;
}

int main() {
    int arr[] = {1, 2, 3, 2, 3, 4, 3, 4, 5, 5};
    int sz = 10;
    int target = 5;

    cout << "The frequency of the targeted element is: " << countfrequency(arr, sz, target) << endl;

    return 0;
}
