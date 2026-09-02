#include<iostream>
using namespace std;
int main(){
    int sum=0;
    int arr[] = {5, 10, 15, 20, 25};
    for (int i = 0; i < 5; i++)
    {
        sum += arr[i];
    }
    cout<<"Sum of array: "<<sum;
    return 0;
}