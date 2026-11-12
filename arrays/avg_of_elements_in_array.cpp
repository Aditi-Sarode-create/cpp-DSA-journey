#include <iostream>
using namespace std;

int main() {
    int arr[] = {3, 3, 3, 3, 3};
    int sz = 5;
    int sum = 0;

    for (int i = 0; i < sz; i++) {
        sum = sum + arr[i];
    }

    double average;
    average = (double)sum / sz;

    cout << "The average of the elements in the array is: " << average << endl;

    return 0;
}
