#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int x;
    std::cin >> x;
    if (x != 0)
        std::cout << 10 / x;
    return 0;
}
