#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    stack<char> text;
    stack<char> redo;

    while (n--) {
        string op;
        cin >> op;

        if (op == "TYPE") {
            char x;
            cin >> x;
            text.push(x);
            while (!redo.empty()) redo.pop();
        }
        else if (op == "UNDO") {
            if (!text.empty()) {
                redo.push(text.top());
                text.pop();
            }
        }
        else if (op == "REDO") {
            if (!redo.empty()) {
                text.push(redo.top());
                redo.pop();
            }
        }
    }

    string result;
    while (!text.empty()) {
        result.push_back(text.top());
        text.pop();
    }
    reverse(result.begin(), result.end());

    cout << result << "\n";
    return 0;
}
