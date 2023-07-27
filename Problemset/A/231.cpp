#include <iostream>

using namespace std;

int main() {
    int n, output = 0;

    cin >> n;

    int arr[n][3];

    for (int i = 0; i < n; i++) {
        int count = 0;

        for (int j = 0; j < 3; j++) {
            cin >> arr[i][j];

            count = arr[i][j] == 1 ? count + 1 : count;
        }

        if (count > 1) output++;
    }

    cout << output;
}
