#include <iostream>
using namespace std;

const int N = 6;

int find(int arr[], int N)
{
  for(int i=0; i<N; i++){
    int diff = arr[i+1] - arr[i];

    if(arr[i+1] - arr[i] != diff){
      int result = arr[i] + diff;
    }
//   if(diff!=temp){
//     int result = arr[i] - diff;
//     cout<<result;
//  }
    }
  }
  
int main()
{
    int arr[N] = {2, 4, 6, 8, 10, 14};

    cout << "Original array: ";
    for (int i = 0; i < N; i++){
     cout << arr[i] << " ";
    }
    cout << endl;

    int result = find(arr, N);

    cout<<"missing value is: "<<result;

    return 0;76'90027
    
}
