#include <iostream>
#include <cmath>
using namespace std;

bool isPrime(int n) {
    if (n <= 1) return false;
    if (n <= 3) return true;
    if (n % 2 == 0 || n % 3 == 0) return false;
    for (int i = 5; i * i <= n; i += 6) {
        if (n % i == 0 || n % (i + 2) == 0) return false;
    }
    return true;
}

void generatePalindromes(int len, int a, int b) {
    int halfLen = (len % 2 == 0) ? len / 2 : (len + 1) / 2;
    int start = (len == 1) ? 2 : pow(10, halfLen - 1);
    int end = pow(10, halfLen);
    for (int i = start; i < end; ++i) {
        string left = to_string(i);
        string palindromeStr = left + string(left.rbegin() + (len % 2), left.rend());
        int palindrome = stoi(palindromeStr);

        if (palindrome >= a && palindrome <= b && isPrime(palindrome)) {
            cout << palindrome << endl;
        }
    }
}

int main() {
    int a, b;
    cin >> a >> b;

    for (int len = 1; len <= 9; ++len) {
        generatePalindromes(len, a, b);
    }

    return 0;
}