#include <iostream>
using namespace std;

void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = 0; j < n-i-1; j++) {
            if (arr[j] > arr[j+1]) {
            	
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }
        }
    }
}

int main() {
    int panjang_array;

    cout << "Masukkan panjang array: ";
    cin >> panjang_array;

    int arr[panjang_array];
    cout << "Masukkan elemen-elemen array: ";
    for (int i = 0; i < panjang_array; i++) {
        cin >> arr[i];
    }

    cout << "\nArray sebelum diurutkan: ";
    for (int i = 0; i < panjang_array; i++) {
        cout << arr[i] << " ";
    }

    bubbleSort(arr, panjang_array);


    cout << "\nArray setelah diurutkan: ";
    for (int i = 0; i < panjang_array; i++) {
        cout << arr[i] << " ";
    }

    return 0;
}

