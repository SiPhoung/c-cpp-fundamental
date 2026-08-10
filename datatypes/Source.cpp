#include <iostream>
#include <cstdint>
#include <climits>
#include <cfloat>
#include <iomanip>

// ============================================================
// STRUCT
// ============================================================

struct Sensor
{
    int temperature;
    int humidity;
};

// ============================================================
// ENUM
// ============================================================

enum DoorState
{
    CLOSED,
    OPEN
};

// ============================================================
// CLASS
// ============================================================

class Door
{
public:
    bool isOpen = false;

    void open()
    {
        isOpen = true;
    }
};
void printSize(size_t size)
{
    // Yellow
    std::cout << "\033[33m";

    std::cout << "Size                  : " << size << " byte(s)\n";

    // Reset
    std::cout << "\033[0m";
}

int main()
{
    std::cout << "============================================================\n";
    std::cout << "              C / C++ DATA TYPES\n";
    std::cout << "============================================================\n\n";


    // ============================================================
    // 1. CHAR
    // ============================================================

    char character = 'A';

    std::cout << "1. CHAR\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : char\n";
    printSize(sizeof(character));
    std::cout << "Signed / Unsigned     : implementation-defined\n";
    std::cout << "Value                 : " << character << '\n';
    std::cout << "Range                 : "
        << CHAR_MIN << " to " << CHAR_MAX << '\n';
    std::cout << "Memory representation : "
        << static_cast<int>(character) << " (ASCII value)\n\n";


    // ============================================================
    // 2. INT
    // ============================================================

    int number = 100;

    std::cout << "2. INT\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : int\n";
    printSize(sizeof(number));
    std::cout << "Signed / Unsigned     : signed\n";
    std::cout << "Value                 : " << number << '\n';
    std::cout << "Range                 : "
        << INT_MIN << " to " << INT_MAX << '\n';
    std::cout << "Memory representation : binary integer stored in memory\n\n";


    // ============================================================
    // 3. UNSIGNED INT
    // ============================================================

    unsigned int positiveNumber = 200;

    std::cout << "3. UNSIGNED INT\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : unsigned int\n";
    printSize(sizeof(positiveNumber));
    std::cout << "Signed / Unsigned     : unsigned\n";
    std::cout << "Value                 : " << positiveNumber << '\n';
    std::cout << "Range                 : 0 to " << UINT_MAX << '\n';
    std::cout << "Memory representation : binary integer stored in memory\n\n";


    // ============================================================
    // 4. FLOAT
    // ============================================================

    float temperature = 25.5f;

    std::cout << "4. FLOAT\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : float\n";
    printSize(sizeof(temperature));
    std::cout << "Signed / Unsigned     : signed\n";
    std::cout << "Value                 : " << temperature << '\n';
    std::cout << "Range                 : approximately +/- "
        << FLT_MAX << '\n';
    std::cout << "Memory representation : IEEE 754 floating-point (typical)\n\n";


    // ============================================================
    // 5. DOUBLE
    // ============================================================

    double pi = 3.14159265359;

    std::cout << "5. DOUBLE\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : double\n";
    printSize(sizeof(pi));
    std::cout << "Signed / Unsigned     : signed\n";
    std::cout << "Value                 : " << pi << '\n';
    std::cout << "Range                 : approximately +/- "
        << DBL_MAX << '\n';
    std::cout << "Memory representation : IEEE 754 floating-point (typical)\n\n";


    // ============================================================
    // 6. BOOL
    // ============================================================

    bool doorOpen = true;

    std::cout << "6. BOOL\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : bool\n";
    printSize(sizeof(doorOpen));
    std::cout << "Signed / Unsigned     : neither\n";
    std::cout << "Value                 : "
        << std::boolalpha << doorOpen << '\n';
    std::cout << "Range                 : false / true\n";
    std::cout << "Memory representation : implementation-defined\n\n";


    // ============================================================
    // 7. ARRAY
    // ============================================================

    int temperatures[3] = { 20, 25, 30 };

    std::cout << "7. ARRAY\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : int[3]\n";
    printSize(sizeof(temperatures));
    std::cout << "Signed / Unsigned     : depends on element type\n";
    std::cout << "Value                 : ";

    for (int i = 0; i < 3; i++)
    {
        std::cout << temperatures[i] << " ";
    }

    std::cout << '\n';

    std::cout << "Range                 : depends on element type\n";
    std::cout << "Memory representation : consecutive elements in memory\n\n";


    // ============================================================
    // 8. POINTER
    // ============================================================

    int value = 50;
    int* pointer = &value;

    std::cout << "8. POINTER\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : int*\n";
    printSize(sizeof(pointer));
    std::cout << "Signed / Unsigned     : not applicable\n";
    std::cout << "Value                 : " << pointer << '\n';
    std::cout << "Range                 : depends on address space\n";
    std::cout << "Memory representation : stores a memory address\n\n";


    // ============================================================
    // 9. STRUCT
    // ============================================================

    Sensor sensor;

    sensor.temperature = 25;
    sensor.humidity = 60;

    std::cout << "9. STRUCT\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : Sensor\n";
    printSize(sizeof(sensor));
    std::cout << "Signed / Unsigned     : depends on members\n";
    std::cout << "Value                 : temperature = "
        << sensor.temperature
        << ", humidity = "
        << sensor.humidity << '\n';
    std::cout << "Range                 : depends on members\n";
    std::cout << "Memory representation : members stored inside one object\n\n";


    // ============================================================
    // 10. ENUM
    // ============================================================

    DoorState state = OPEN;

    std::cout << "10. ENUM\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : DoorState\n";
    printSize(sizeof(state));
    std::cout << "Signed / Unsigned     : depends on underlying type\n";

    if (state == OPEN)
    {
        std::cout << "Value                 : OPEN\n";
    }
    else
    {
        std::cout << "Value                 : CLOSED\n";
    }

    std::cout << "Range                 : defined enumeration values\n";
    std::cout << "Memory representation : integer-like underlying value\n\n";


    // ============================================================
    // 11. FIXED-WIDTH INTEGER TYPES
    // ============================================================

    uint8_t  data8 = 255;
    uint16_t data16 = 65535;
    uint32_t data32 = 100000;
    uint64_t data64 = 10000000000ULL;

    std::cout << "11. FIXED-WIDTH INTEGER TYPES\n";
    std::cout << "------------------------------------------------------------\n";

    std::cout << "uint8_t\n";
    std::cout << "  Type                  : uint8_t\n  ";
    printSize(sizeof(data8));
    std::cout << "  Signed / Unsigned     : unsigned\n";
    std::cout << "  Value                 : "
        << static_cast<int>(data8) << '\n';
    std::cout << "  Range                 : 0 to 255\n";
    std::cout << "  Memory representation : 8 bits\n\n";

    std::cout << "uint16_t\n";
    std::cout << "  Type                  : uint16_t\n  ";
    printSize(sizeof(data16));
    std::cout << "  Signed / Unsigned     : unsigned\n";
    std::cout << "  Value                 : "
        << data16 << '\n';
    std::cout << "  Range                 : 0 to 65,535\n";
    std::cout << "  Memory representation : 16 bits\n\n";

    std::cout << "uint32_t\n";
    std::cout << "  Type                  : uint32_t\n  ";
    printSize(sizeof(data32));
    std::cout << "  Signed / Unsigned     : unsigned\n";
    std::cout << "  Value                 : "
        << data32 << '\n';
    std::cout << "  Range                 : 0 to 4,294,967,295\n";
    std::cout << "  Memory representation : 32 bits\n\n";

    std::cout << "uint64_t\n";
    std::cout << "  Type                  : uint64_t\n  ";
    printSize(sizeof(data64));
    std::cout << "  Signed / Unsigned     : unsigned\n";
    std::cout << "  Value                 : "
        << data64 << '\n';
    std::cout << "  Range                 : 0 to 18,446,744,073,709,551,615\n";
    std::cout << "  Memory representation : 64 bits\n\n";


    // ============================================================
    // 12. REFERENCE
    // ============================================================

    int original = 100;
    int& reference = original;

    std::cout << "12. REFERENCE (C++)\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : int&\n";
    std::cout << "Size                  : reference is an alias; "
        "sizeof(reference) is sizeof(int)\n";
    std::cout << "Signed / Unsigned     : same as referenced type\n";
    std::cout << "Value                 : " << reference << '\n';
    std::cout << "Range                 : same as referenced type\n";
    std::cout << "Memory representation : alias to an existing object\n\n";


    // ============================================================
    // 13. CLASS
    // ============================================================

    Door door;

    door.open();

    std::cout << "13. CLASS (C++)\n";
    std::cout << "------------------------------------------------------------\n";
    std::cout << "Type                  : Door\n";
    printSize(sizeof(door));
    std::cout << "Signed / Unsigned     : depends on members\n";
    std::cout << "Value                 : door.isOpen = "
        << door.isOpen << '\n';
    std::cout << "Range                 : depends on members\n";
    std::cout << "Memory representation : object containing its data members\n\n";


    // ============================================================
    // SUMMARY
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "                         SUMMARY\n";
    std::cout << "============================================================\n\n";

    std::cout << "For every datatype, remember:\n\n";

    std::cout << "TYPE\n";
    std::cout << "  «\n";
    std::cout << "SIZE\n";
    std::cout << "  «\n";
    std::cout << "SIGNED / UNSIGNED\n";
    std::cout << "  «\n";
    std::cout << "RANGE\n";
    std::cout << "  «\n";
    std::cout << "MEMORY REPRESENTATION\n\n";

    std::cout << "============================================================\n";

    return 0;
}
