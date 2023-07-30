#include <algorithm>
#include <iostream>

using namespace std;

int output = 0;
string a, b;

int main() {
    cin >> a >> b;

    for (int i = 0; i < a.size(); i++) {
        if (tolower(a[i]) - 'a' > tolower(b[i]) - 'a') {
            output = 1;
            break;
        } else if (tolower(a[i]) - 'a' < tolower(b[i]) - 'a') {
            output = -1;
            break;
        }
    }

    cout << output << endl;

    return 0;
}
