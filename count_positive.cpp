#include<iostream>
using namespace std;
int main(){
    int arr[] = {-3, 5, -1, 8, 0, 2, -7};
    int positive = 0;
for (int i = 0; i<7; i++) {
    if (arr[i] > 0)
    {
        positive += 1;
    }  
}cout<<positive;
return 0;
}
