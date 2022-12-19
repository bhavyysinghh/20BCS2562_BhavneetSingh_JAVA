#include <iostream>

using namespace std;

const int N = 5;

void shiftRight(int arr[], int n)
{
    int temp = arr[n - 1];

    for (int i = n - 1; i > 0; i--){
    arr[i] = arr[i - 1];
    }

    arr[0] = temp;
}

int main()
{
    int arr[N] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int i = 0; i < N; i++){
    cout << arr[i] << " ";
    }
    cout << endl;

    shiftRight(arr, N);

    cout << "Shifted array: ";
    for (int i = 0; i < N; i++){
    cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
