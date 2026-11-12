#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {22, 33, 44, 55, 66, 77};
    int sz = 6;
    int largest = INT_MIN;
    int secondlargest = INT_MIN;

    for (int i = 0; i < sz; i++) {
        if (arr[i] > largest) {
            secondlargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondlargest && arr[i] != largest) {
            secondlargest = arr[i];
        }
    }

    cout << "The second largest element in the given array is: " << secondlargest << endl;

    return 0;
}
