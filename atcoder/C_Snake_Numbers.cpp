#include <iostream>
#include <string>
using namespace std;

// Function to check if a number is a Snake number
bool isSnakeNumber(long long num) {
    string str = to_string(num);
    char top_digit = str[0]; // Most significant digit
    for (size_t i = 1; i < str.size(); ++i) {
        if (str[i] >= top_digit) {
            return false;
        }
    }
    return true;
}

int main() {
    long long L, R;
    cin >> L >> R;

    long long count = 0;
    for (long long i = L; i <= R; ++i) {
        if (isSnakeNumber(i)) {
            ++count;
        }
    }

    cout << count << endl;
    return 0;
}
