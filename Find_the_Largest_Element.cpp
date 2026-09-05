#include<iostream>
using namespace std;
int main(){
    int arr[] = {7, 2, 9, 4, 1};
    int maxNum = arr[0];
for (int i = 0; i<5; i++) {
    if (arr[i]>maxNum)
    {
        maxNum = arr [i];
    }
}cout<<"Maximum number: "<<maxNum;
return 0;
}

