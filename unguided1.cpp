#include <iostream>
#include <stack>
#include <string>

using namespace std;

bool isPalindrome(string str) {
    stack<char> charStack;
    int length_2311102013 = str.length();
    int i, mid_2311102013 = length_2311102013 / 2;

    for (i = 0; i < mid_2311102013; i++) {
        charStack.push(str[i]);
    }

    for (i = mid_2311102013 + length_2311102013 % 2; i < length_2311102013; i++) {
        if (charStack.top() != str[i]) {
            return false;
        }
        charStack.pop();
    }

    return true;
}

int main() {
    string input_2311102013;
    cout << "Masukan kalimat: ";
    cin >> input_2311102013;

    if (isPalindrome(input_2311102013)) {
        cout << "Kalimat tersebut adalah palindrom";
    } else {
        cout << "Kalimat tersebut bukan palindrom";
    }

    return 0;
}