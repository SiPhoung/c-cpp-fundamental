#include <iostream>
#include "memorymanagement.h"

void practicePointer()
{
    std::cout << "\n============================================================\n";
    std::cout << "1. ADDRESS AND POINTER\n";
    std::cout << "============================================================\n";

    int number = 20;
    int* ptrNumber = &number;

    std::cout << "number        " << number << "\n";
    std::cout << "&number       " << &number << "\n";
    std::cout << "ptr           " << ptrNumber << "\n";
    std::cout << "&ptr          " << &ptrNumber << "\n";
}

void practiceDeferencing()
{
    std::cout << "\n============================================================\n";
    std::cout << "2. DEREFERENCING\n";
    std::cout << "============================================================\n";

    int number = 100;
    int* ptr = &number;

    std::cout << "number        " << number << "\n";
    std::cout << "*ptr          " << *ptr << "\n";
}

void practiceChangingValue()
{
    std::cout << "\n============================================================\n";
    std::cout << "3. CHANGE VALUE THROUGH POINTER\n";
    std::cout << "============================================================\n";

    int number = 20;

    int* ptr = &number;

    std::cout << "Before:   " << number << "\n";

    *ptr = 400;

    std::cout << "After:    " << number << "\n";
}

void practicePointerArithemtic()
{
    std::cout << "\n============================================================\n";
    std::cout << "4. POINTER ARITHMETIC\n";
    std::cout << "============================================================\n";

    int numbers[5] = {
        1, 2, 3, 4, 5
    };

    int* ptr = numbers;//Array is first index's memory address

    for (int i = 0; i < 5; i++)
    {
        std::cout << "Index: " << i
            << "    Value: " << *(ptr + i)
            << "    Address: " << (ptr + i)
            << "\n";
    }

}

void practiceArrayPointer()
{
    std::cout << "\n============================================================\n";
    std::cout << "5. ARRAY + POINTER\n";
    std::cout << "============================================================\n";

    int values[4] = {
        100, 200, 300, 400
    };

    int* ptr = values;
    
    std::cout << "*ptr              " << *ptr << "\n";
    std::cout << "*(ptr + 1)        " << *(ptr + 1) << "\n";
    std::cout << "*(ptr + 2)        " << *(ptr + 2) << "\n";
    std::cout << "*(ptr + 3)        " << *(ptr + 3) << "\n";

    std::cout << "\nChanging *(ptr + 2)...\n";

    *(ptr + 2) = 789;
    std::cout << "values[2]         " << values[2] << "\n";
}

void changeValue(int* ptr)
{
    if (ptr != nullptr)
    {
        *ptr = 2222;
    }
}

void practiceFunctionPointer()
{
    std::cout << "\n============================================================\n";
    std::cout << "6. FUNCTION + POINTER\n";
    std::cout << "============================================================\n";

    int number = 1000;

    std::cout << "Before = " << number << "\n";

    changeValue(&number);

    std::cout << "After = " << number << "\n";
}

void swapValues(int* a, int* b)
{
    if (a == nullptr || b == nullptr)
    {
        return;
    }

    int temp = *a;
    *a = *b;
    *b = temp;
}

void practiceSwapingValues()
{
    std::cout << "\n============================================================\n";
    std::cout << "7. SWAP TWO VALUES USING POINTERS\n";
    std::cout << "============================================================\n";

    int a = 5;
    int b = 8;

    std::cout << "Before\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";

    swapValues(&a, &b);

    std::cout << "After\n";
    std::cout << "a = " << a << "\n";
    std::cout << "b = " << b << "\n";
}

void practicePointerToPointer()
{
    std::cout << "\n============================================================\n";
    std::cout << "8. POINTER TO POINTER\n";
    std::cout << "============================================================\n";

    int number = 100;

    int* ptr = &number;

    int** ptr2 = &ptr;

    std::cout << "number        = "<< number << "\n";
    std::cout << "*ptr          = "<< *ptr << "\n";
    std::cout << "**ptr2        = "<< **ptr2 << "\n";

    **ptr2 = 222;

    std::cout << "\nAfter **ptr2 = 222:\n";
    std::cout << "number       = " << number << "\n";
}

void practiceConstWithPointers()
{
    std::cout << "\n============================================================\n";
    std::cout << "9.1 CONST WITH POINTERS\n";
    std::cout << "============================================================\n";

    int number = 100;

    const int* ptr = &number;

    std::cout << "*ptr = " << *ptr << "\n";
    // This is NOT allowed:
    // *ptr = 200;

    int anotherNumber = 150;
    ptr = &anotherNumber;

    std::cout << "After point somewhere else" <<"\n";
    std::cout << "*ptr = " << *ptr << "\n";
}

void practiceConstPointers()
{
    std::cout << "\n============================================================\n";
    std::cout << "9.2 CONST POINTER\n";
    std::cout << "============================================================\n";

    int number = 100;

    int* const ptr = &number;

    *ptr = 500;

    std::cout << "number = " << number << "\n";
    //ptr = &anotherNumber;  // NOT allowed
    //*ptr = 500;            // allowed
}

