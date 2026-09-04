#include <iostream>
using namespace std;
int main(){
    int n=5;
    int arr[]= {1,2,3,4,5,6};
for (int i = 0; i < n; i++) {
    for (int j = 0; j < n; j++) {
        cout << arr[i] << arr[j];
    }cout<<endl;
}
return 0;
}

/*Correct. ✅ O(n²)

Your reasoning is now exactly right:

Outer loop → n iterations
For each outer iteration, inner loop → n iterations
Total → n × n = n²

For n = 5:

i = 0 → 5 inner operations
i = 1 → 5
i = 2 → 5
i = 3 → 5
i = 4 → 5

Total = 25 = 5²
🔑 Mental model
Nested loops that both depend on n → multiply them.
n × n → O(n²)  */