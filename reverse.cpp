 #include <iostream>
        using namespace std;

        int reverse(int x) {
    int result = 0;
    while (x != 0) {
        int pop = x % 10;
        x /= 10;
        if (result > 214748364 || (result == 214748364
&& pop > 7)) {
            return 0; // Overflow
        }
        result = result * 10 + pop;
    }
    return result;
}

int main() {
    int x;
    cout << "Enter a number: ";
    cin >> x;
    cout << "Reversed number: " << reverse(x) << endl;
    return 0;
}