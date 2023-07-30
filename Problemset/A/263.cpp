#include <iostream>

using namespace std;

short int arr[5][5], x = 2, y = 2, output = 0;

int main() {
    for (int i = 0; i < 5; i++) {
        for (int j = 0; j < 5; j++) {
            cin >> arr[i][j];

            if (arr[i][j] == 1) {
                output += i > x ? i - x : x - i;
                output += j > y ? j - x : x - j;
            }
        }
    }

    cout << output;
}