void practicedynamicmemory()
{
    std::cout << "\n============================================================\n";
    std::cout << "10.1 DYNAMIC MEMORY - NEW / DELETE\n";
    std::cout << "============================================================\n";

    int* ptr = new int;

    *ptr = 1234;

    std::cout << "Dynamic value = " << *ptr << "\n";
    std::cout << "Address = " << ptr << "\n";

    /*
        If we forget:

            delete ptr;

        the allocated memory remains occupied
        until the program/process releases it.

        This is called a MEMORY LEAK.
    */
    delete ptr;
    //After delete, using *ptr is undefined behavior.
    // ptr still contains the old address.
    // Therefore we immediately do:ptr = nullptr
    ptr = nullptr;

    std::cout << "Memory released.\n";
}

void practicedynamicmemorywithInitialValue()
{
    std::cout << "\n============================================================\n";
    std::cout << "10.2 NEW WITH INITIAL VALUE\n";
    std::cout << "============================================================\n";

    int* temperature = new int(25);

    std::cout << "Temperature = " << *temperature << " C\n";

    delete temperature;
    temperature = nullptr;
}

void practicedynamicarray()
{
    std::cout << "\n============================================================\n";
    std::cout << "11. DYNAMIC ARRAY\n";
    std::cout << "============================================================\n";

    int size = 5;

    int* data = new int[size];

    for (int i = 0; i < size; i++)
    {
        data[i] = (i + 1) * 10;
    }

    for (int i = 0;i < size;i++)
    {
        std::cout << "data[" << i << "] = "
            << data[i]
            << "\n";
    }

    delete[] data;
    data = nullptr;

    std::cout << "Dynamic array released.\n";
}

void practiceNullPtr()
{
    std::cout << "\n============================================================\n";
    std::cout << "12. NULLPTR\n";
    std::cout << "============================================================\n";

    int* ptr = nullptr;

    if (ptr == nullptr)
    {
        std::cout << "Pointer does not point to an object.\n";
    }

    int number = 100;

    ptr = &number;

    if (ptr != nullptr)
    {
        std::cout << "Pointer is valid.\n";
        std::cout << "Value = "
            << *ptr
            << "\n";
    }
}

struct Sensor
{
    int temperature;
    int humidity;
};

void practiceStructPointer()
{
    std::cout << "\n============================================================\n";
    std::cout << "13.1 STRUCT + POINTER\n";
    std::cout << "============================================================\n";

    Sensor sensor;

    sensor.temperature = 25;
    sensor.humidity = 60;

    Sensor* ptr = &sensor;

    std::cout << "Temperature = "
        << ptr->temperature //(*ptr).temperature
        << " C\n";

    std::cout << "Humidity = "
        << ptr->humidity //(*ptr).humidity
        << "%\n";
}

void practiceStructPointerWithDynamicMemory()
{
    std::cout << "\n============================================================\n";
    std::cout << "13.2 POINTER TO STRUCT + DYNAMIC MEMORY\n";
    std::cout << "============================================================\n";

    Sensor* sensor = new Sensor;

    sensor->temperature = 30;
    sensor->humidity = 55;

    std::cout << "Temperature = "
        << sensor->temperature
        << "\n";

    std::cout << "Humidity = "
        << sensor->humidity
        << "\n";

    delete sensor;

    sensor = nullptr;
}

int calculateAverage(const int* data, int size)
{
    if (data == nullptr || size <= 0)
    {
        return 0;
    }

    int total = 0;

    for (int i = 0;i < size;i++)
    {
        total += data[i];
    }

    return total / size;
}

void practicePointerArrayFunction()
{
    std::cout << "\n============================================================\n";
    std::cout << "14. POINTER + ARRAY + FUNCTION\n";
    std::cout << "============================================================\n";


    int readings[5] =
    {
        20, 22, 24, 26, 28
    };

    int average =
        calculateAverage(
            readings,
            5
        );

    std::cout << "Average temperature = "
        << average
        << " C\n";
}

void practiceEmbeddedStyleByteBuffer()
{
    std::cout << "\n============================================================\n";
    std::cout << "20. EMBEDDED-STYLE BYTE BUFFER\n";
    std::cout << "============================================================\n";

    uint8_t buffer[8] =
    {
        0x10, // 0001 0000 = 16
        0x20, // 0010 0000 = 32
        0x30, // 0011 0000 = 48
        0x40, // 0100 0000 = 64
        0x50, // 0101 0000 = 80
        0x60, // 0110 0000 = 96
        0x70, // 0111 0000 = 112
        0x80, // 1000 0000 = 128
    };

    uint8_t* ptr = buffer;
    std::cout << "Buffer values:\n";

    for (int i = 0; i < 8; i++)
    {
        std::cout
            << "buffer[" << i << "] = "
            << static_cast<int>(*(ptr + i))
            << "\n";
    }
}

void practiceMemorySize()
{
    std::cout << "\n============================================================\n";
    std::cout << "21. MEMORY SIZE PRACTICE\n";
    std::cout << "============================================================\n";

    int a = 10;
    int* p = &a;

    std::cout << "sizeof(a) = "
        << sizeof(a)
        << " bytes\n";

    std::cout << "sizeof(p) = "
        << sizeof(p) //the size of int* depends on the target(Arduino) architecture.
        << " bytes\n";
}
