// ============================================================
// C++ BUILD PROCESS
// ============================================================

// 1. SOURCE
//    «
//    Your C++ source code (.cpp)
//    Example:



// 2. PREPROCESS
//    «
//    The preprocessor handles:
//    - #include
//    - #define
//    - #if / #ifdef / #endif
//
//    Example:
//    #include <iostream>
//    gets processed before compilation.
//
//
// 3. COMPILE
//    «
//    The compiler converts the preprocessed C++ code
//    into machine-oriented code.
//
//    main.cpp
//       «
//    Compiler
//       «
//    main.o
//
//
// 4. OBJECT FILE
//    «
//    The compiler produces an object file.
//
//    main.cpp ¨ main.o
//
//    The object file contains compiled machine code,
//    but the program may still have unresolved references.
//
//
// 5. LINK
//    «
//    The linker combines object files and libraries.
//
//    main.o
//      +
//    other.o
//      +
//    libraries
//      «
//    Linker
//      «
//    Executable
//
//
// 6. EXECUTABLE / FIRMWARE
//    «
//    PC:
//        main.exe
//
//    Embedded system:
//        firmware / .elf / .hex / .bin
//
//
// 7. CPU
//    «
//    The CPU executes the machine instructions.
//
//
// ============================================================
// Overall:
//
// SOURCE
//   «
// PREPROCESS
//   «
// COMPILE
//   «
// OBJECT FILES
//   «
// LINK
//   «
// EXECUTABLE / FIRMWARE
//   «
// CPU
// ============================================================

#include <iostream>

int main()
{
    std::cout << "============================================================\n";
    std::cout << "                 C++ BUILD PROCESS\n";
    std::cout << "============================================================\n\n";

    std::cout << "1. SOURCE\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "   Your C++ source code (.cpp)\n\n";

    std::cout << "2. PREPROCESS\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "   Preprocessor handles #include, #define, #if, etc.\n\n";

    std::cout << "3. COMPILE\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "   Compiler converts C++ source into object code.\n\n";

    std::cout << "4. OBJECT FILES\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "   main.cpp  -->  main.o / main.obj\n\n";

    std::cout << "5. LINK\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "   Linker combines object files and libraries.\n\n";

    std::cout << "6. EXECUTABLE / FIRMWARE\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "   PC:        main.exe\n";
    std::cout << "   Embedded:  .elf / .hex / .bin\n\n";

    std::cout << "7. CPU\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "   CPU executes the machine instructions.\n\n";

    std::cout << "============================================================\n";
    std::cout << "Overall Build Process\n";
    std::cout << "============================================================\n\n";

    std::cout << "SOURCE\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "PREPROCESS\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "COMPILE\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "OBJECT FILES\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "LINK\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "EXECUTABLE / FIRMWARE\n";
    std::cout << "   |\n";
    std::cout << "   v\n";
    std::cout << "CPU\n";

    std::cout << "\n============================================================\n";

    return 0;
}
