#include <iostream>
using namespace std;

const int N = 5;

void reverse(int *arr, int n)
{
    int *start = arr, *end = arr + n - 1;

    while (start < end) {
    swap(*start, *end);
    start++;
    end--;
    }
}
int main()
{
    int arr[N] = {1, 2, 3, 4, 5};

    cout << "Original array: ";
    for (int i = 0; i < N; i++){
     cout << arr[i] << " ";
    }
    cout << endl;

    reverse(arr, N);

    cout << "Reversed array: ";
    for (int i = 0; i < N; i++){
     cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
