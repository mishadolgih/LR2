#include <iostream>
#include <cassert>

// �������, ������� ��������� ����
void runTests() {
    // ���� 1
    {
        int expected = 2;
        int actual = 1 + 1;
        assert(expected == actual); // ��������, ��� 1 == 1
    }

    // ���� 2
    {
        int expected = 9;
        int actual = 3 * 3;
        assert(expected == actual); // ��������, ��� 9 == 9
    }

    std::cout << "All tests passed!" << std::endl;
}

int main() {
    runTests();
    return 0;
}
