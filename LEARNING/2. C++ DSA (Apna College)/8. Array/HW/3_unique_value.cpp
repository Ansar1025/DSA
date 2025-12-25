#include<iostream>
using namespace std;

void print_unique_value(int arr[], int size) {
    for (int i = 0; i < size; i++) {
        bool isUnique = true;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                isUnique = false;
                break;
            }
        }
        if (isUnique) {
            cout << arr[i] << " ";
        }
    }
}

int main() {
    int arr[] = {10, 20, 94, 3, 20, 2, 9};
    int size = sizeof(arr) / sizeof(arr[0]);

    cout << "Original Value: ";
    for (int i = 0; i < size; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Unique Values: ";
    print_unique_value(arr, size);
    cout << endl;

    return 0;
}
