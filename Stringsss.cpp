#include <iostream>
#include <cstring>

using namespace std;

int main(){

   char n1[] = "Hello";
   char n2[] = "World";
   
// STRING FUNCTIONS

   int result = strcmp(n1, n2);

   if(result == 0)
   cout<<"String is equal.";
   else
   cout<<"String is not equal"<<endl;

   cout<<strcmp(n1, n2)<<endl;
   cout<<strncmp(n1, n2, 4)<<endl;

  // cout<<strcat(n1, n2)<<endl;
   cout<<strncat(n1, n2, 2);

}

