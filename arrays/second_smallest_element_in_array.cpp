#include <iostream>
#include <climits>
using namespace std;

int main() {
    int arr[] = {22, 33, 44, 55, 66, 77};
    int sz = 6;
    int smallest = INT_MAX;
    int secondsmallest = INT_MAX;

    for (int i = 0; i < sz; i++) {
        if (arr[i] < smallest) {
            secondsmallest = smallest;
            smallest = arr[i];
        } else if (arr[i] < secondsmallest && arr[i] != smallest) {
            secondsmallest = arr[i];
        }
    }

    cout << "The second smallest element in the given array is: " << secondsmallest << endl;

    return 0;
}
