#include <iostream>
#include <vector>

using namespace std;

int n, k, *arr, output = 0;

int main() {
    cin >> n >> k;

    arr = new int[n];

    for (int i = 0; i < n; i++) cin >> arr[i];

    for (int i = 0; i < n; i++) {
        if (arr[i] >= 1 && arr[i] >= arr[k - 1]) output++;
    }

    cout << output << endl;
}
