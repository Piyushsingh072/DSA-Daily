#include<iostream>
using namespace std;
int main(){
int arr[] = {7, 2, 9, 4, 1};
int target = 4;
bool found = false;
for ( int i = 0; i < 5; i++)
{
    if (arr[i]==target)
    {
        found = true;
    }
}
    if(found){
    cout<<"found";
}else{
    cout<<"Not found";
}
return 0;
}