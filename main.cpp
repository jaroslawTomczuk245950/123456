#include <iostream>

int Policz(int a, int b) {
    return a-b;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    std::cout << "Wynik odejmowania:" << Policz(10, 12) << std::endl;
    std::cout << "Koniec programu!" << std::endl;
    return 0;
}
