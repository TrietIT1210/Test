#include <iostream>
using namespace std;

// Hàm kiểm tra xem một số có phải là số nguyên tố hay không
bool isPrime(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

// Hàm sắp xếp mảng bằng bubble sort
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int n;
    cout << "Nhap kich thuoc mang: ";
    cin >> n;

    int arr[n];
    cout << "Nhap cac phan tu cua mang: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    // Sắp xếp mảng bằng bubble sort
    bubbleSort(arr, n);

    cout << "Cac so nguyen to trong mang la: ";
    for (int i = 0; i < n; i++) {
        if (isPrime(arr[i])) {
            cout << arr[i] << " ";
        }
    }
    cout << endl;

    return 0;
}
