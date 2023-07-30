#include <iostream>

std::string x;
int n, output;

int main() {
    std::cin >> n;

    for (int i = 0; i < n; i++) {
        std::cin >> x;

        if (x == "X++" || x == "++X")
            output++;
        else if (x == "X--" || x == "--X")
            output--;
    }

    std::cout << output << std::endl;
}
