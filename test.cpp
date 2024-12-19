#include <iostream>
#include <cassert>

// Функция, которая выполняет тест
void runTests() {
    // Тест 1
    {
        int expected = 2;
        int actual = 1 + 1;
        assert(expected == actual); // Проверка, что 1 == 1
    }

    // Тест 2
    {
        int expected = 9;
        int actual = 3 * 3;
        assert(expected == actual); // Проверка, что 9 == 9
    }

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    runTests();
    return 0;
}
