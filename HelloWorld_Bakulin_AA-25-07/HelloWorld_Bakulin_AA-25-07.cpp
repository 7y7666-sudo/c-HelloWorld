
#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
    int x;
    std::cin >> x;
    std::cout << "Result: ";
    if (x != 0) {
        std::cout << 10 / x;
    }
    else {
        std::cout << "X equals 0";
    }
    return 0;
}


//0. Препроцессоры (#)
//1. Компилятор
//2. Компоновщик (linker)
