#include<iostream>
using namespace std;
int main(){
    int arr[] = {1, 2, 3, 4, 5};
    int rev[5];
for (int i = 4; i>=0; i--) {
     rev[4-(i)] = arr[i];
     
}
for (int j = 0; j <= 4; j++)
{
   cout<<rev[j]<<" ";
}
return 0;
}