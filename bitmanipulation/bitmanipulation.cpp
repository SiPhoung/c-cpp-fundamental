#include <iostream>
#include <cstdint>
#include <bitset>
#include "bitmanipulation.h"

void printBinary(uint8_t value)
{
    std::cout << std::bitset<8>(value);
}

void printDecimal(uint8_t value)
{
    std::cout << "\nDecial      =" << static_cast<int>(value);
}

void getDecimalBinaryHex()
{
    std::cout << "\n============================================================\n";
    std::cout << "1. DECIMAL / BINARY / HEXADECIMAL\n";
    std::cout << "============================================================\n";

    uint8_t value = 0xA5; //1010 0101 = 165

    std::cout << "Decial        =" << static_cast<int>(value) << "\n";
    std::cout << "Binary        =";
    printBinary(value);
    std::cout << "\n";

    std::cout << "Hexadecimal = 0x" << std::hex << static_cast<int>(value) << std::dec << "\n";
}

void practiceAnd()
{
    std::cout << "\n============================================================\n";
    std::cout << "2. AND (&)\n";
    std::cout << "============================================================\n";

    uint8_t a = 0xAC; // 1010 1100 = 172
    uint8_t b = 0x0F; // 0000 1111 = 15
    uint8_t result = a & b; // 0000 1100 = 12

    std::cout << "a           = ";
    printBinary(a);
    printDecimal(a);

    std::cout << "\nb           = ";
    printBinary(b);
    printDecimal(b);

    std::cout << "\nresult      = ";
    printBinary(result);
    printDecimal(result);
}

void practiceOr()
{
    std::cout << "\n============================================================\n";
    std::cout << "3. OR (|)\n";
    std::cout << "============================================================\n";

    uint8_t a = 0xA0;// 1010 0000 = 160
    uint8_t b = 0x05;// 0000 0101 = 5

    uint8_t result = a | b;// 1010 0101 = 165

    std::cout << "a           = ";
    printBinary(a);
    printDecimal(a);

    std::cout << "\nb           = ";
    printBinary(b);
    printDecimal(b);

    std::cout << "\nresult      = ";
    printBinary(result);
    printDecimal(result);
}

void practiceXOr()
{
    std::cout << "\n============================================================\n";
    std::cout << "4. XOR (^)\n";
    std::cout << "============================================================\n";

    uint8_t a = 0xAC;//1010 1100 = 172
    uint8_t b = 0x0F;//0000 1111 = 15

    uint8_t result = a ^ b;//1010 0011 = 163

    std::cout << "a           = ";
    printBinary(a);
    printDecimal(a);

    std::cout << "\nb           = ";
    printBinary(b);
    printDecimal(b);

    std::cout << "\nresult      = ";
    printBinary(result);
    printDecimal(result);
}

void practiceNot()
{
    std::cout << "\n============================================================\n";
    std::cout << "5. NOT (~)\n";
    std::cout << "============================================================\n";

    uint8_t value = 0xAC;//1010 1100 =172
    uint8_t result =
        static_cast<uint8_t>(~value); //0101 0011 = 83

    std::cout << "\nvalue       = ";
    printBinary(value);
    printDecimal(value);

    std::cout << "\nNot         = ";
    printBinary(result);
    printDecimal(result);
}

void practiceLeftShift()
{
    std::cout << "\n============================================================\n";
    std::cout << "6. LEFT SHIFT (<<)\n";
    std::cout << "============================================================\n";

    uint8_t value = 0x01;// 0000 0001 = 1

    for (int i = 0; i < 5; i++)
    {
        uint8_t result =
            static_cast<uint8_t>(value << i);

        std::cout << "1 << "
            << i
            << " = ";

        printBinary(result);
        printDecimal(result);

        std::cout << "\n";
    }
}

void practiceRightShift()
{
    std::cout << "\n============================================================\n";
    std::cout << "7. RIGHT SHIFT (>>)\n";
    std::cout << "============================================================\n";

    uint8_t value = 0x80;//1000 0000 = 128

    for (int i = 0; i < 5; i++)
    {
        uint8_t result =
            static_cast<uint8_t>(value >> i);

        std::cout << "0x80 >> "
            << i
            << " = ";

        printBinary(result);
        printDecimal(result);

        std::cout << "\n";
    }
}

void practiceSetBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "8. SET BIT\n";
    std::cout << "============================================================\n";

    uint8_t value = 0x00;//0000 0000 = 0

    int bit = 3;

    value |= static_cast<uint8_t>(1U << bit);

    std::cout << "After setting bit " << bit << ":\n";

    printBinary(value);
    printDecimal(value);
}

void practiceClearBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "9. CLEAR BIT\n";
    std::cout << "============================================================\n";

    uint8_t value = 0xFF;//1111 1111 
    std::cout << "Before clearing bit " << ":\n";
    printBinary(value);
    printDecimal(value);

    int bit = 3;
    value &=
        static_cast<uint8_t>(~(1U << bit));
    std::cout << "\nAfter clearing bit "
        << bit
        << ":\n";

    printBinary(value);
    printDecimal(value);

    std::cout << "\n";
}

void practiceToggleBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "10. TOGGLE BIT\n";
    std::cout << "============================================================\n";

    uint8_t value = 0x00;
    int bit = 3;
    std::cout << "Before:\n";
    printBinary(value);
    printDecimal(value);
    std::cout << "\n";

    value ^=
        static_cast<uint8_t>(1U << bit);

    std::cout << "After toggle:\n";
    printBinary(value);
    printDecimal(value);
    std::cout << "\n";

    value ^=
        static_cast<uint8_t>(1U << bit);
    std::cout << "Toggle again:\n";
    printBinary(value);
    printDecimal(value);
    std::cout << "\n";
}

void practiceCheckBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "11.1 CHECK BIT\n";
    std::cout << "============================================================\n";

    uint8_t value = 0x28;// 0010 1000 = 40
    int bit = 3;
    bool isSet =
        (value & (1U << bit)) != 0; //(1U << bit) = 0000 1000

    std::cout << "Value = ";
    printBinary(value);
    printDecimal(value);

    std::cout << "\n";

    std::cout << "\n";

    if (isSet)
    {
        std::cout << "Bit "
            << bit
            << " is ON\n";
    }
    else
    {
        std::cout << "Bit "
            << bit
            << " is OFF\n";
    }

}

void practiceCheckAllBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "11.2 CHECK ALL BITS\n";
    std::cout << "============================================================\n";

    uint8_t value = 0xA5;//1010 0101 = 164
    std::cout << "Value = ";

    printBinary(value);
    printDecimal(value);

    std::cout << "\n\n";

    for (int bit = 7; bit >= 0; bit--)
    {
        bool isSet =
            (value & (1U << bit)) != 0;

        std::cout << "Bit "
            << bit
            << " = "
            << isSet
            << "\n";
    }


}

void practiceExtractUperBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "12.1 EXTRACT UPPER 4 BITS\n";
    std::cout << "============================================================\n";

    uint8_t value = 0xAB;//1010 1011
    uint8_t upperNibble =
        static_cast<uint8_t>(value >> 4);//0000 1010

    std::cout << "Value        = ";

    printBinary(value);
    printDecimal(value);

    std::cout << "\n";

    std::cout << "Upper 4 bits = ";

    printBinary(upperNibble);
    printDecimal(upperNibble);

    std::cout << "\n";
}

void practiceExtractLowerBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "13. EXTRACT LOWER 4 BITS\n";
    std::cout << "============================================================\n";

    uint8_t value = 0xAB;//1010 1011
    uint8_t lowerNibble =
        value & 0x0F; // 0000 1111 = 0000 1011

    std::cout << "Value        = ";

    printBinary(value);
    printDecimal(value);

    std::cout << "\n";

    std::cout << "Lower 4 bits = ";

    printBinary(lowerNibble);
    printDecimal(lowerNibble);

    std::cout << "\n";
}

void practiceModifyBit()
{
    std::cout << "\n============================================================\n";
    std::cout << "13. MODIFY BIT FIELD\n";
    std::cout << "============================================================\n";
    uint8_t registerValue = 0x00;//0000 0000

    uint8_t mode = 3; // 0000 0011

    registerValue |=
        static_cast<uint8_t>(mode << 2); // 0000 1100

    std::cout << "Register = ";
    printBinary(registerValue);
    printDecimal(registerValue);
    std::cout << "\n";
}

void practiceEmbeddedRegisterSimulation()
{
    std::cout << "\n============================================================\n";
    std::cout << "16. EMBEDDED REGISTER SIMULATION\n";
    std::cout << "============================================================\n";
    uint8_t controlRegister = 0x00;

    /*
    Imagine:

    Bit 0 = LED
    Bit 1 = MOTOR
    Bit 2 = FAN
    Bit 3 = SENSOR
    */

    // Turn LED ON
    controlRegister |= (1U << 0);

    // Turn MOTOR ON
    controlRegister |= (1U << 1);

    // Turn FAN ON
    controlRegister |= (1U << 2);

    std::cout << "Register after enabling devices:\n";

    printBinary(controlRegister);
    std::cout << "\n";

    // Turn MOTOR OFF
    controlRegister &=
        static_cast<uint8_t>(~(1U << 1));
    std::cout << "Register after disabling motor:\n";
    printBinary(controlRegister);

    std::cout << "\n";

}

int countSetBits(uint8_t value)
{
    int count = 0;

    for (int bit = 0; bit < 8; bit++)
    {
        printBinary(value & (1U << bit));
        std::cout << "\n";
        if (value & (1U << bit))
        {
            count++;
        }
    }

    return count;
}

void practiceCountSetBits()
{
    std::cout << "\n============================================================\n";
    std::cout << "18. COUNT SET BITS\n";
    std::cout << "============================================================\n";

    uint8_t value = 0xF0; //1111 0000

    std::cout << "Value = ";

    printBinary(value);
    std::cout << "\n";

    std::cout << "Number of 1 bits = "
        << countSetBits(value)
        << "\n";
}

void practiceEmbeddedStatusRegister()
{
    std::cout << "\n============================================================\n";
    std::cout << "19. EMBEDDED STATUS REGISTER\n";
    std::cout << "============================================================\n";

    /*
    Imagine a microcontroller status register:

    Bit 0 = READY
    Bit 1 = ERROR
    Bit 2 = BUSY
    Bit 3 = DATA_AVAILABLE
    */

    uint8_t status = 0x00;

    status |= (1U << 0);

    status |= (1U << 3);
    std::cout << "Status = ";
    printBinary(status);
    std::cout << "\n";

    if (status & (1U << 0))//0000 1001 & 0000 0001
    {
        std::cout << "READY\n";
    }

    if (status & (1U << 3))// 0000 1001 & 0000 1000
    {
        std::cout << "DATA AVAILABLE\n";
    }
}
