#include <iostream>
using namespace std;

int main() {
    int arr[10];
    int n, element, i;
    bool found = false;

    cout << "Enter the number of elements in your array: ";
    cin >> n;

    for (i = 0; i < n; i++) {
        cout << "Enter " << i + 1 << "th element: ";
        cin >> arr[i];
    }

    cout << "Enter the element you want to find in the array: ";
    cin >> element;

    for (i = 0; i < n; i++) {
        if (arr[i] == element) {
            found = true;
            break;
        }
    }

    if (found) {
        cout << "Element found in "<<i+1<<"th positon" << endl;
    } else {
        cout << "Element not found" << endl;
    }


    return 0;
}
