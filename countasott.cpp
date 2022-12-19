#include <iostream>
using namespace std;

int main(){

    int arr[] =  {2, 1, 3, 2, 4, 3, 1, 2};
    int k = 5;
    int n = sizeof(arr)/sizeof(arr[0]);
    
    int count[k+1];
    int output[n + 1];

    for(int i = 0; i<=k; i++){
        count[i] = 0;
    }

    for(int i = 0; i < n; i++){
        count[arr[i]]++;
    }   

    for(int i = 1; i <= k; i++){
        count[i] += count[i-1];
    }

    for(int i = n-1; i >= 0; i--){
        output[count[arr[i]]-1] = arr[i];
        count[arr[i]]--;
    }

    for(int i = 0; i < n; i++){
        arr[i] = output[i];
    }

    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }

}