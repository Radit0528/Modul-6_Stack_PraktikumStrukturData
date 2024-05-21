#include <iostream>
#include <stack>
#include <string>

using namespace std;

string reverseLetters(const string& sentence_2311102013) {
    stack<char> charStack;

    for (char c : sentence_2311102013) {
        charStack.push(c);
    }

    string reversedSentence;
    while (!charStack.empty()) {
        reversedSentence += charStack.top();
        charStack.pop();
    }

    return reversedSentence;
}

int main() {
    string sentence_2311102013;
    cout << "Masukkan kalimat : ";
    getline(cin, sentence_2311102013);

    string reversed_2311102013 = reverseLetters(sentence_2311102013);
    cout << "Hasil : " << reversed_2311102013 << endl;

    return 0;
}