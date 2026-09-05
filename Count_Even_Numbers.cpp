#include<iostream>
using namespace std;
int main(){
    int arr[] = {7, 2, 9, 4, 1, 6};
    int evenNum = 0;
for (int i = 0; i<6; i++) {
    if (arr[i] % 2 == 0)
    {
        evenNum += 1;
    }  
}cout<<evenNum;
return 0;
}

