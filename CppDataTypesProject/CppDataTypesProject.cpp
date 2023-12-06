#include <iostream>
#include <cstdint>

int main()
{
    int n1 = -123;
    std::cout << "int: " << sizeof(int) << "\n";

    unsigned int n2 = 4056;
    std::cout << "uint: " << sizeof(unsigned int) << "\n";

    short sh1 = 1235;
    std::cout << "short: " << sizeof(short) << "\n";

    long long l1 = 8976547L;
    std::cout << "long long: " << sizeof(long long) << "\n";

    n1 = 0b01110;
    n1 = 0xFF;
    
    //setlocale(LC_ALL, "Russian");

    n1 = 2028;
    char ch;
    ch = n1;
    std::cout << ch << "\n";


    std::cout << "char: " << sizeof(char) << "\n";

    signed char ch2;

    ch = 'A';
    std::cout << ch << '\n';

    int a = -123;
    bool f = a;
    
    //f = false;
    std::cout << std::boolalpha << f << "\n";

    std::cout << "bool: " << sizeof(bool) << "\n\n";

    /*wchar_t wch1;
    std::cout << "wchar: " << sizeof(wchar_t) << "\n";*/

    float x{ 15.7F };
    std::cout << "float: " << sizeof(float) << "\n";

    double y;

    y = 123.989;
    y = 567.2321e2;

    std::cout << "double: " << sizeof(double) << "\n";

    const double PI{ 3.14 };
    const int SIZE{ 50 };
    
    int c{ 10 };
    int b{ 3 };

    std::cout << c / (double)b << "\n";

    int k{ -20 };

    if (k > 0)
    {
        std::cout << "positive\n";
        k = k * 2;
    }
    else
        std::cout << "negative\n";
}
