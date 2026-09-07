#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 20, 30, 40, 50, 60};
    int n = 6;
for (int i = 0; i<n/2; i++) {
    int temp = arr[i];
    arr[i] = arr[n-1-i];
    arr[n-1-i] = temp;
}
for (int i = 0; i < n; i++)
{
   cout<<arr[i]<<" ";
}

return 0;
}