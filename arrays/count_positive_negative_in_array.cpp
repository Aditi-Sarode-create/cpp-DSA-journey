#include <iostream>
using namespace std;

void count_positive_negative(int arr[], int sz) {
    int positive = 0;
    int negative = 0;

    for (int i = 0; i < sz; i++) {
        if (arr[i] > 0) {
            positive++;
        } else if (arr[i] < 0) {
            negative++;
        }
    }

    cout << "The count of positive numbers in the given array is: " << positive << endl;
    cout << "The count of negative numbers in the given array is: " << negative << endl;
}

int main() {
    int arr[] = {1, -2, -3, -4, 5};
    int sz = 5;

    count_positive_negative(arr, sz);

    return 0;
}
