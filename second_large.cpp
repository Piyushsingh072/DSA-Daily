#include<iostream>
using namespace std;
int main(){
    int arr[] = {10, 5, 20, 8, 15};
    int n = 5;
    int largest=arr[0];
    int secondLargest=arr[1];
for (int i = 0; i<n; i++) {
     int current = arr[i];
    if (current > largest){
        secondLargest = largest;
        largest = arr[i];
    }else if (current > secondLargest)
    {
        secondLargest = current;
    }
}
    cout<<"Largest: "<<largest<<endl;
    cout<<"Second Largest: "<<secondLargest;
return 0;
}