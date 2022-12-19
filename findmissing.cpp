#include <iostream>
using namespace std;

const int N = 6;

int find(int arr[], int N)
{
  
  for(int i=arr[1]; i<N; i++){
    int sum1 = arr[1] + (arr[1]+1);
  

  for(int j=arr[1]; j<N+1; j++){
    int sum2 = arr[1] + (arr[1]+1);
  

  if(sum1 != sum2){
   int result = sum2 - sum1;
   cout<<result;
  }
  } 
  }
}
int main()
{
    int arr[N] = {1, 2, 3, 4, 5, 7};

    cout << "Original array: ";
    for (int i = 0; i < N; i++){
     cout << arr[i] << " ";
    }
    cout << endl;

    int result = find(arr, N);

    cout<<"missing value is: "<<result;

    return 0;
}
