#include<iostream>
#include<string>
#include<vector>

using namespace std;

// 乘法，高精度
string multiply(string num1, int num2) {
    int carry = 0;
    string result = "";
    for (int i = num1.size() - 1; i >= 0; i--) {
        int product = (num1[i] - '0') * num2 + carry;
        result = char(product % 10 + '0') + result;
        carry = product / 10;
    }
    while (carry) {
        result = char(carry % 10 + '0') + result;
        carry /= 10;
    }
    return result;
}

// 加法，高精度
string add(string num1, string num2) {
    string result = "";
    int carry = 0;
    while (num1.length() < num2.length()) num1 = "0" + num1;
    while (num2.length() < num1.length()) num2 = "0" + num2;
    for (int i = num1.size() - 1; i >= 0; i--) {
        int sum = (num1[i] - '0') + (num2[i] - '0') + carry;
        result = char(sum % 10 + '0') + result;
        carry = sum / 10;
    }
    if (carry) result = "1" + result;
    return result;
}

int main(){
    int n;
    cin >> n;
    string sum = "0", product = "1";
    for(int i = 1; i <= n; i++){
        product = multiply(product, i);
        sum = add(sum, product);
    }
    cout << sum << endl;
    return 0;
}
