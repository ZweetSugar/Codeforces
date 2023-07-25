#include <iostream>
#include <string>
using namespace std;

int main() {
    int n;

    cin >> n;

    string arr[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (const auto &word : arr) {
        if (word.size() > 10)
            cout << word[0] + to_string(word.size() - 2) + word[word.size() - 1]
                 << endl;
        else
            cout << word << endl;
    }
}
