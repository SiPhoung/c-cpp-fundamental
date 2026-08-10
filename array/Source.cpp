#include <iostream>
#include <iomanip>
#include <cstddef>

// ============================================================
//              C / C++ ARRAYS
// ============================================================
//
// Array:
//     A collection of elements of the SAME data type
//     stored in consecutive memory locations.
//
// Example:
//
//     int numbers[5];
//
//     numbers
//
//     +-------+-------+-------+-------+-------+
//     |   10  |   20  |   30  |   40  |   50  |
//     +-------+-------+-------+-------+-------+
//        [0]     [1]     [2]     [3]     [4]
//
// IMPORTANT:
//     Array indexing starts from 0.
// ============================================================


int main()
{
    std::cout << "============================================================\n";
    std::cout << "                    C / C++ ARRAYS\n";
    std::cout << "============================================================\n\n";


    // ============================================================
    // 1. WHAT IS AN ARRAY?
    // ============================================================

    std::cout << "1. WHAT IS AN ARRAY?\n";
    std::cout << "------------------------------------------------------------\n";

    int numbers[5] = { 10, 20, 30, 40, 50 };

    std::cout << "Array contains 5 integers.\n\n";

    std::cout << "numbers[0] = " << numbers[0] << "\n";
    std::cout << "numbers[1] = " << numbers[1] << "\n";
    std::cout << "numbers[2] = " << numbers[2] << "\n";
    std::cout << "numbers[3] = " << numbers[3] << "\n";
    std::cout << "numbers[4] = " << numbers[4] << "\n\n";

    /*
        Syntax:

        data_type array_name[size];

        Example:

        int numbers[5];

        means:

        Create an array called "numbers"
        that can store 5 integers.

        Index:

        numbers[0] -> first element
        numbers[1] -> second element
        numbers[2] -> third element
        numbers[3] -> fourth element
        numbers[4] -> fifth element
    */


    // ============================================================
    // 2. ARRAY SIZE
    // ============================================================

    std::cout << "2. ARRAY SIZE\n";
    std::cout << "------------------------------------------------------------\n";

    std::cout << "Total array size = "
        << sizeof(numbers)
        << " bytes\n";

    std::cout << "One element size  = "
        << sizeof(numbers[0])
        << " bytes\n";

    std::cout << "Number of elements = "
        << sizeof(numbers) / sizeof(numbers[0])
        << "\n\n";

    /*
        If:

            int = 4 bytes
            numbers[5]

        Then:

            5 elements x 4 bytes
            = 20 bytes

        General formula:

            Number of elements =
            sizeof(array) / sizeof(array[0])
    */


    // ============================================================
    // 3. INITIALIZING AN ARRAY
    // ============================================================

    std::cout << "3. ARRAY INITIALIZATION\n";
    std::cout << "------------------------------------------------------------\n";

    int array1[5] = { 10, 20, 30, 40, 50 };

    int array2[] = { 1, 2, 3, 4 };

    int array3[5] = { 1, 2 };

    std::cout << "array1: ";

    for (int i = 0; i < 5; i++)
    {
        std::cout << array1[i] << " ";
    }

    std::cout << "\n";

    std::cout << "array2: ";

    for (int i = 0; i < 4; i++)
    {
        std::cout << array2[i] << " ";
    }

    std::cout << "\n";

    std::cout << "array3: ";

    for (int i = 0; i < 5; i++)
    {
        std::cout << array3[i] << " ";
    }

    std::cout << "\n\n";

    /*
        array3:

        int array3[5] = {1, 2};

        Remaining elements are automatically initialized to 0.

        Result:

        {1, 2, 0, 0, 0}
    */


    // ============================================================
    // 4. MODIFYING ARRAY ELEMENTS
    // ============================================================

    std::cout << "4. MODIFYING ARRAY ELEMENTS\n";
    std::cout << "------------------------------------------------------------\n";

    int values[5] = { 10, 20, 30, 40, 50 };

    std::cout << "Before modification:\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "values[" << i << "] = "
            << values[i] << "\n";
    }

    values[2] = 999;

    std::cout << "\nAfter values[2] = 999:\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "values[" << i << "] = "
            << values[i] << "\n";
    }

    std::cout << "\n";


    // ============================================================
    // 5. LOOP THROUGH AN ARRAY
    // ============================================================

    std::cout << "5. LOOP THROUGH AN ARRAY\n";
    std::cout << "------------------------------------------------------------\n";

    int temperatures[5] = {
        20, 22, 25, 28, 30
    };

    std::cout << "Temperatures:\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Temperature["
            << i
            << "] = "
            << temperatures[i]
            << " C\n";
    }

    std::cout << "\n";

    /*
        This is one of the most common uses of arrays.

        Instead of:

            temperature1
            temperature2
            temperature3
            temperature4
            temperature5

        We use:

            temperatures[5]
    */


    // ============================================================
    // 6. ARRAY WITH CALCULATIONS
    // ============================================================

    std::cout << "6. ARRAY WITH CALCULATIONS\n";
    std::cout << "------------------------------------------------------------\n";

    int sensorValues[5] = {
        10, 20, 30, 40, 50
    };

    int total = 0;

    for (int i = 0; i < 5; i++)
    {
        total += sensorValues[i];
    }

    double average =
        static_cast<double>(total) / 5;

    std::cout << "Total   = "
        << total << "\n";

    std::cout << "Average = "
        << average << "\n\n";


    // ============================================================
    // 7. FIND MAXIMUM VALUE
    // ============================================================

    std::cout << "7. FIND MAXIMUM VALUE\n";
    std::cout << "------------------------------------------------------------\n";

    int data[5] = {
        25, 10, 45, 30, 20
    };

    int maximum = data[0];

    for (int i = 1; i < 5; i++)
    {
        if (data[i] > maximum)
        {
            maximum = data[i];
        }
    }

    std::cout << "Maximum value = "
        << maximum
        << "\n\n";


    // ============================================================
    // 8. FIND MINIMUM VALUE
    // ============================================================

    std::cout << "8. FIND MINIMUM VALUE\n";
    std::cout << "------------------------------------------------------------\n";

    int minimum = data[0];

    for (int i = 1; i < 5; i++)
    {
        if (data[i] < minimum)
        {
            minimum = data[i];
        }
    }

    std::cout << "Minimum value = "
        << minimum
        << "\n\n";


    // ============================================================
    // 9. CHARACTER ARRAY / C-STYLE STRING
    // ============================================================

    std::cout << "9. CHARACTER ARRAY / C-STYLE STRING\n";
    std::cout << "------------------------------------------------------------\n";

    char name[] = "Arduino";

    std::cout << "Name = "
        << name
        << "\n";

    std::cout << "Characters:\n";

    for (int i = 0; name[i] != '\0'; i++)
    {
        std::cout << "name[" << i << "] = "
            << name[i]
            << "\n";
    }

    std::cout << "\n";

    /*
        char name[] = "Arduino";

        Internally:

        +-----+-----+-----+-----+-----+-----+-----+-----+
        |  A  |  r  |  d  |  u  |  i  |  n  |  o  | \0  |
        +-----+-----+-----+-----+-----+-----+-----+-----+

        \0 means NULL character.

        It tells C/C++ where the string ends.
    */


    // ============================================================
    // 10. TWO-DIMENSIONAL ARRAY
    // ============================================================

    std::cout << "10. TWO-DIMENSIONAL ARRAY\n";
    std::cout << "------------------------------------------------------------\n";

    int matrix[2][3] =
    {
        {1, 2, 3},
        {4, 5, 6}
    };

    std::cout << "Matrix:\n";

    for (int row = 0; row < 2; row++)
    {
        for (int column = 0; column < 3; column++)
        {
            std::cout << matrix[row][column]
                << " ";
        }

        std::cout << "\n";
    }

    std::cout << "\n";

    /*
        Memory representation:

        matrix[0][0] = 1
        matrix[0][1] = 2
        matrix[0][2] = 3

        matrix[1][0] = 4
        matrix[1][1] = 5
        matrix[1][2] = 6


        Visual representation:

              column
              0   1   2
            +---+---+---+
        0   | 1 | 2 | 3 |
            +---+---+---+
        1   | 4 | 5 | 6 |
            +---+---+---+
             row
    */


    // ============================================================
    // 11. ARRAY OF FLOAT
    // ============================================================

    std::cout << "11. ARRAY OF FLOAT\n";
    std::cout << "------------------------------------------------------------\n";

    float roomTemperature[4] =
    {
        22.5f,
        23.1f,
        24.0f,
        23.7f
    };

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Reading "
            << i
            << " = "
            << roomTemperature[i]
            << " C\n";
    }

    std::cout << "\n";


    // ============================================================
    // 12. ARRAY OF BOOL
    // ============================================================

    std::cout << "12. ARRAY OF BOOL\n";
    std::cout << "------------------------------------------------------------\n";

    bool switches[4] =
    {
        true,
        false,
        true,
        false
    };

    for (int i = 0; i < 4; i++)
    {
        std::cout << "Switch["
            << i
            << "] = "
            << std::boolalpha
            << switches[i]
            << "\n";
    }

    std::cout << "\n";


    // ============================================================
    // 13. ARRAY MEMORY ADDRESSES
    // ============================================================

    std::cout << "13. ARRAY MEMORY ADDRESSES\n";
    std::cout << "------------------------------------------------------------\n";

    int memoryArray[4] =
    {
        100, 200, 300, 400
    };

    for (int i = 0; i < 4; i++)
    {
        std::cout << "memoryArray[" << i << "]"
            << " = "
            << memoryArray[i]
            << "    Address = "
            << &memoryArray[i]
            << "\n";
    }

    std::cout << "\n";

    /*
        Notice that the addresses are next to each other.

        Example:

        memoryArray[0] -> 100 -> address 1000
        memoryArray[1] -> 200 -> address 1004
        memoryArray[2] -> 300 -> address 1008
        memoryArray[3] -> 400 -> address 1012

        Assuming int = 4 bytes.

        Therefore:

        Address of next element =
        current address + sizeof(element)
    */


    // ============================================================
    // 14. ARRAY AND POINTER
    // ============================================================

    std::cout << "14. ARRAY AND POINTER\n";
    std::cout << "------------------------------------------------------------\n";

    int numbers2[3] =
    {
        10, 20, 30
    };

    int* ptr = numbers2;

    std::cout << "numbers2[0] = "
        << numbers2[0]
        << "\n";

    std::cout << "*ptr = "
        << *ptr
        << "\n";

    std::cout << "*(ptr + 1) = "
        << *(ptr + 1)
        << "\n";

    std::cout << "*(ptr + 2) = "
        << *(ptr + 2)
        << "\n\n";

    /*
        Important relationship:

        numbers2
           |
           v
        +----+----+----+
        | 10 | 20 | 30 |
        +----+----+----+
          ^
          |
         ptr

        *ptr       -> 10
        *(ptr + 1) -> 20
        *(ptr + 2) -> 30
    */


    // ============================================================
    // 15. PASSING ARRAY TO A FUNCTION
    // ============================================================

    std::cout << "15. PASSING ARRAY TO A FUNCTION\n";
    std::cout << "------------------------------------------------------------\n";

    /*
        In C/C++, arrays are commonly passed to functions
        using a pointer to the first element.

        Example:

        void printArray(int array[], int size)
        {
            ...
        }

        This is equivalent to:

        void printArray(int* array, int size)
        {
            ...
        }
    */

    int values2[5] =
    {
        5, 10, 15, 20, 25
    };

    std::cout << "Array values:\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << values2[i]
            << " ";
    }

    std::cout << "\n\n";


    // ============================================================
    // 16. ARRAY IN EMBEDDED SYSTEMS
    // ============================================================

    std::cout << "16. ARRAY IN EMBEDDED SYSTEMS\n";
    std::cout << "------------------------------------------------------------\n";

    /*
        Arrays are VERY common in embedded systems.

        Examples:

        Sensor readings
        Communication buffers
        ADC values
        LED patterns
        Lookup tables
        UART data
        SPI data
        I2C data
        Display data
    */

    int sensorReadings[5] =
    {
        100,
        105,
        110,
        108,
        103
    };

    std::cout << "Sensor readings:\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Sensor["
            << i
            << "] = "
            << sensorReadings[i]
            << "\n";
    }

    std::cout << "\n";


    // ============================================================
    // 17. BYTE BUFFER
    // ============================================================

    std::cout << "17. BYTE BUFFER\n";
    std::cout << "------------------------------------------------------------\n";

    unsigned char buffer[5] =
    {
        0x10,
        0x20,
        0x30,
        0x40,
        0x50
    };

    std::cout << "Communication buffer:\n";

    for (int i = 0; i < 5; i++)
    {
        std::cout << "buffer["
            << i
            << "] = 0x"
            << std::hex
            << static_cast<int>(buffer[i])
            << std::dec
            << "\n";
    }

    std::cout << "\n";


    // ============================================================
    // 18. LOOKUP TABLE
    // ============================================================

    std::cout << "18. LOOKUP TABLE\n";
    std::cout << "------------------------------------------------------------\n";

    /*
        A lookup table stores values that can be accessed
        quickly using an index.

        This is useful in embedded systems because
        we can avoid expensive calculations.
    */

    int speedTable[5] =
    {
        0,
        25,
        50,
        75,
        100
    };

    int level = 3;

    std::cout << "Level = "
        << level
        << "\n";

    std::cout << "Speed = "
        << speedTable[level]
        << "%\n\n";


    // ============================================================
    // 19. RANGE-BASED FOR LOOP (C++)
    // ============================================================

    std::cout << "19. RANGE-BASED FOR LOOP (C++)\n";
    std::cout << "------------------------------------------------------------\n";

    int values3[] =
    {
        10, 20, 30, 40, 50
    };

    for (int value : values3)
    {
        std::cout << value << " ";
    }

    std::cout << "\n\n";

    /*
        C++ provides a simpler way to loop through arrays:

        for (int value : values3)
        {
            std::cout << value;
        }

        This means:

        "For every value inside values3..."
    */


    // ============================================================
    // 20. CONST ARRAY
    // ============================================================

    std::cout << "20. CONST ARRAY\n";
    std::cout << "------------------------------------------------------------\n";

    const int ledPattern[4] =
    {
        1, 0, 1, 0
    };

    std::cout << "LED pattern:\n";

    for (int i = 0; i < 4; i++)
    {
        std::cout << ledPattern[i]
            << " ";
    }

    std::cout << "\n\n";

    /*
        const means the values should not be modified.

        Example:

        ledPattern[0] = 5;

        This would cause a compilation error.

        const arrays are useful for:

        - Fixed configuration data
        - Lookup tables
        - Constant patterns
        - Read-only data
    */


    // ============================================================
    // 21. COMMON ARRAY ERROR
    // ============================================================

    std::cout << "21. COMMON ARRAY ERROR\n";
    std::cout << "------------------------------------------------------------\n";

    int safeArray[5] =
    {
        10, 20, 30, 40, 50
    };

    std::cout << "Valid indexes:\n";
    std::cout << "0 1 2 3 4\n\n";

    std::cout << "Array size = 5\n";
    std::cout << "Last valid index = 4\n\n";

    std::cout << "IMPORTANT:\n";
    std::cout << "safeArray[5] is INVALID!\n";
    std::cout << "safeArray[6] is INVALID!\n";
    std::cout << "Negative indexes are also INVALID!\n\n";

    /*
        NEVER do:

            safeArray[5] = 100;

        Because:

            safeArray[0] -> valid
            safeArray[1] -> valid
            safeArray[2] -> valid
            safeArray[3] -> valid
            safeArray[4] -> valid
            safeArray[5] -> OUT OF BOUNDS

        Accessing outside an array's valid range
        can cause undefined behavior.
    */


    // ============================================================
    // SUMMARY
    // ============================================================

    std::cout << "============================================================\n";
    std::cout << "                       ARRAY SUMMARY\n";
    std::cout << "============================================================\n\n";

    std::cout << "ARRAY\n";
    std::cout << " |\n";
    std::cout << " +----> Same data type\n";
    std::cout << " |\n";
    std::cout << " +----> Fixed number of elements\n";
    std::cout << " |\n";
    std::cout << " +----> Consecutive memory locations\n";
    std::cout << " |\n";
    std::cout << " +----> Index starts at 0\n\n";

    std::cout << "Basic syntax:\n";
    std::cout << "    int numbers[5];\n\n";

    std::cout << "Initialization:\n";
    std::cout << "    int numbers[5] = {10, 20, 30, 40, 50};\n\n";

    std::cout << "Access:\n";
    std::cout << "    numbers[0]\n";
    std::cout << "    numbers[1]\n";
    std::cout << "    numbers[2]\n\n";

    std::cout << "Array size:\n";
    std::cout << "    sizeof(numbers)\n\n";

    std::cout << "Number of elements:\n";
    std::cout << "    sizeof(numbers) / sizeof(numbers[0])\n\n";


    std::cout << "============================================================\n";
    std::cout << "                 EMBEDDED PROGRAMMING\n";
    std::cout << "============================================================\n\n";

    std::cout << "Arrays are commonly used for:\n\n";

    std::cout << "  [1] Sensor data\n";
    std::cout << "  [2] Communication buffers\n";
    std::cout << "  [3] UART / SPI / I2C data\n";
    std::cout << "  [4] ADC readings\n";
    std::cout << "  [5] LED patterns\n";
    std::cout << "  [6] Lookup tables\n";
    std::cout << "  [7] Display data\n";
    std::cout << "  [8] Strings\n";
    std::cout << "  [9] Image data\n";
    std::cout << "  [10] Multiple sensor readings\n\n";

    std::cout << "This connection is very important for embedded C/C++\n";
    std::cout << "    ARRAY\n";
    std::cout << "    «\n";
    std::cout << "    MEMORY\n";
    std::cout << "    «\n";
    std::cout << "    POINTER\n";
    std::cout << "    «\n";
    std::cout << "    ADDRESS\n";
    std::cout << "    «\n";
    std::cout << "    HARDWARE / REGISTERS\n\n";

    std::cout << "============================================================\n";

    return 0;
}
