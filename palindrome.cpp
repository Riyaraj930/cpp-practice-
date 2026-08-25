#include <iostream>
using namespace std;

int main() {
    int n, original, reverse = 0, remainder;

    cout << "Enter a number: ";
    cin >> n;

    original = n;

    while (n != 0) {
        remainder = n % 10;
        reverse = reverse * 10 + remainder;
        n = n / 10;
    }

    if (original == reverse)
        cout << original << " is a palindrome.";
    else
        cout << original << " is not a palindrome.";

    return 0;
}
