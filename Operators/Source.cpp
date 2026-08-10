#include <iostream>
#include <iomanip>
#include <cstdint>

int main()
{
    // ============================================================
    //              C / C++ OPERATORS
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "                  C / C++ OPERATORS\n";
    std::cout << "============================================================\n\n";


    // ============================================================
    // 1. ARITHMETIC OPERATORS
    // ============================================================

    std::cout << "1. ARITHMETIC OPERATORS\n";
    std::cout << "------------------------------------------------------------\n";

    int a = 10;
    int b = 3;

    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n\n";

    std::cout << "a + b = " << a + b << "    // Addition\n";
    std::cout << "a - b = " << a - b << "    // Subtraction\n";
    std::cout << "a * b = " << a * b << "    // Multiplication\n";
    std::cout << "a / b = " << a / b << "    // Integer division\n";
    std::cout << "a % b = " << a % b << "    // Remainder\n";

    std::cout << "\nImportant:\n";
    std::cout << "10 / 3 = " << 10 / 3
        << " because both values are integers.\n";

    std::cout << "10.0 / 3.0 = "
        << 10.0 / 3.0
        << " because they are floating-point values.\n\n";


    // ============================================================
    // 2. ASSIGNMENT OPERATORS
    // ============================================================

    std::cout << "2. ASSIGNMENT OPERATORS\n";
    std::cout << "------------------------------------------------------------\n";

    int x = 10;

    std::cout << "Initial x = " << x << "\n";

    x += 5;
    std::cout << "x += 5  -> " << x << "\n";

    x -= 3;
    std::cout << "x -= 3  -> " << x << "\n";

    x *= 2;
    std::cout << "x *= 2  -> " << x << "\n";

    x /= 4;
    std::cout << "x /= 4  -> " << x << "\n";

    x %= 3;
    std::cout << "x %= 3  -> " << x << "\n\n";


    // ============================================================
    // 3. COMPARISON / RELATIONAL OPERATORS
    // ============================================================

    std::cout << "3. COMPARISON OPERATORS\n";
    std::cout << "------------------------------------------------------------\n";

    int c = 10;
    int d = 20;

    std::cout << std::boolalpha;

    std::cout << "c = " << c << "\n";
    std::cout << "d = " << d << "\n\n";

    std::cout << "c == d : " << (c == d)
        << "    // Equal\n";

    std::cout << "c != d : " << (c != d)
        << "    // Not equal\n";

    std::cout << "c > d  : " << (c > d)
        << "    // Greater than\n";

    std::cout << "c < d  : " << (c < d)
        << "    // Less than\n";

    std::cout << "c >= d : " << (c >= d)
        << "    // Greater than or equal\n";

    std::cout << "c <= d : " << (c <= d)
        << "    // Less than or equal\n\n";


    // ============================================================
    // 4. LOGICAL OPERATORS
    // ============================================================

    std::cout << "4. LOGICAL OPERATORS\n";
    std::cout << "------------------------------------------------------------\n";

    bool doorOpen = true;
    bool keyValid = true;
    bool alarmOn = false;

    std::cout << "doorOpen = " << doorOpen << "\n";
    std::cout << "keyValid = " << keyValid << "\n";
    std::cout << "alarmOn  = " << alarmOn << "\n\n";

    std::cout << "doorOpen && keyValid = "
        << (doorOpen && keyValid)
        << "    // AND\n";

    std::cout << "doorOpen || alarmOn = "
        << (doorOpen || alarmOn)
        << "    // OR\n";

    std::cout << "!doorOpen = "
        << (!doorOpen)
        << "    // NOT\n\n";


    // ============================================================
    // 5. INCREMENT / DECREMENT
    // ============================================================

    std::cout << "5. INCREMENT / DECREMENT\n";
    std::cout << "------------------------------------------------------------\n";

    int count = 5;

    std::cout << "Initial count = " << count << "\n";

    count++;
    std::cout << "count++ = " << count
        << "    // Increment by 1\n";

    count--;
    std::cout << "count-- = " << count
        << "    // Decrement by 1\n";

    ++count;
    std::cout << "++count = " << count
        << "    // Prefix increment\n";

    --count;
    std::cout << "--count = " << count
        << "    // Prefix decrement\n\n";

    std::cout << "\033[34m";
    // ============================================================
    // 6. BITWISE OPERATORS
    // ============================================================

    std::cout << "6. BITWISE OPERATORS\n";
    std::cout << "------------------------------------------------------------\n";

    uint8_t p = 12;
    uint8_t q = 10;

    std::cout << "p = " << static_cast<int>(p)
        << "  -> binary: 00001100\n";

    std::cout << "q = " << static_cast<int>(q)
        << "  -> binary: 00001010\n\n";

    std::cout << "p & q = "
        << static_cast<int>(p & q)
        << "    // Bitwise AND\n";

    std::cout << "p | q = "
        << static_cast<int>(p | q)
        << "    // Bitwise OR\n";

    std::cout << "p ^ q = "
        << static_cast<int>(p ^ q)
        << "    // Bitwise XOR\n";

    std::cout << "~p = "
        << static_cast<int>(static_cast<uint8_t>(~p))
        << "    // Bitwise NOT\n";

    std::cout << "p << 1 = "
        << static_cast<int>(p << 1)
        << "    // Left shift\n";

    std::cout << "p >> 1 = "
        << static_cast<int>(p >> 1)
        << "    // Right shift\n\n";
    std::cout << "\033[0m";


    // ============================================================
    // 7. CONDITIONAL / TERNARY OPERATOR
    // ============================================================

    std::cout << "7. CONDITIONAL / TERNARY OPERATOR\n";
    std::cout << "------------------------------------------------------------\n";

    int temperature = 30;

    std::string status =
        (temperature > 25)
        ? "HOT"
        : "NORMAL";

    std::cout << "Temperature = "
        << temperature
        << " C\n";

    std::cout << "Status = "
        << status
        << "\n\n";

    std::cout << "Syntax:\n";
    std::cout << "condition ? value_if_true : value_if_false\n\n";

    std::cout << "\033[34m";
    // ============================================================
    // 8. sizeof OPERATOR
    // ============================================================

    std::cout << "8. sizeof OPERATOR\n";
    std::cout << "------------------------------------------------------------\n";

    int number = 100;
    double decimal = 3.14;
    char letter = 'A';

    std::cout << "sizeof(int)    = "
        << sizeof(number)
        << " byte(s)\n";

    std::cout << "sizeof(double) = "
        << sizeof(decimal)
        << " byte(s)\n";

    std::cout << "sizeof(char)   = "
        << sizeof(letter)
        << " byte(s)\n\n";

    // ============================================================
    // 9. POINTER OPERATORS
    // ============================================================

    std::cout << "9. POINTER OPERATORS\n";
    std::cout << "------------------------------------------------------------\n";

    int value = 100;

    int* ptr = &value;

    std::cout << "value = "
        << value << "\n";

    std::cout << "&value = "
        << &value
        << "    // Address-of operator\n";

    std::cout << "ptr = "
        << ptr
        << "    // Pointer stores address\n";

    std::cout << "*ptr = "
        << *ptr
        << "    // Dereference operator\n\n";
    std::cout << "\033[0m";

    // ============================================================
    // 10. SCOPE RESOLUTION OPERATOR
    // ============================================================

    std::cout << "10. SCOPE RESOLUTION OPERATOR\n";
    std::cout << "------------------------------------------------------------\n";

    std::cout << "std::cout\n";
    std::cout << "   ^\n";
    std::cout << "   |\n";
    std::cout << "   +--- :: is the scope resolution operator\n\n";

    std::cout << "std::cout means:\n";
    std::cout << "Use 'cout' from the 'std' namespace.\n\n";


    // ============================================================
    // 11. TYPE CASTING
    // ============================================================

    std::cout << "11. TYPE CASTING\n";
    std::cout << "------------------------------------------------------------\n";

    double price = 99.99;

    int integerPrice =
        static_cast<int>(price);

    std::cout << "double price = "
        << price << "\n";

    std::cout << "int price = "
        << integerPrice
        << "\n";

    std::cout << "static_cast<int>(99.99) = "
        << static_cast<int>(99.99)
        << "\n\n";


    // ============================================================
    // 12. OPERATOR PRECEDENCE
    // ============================================================

    std::cout << "12. OPERATOR PRECEDENCE\n";
    std::cout << "------------------------------------------------------------\n";

    int result1 = 10 + 5 * 2;
    int result2 = (10 + 5) * 2;

    std::cout << "10 + 5 * 2 = "
        << result1 << "\n";

    std::cout << "(10 + 5) * 2 = "
        << result2 << "\n\n";

    std::cout << "Multiplication happens before addition.\n";
    std::cout << "Parentheses can change the order.\n\n";


    // ============================================================
    // SUMMARY
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "                    OPERATOR SUMMARY\n";
    std::cout << "============================================================\n\n";

    std::cout << "Arithmetic:\n";
    std::cout << "  +   -   *   /   %\n\n";

    std::cout << "Assignment:\n";
    std::cout << "  =   +=   -=   *=   /=   %=\n\n";

    std::cout << "Comparison:\n";
    std::cout << "  ==   !=   >   <   >=   <=\n\n";

    std::cout << "Logical:\n";
    std::cout << "  &&   ||   !\n\n";

    std::cout << "Increment / Decrement:\n";
    std::cout << "  ++   --\n\n";

    std::cout << "Bitwise:\n";
    std::cout << "  &   |   ^   ~   <<   >>\n\n";

    std::cout << "Other important operators:\n";
    std::cout << "  ?:       Ternary\n";
    std::cout << "  sizeof   Size of object/type\n";
    std::cout << "  &        Address-of\n";
    std::cout << "  *        Dereference\n";
    std::cout << "  ::       Scope resolution\n";
    std::cout << "  static_cast<>   Type conversion\n\n";

    std::cout << "============================================================\n";

    return 0;
}
