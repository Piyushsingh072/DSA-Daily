#include<iostream>
using namespace std;
int main(){
    int arr[] = {7, 2, 9, 4, 1};
    int minNum = arr[0];
for (int i = 0; i<5; i++) {
    if (arr[i]<minNum)
    {
        minNum = arr [i];
    }
}cout<<"Minimum number: "<<minNum;
return 0;
}
