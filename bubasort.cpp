#include<bits/stdc++.h>
using namespace std;

int main(){

    char arr[][10] = {"Rahul", "Aakash", "Bhavneet", "Chirag", "Akshay", "Meena", "Lokesh", "Zisha"};
    char temp[10];

    int n = sizeof(arr)/sizeof(arr[0]);
    
for (int i=0; i<n-1; i++)
    {
        for (int j=0; j<n-1; j++)
        {
            if (strcmp(arr[j], arr[j+1]) > 0)
            {
                strcpy(temp, arr[j]);
                strcpy(arr[j], arr[j+1]);
                strcpy(arr[j+1], temp);
            }
        }
    }
    for(int i = 0; i < n; i++){
        cout<<arr[i]<<" ";
    }
}
