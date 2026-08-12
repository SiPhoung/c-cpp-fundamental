#include <iostream>
#include "memorymanagement.h"

// ============================================================
//        POINTERS & MEMORY MANAGEMENT PRACTICE
// ============================================================
//
// Practice order:
//
// 1. Address and pointer
// 2. Dereferencing
// 3. Changing a variable through a pointer
// 4. Pointer arithmetic
// 5. Arrays + pointers
// 6. Functions + pointers
// 7. SWAP TWO VALUES USING POINTERS
// 8. Pointer to pointer
// 9. const + pointers
// 10. Dynamic memory with new/delete
// 11. Dynamic arrays
// 12. nullptr
// 13. Struct + pointer
// 14. POINTER + ARRAY + FUNCTION
// 15. Embedded-style memory buffer
// 16. MEMORY SIZE PRACTICE
//
// ============================================================

int main() 
{
    // 1. Address and pointer
    practicePointer();

    // 2. Dereferencing
    practiceDeferencing();

    // 3. Changing a variable through a pointer
    practiceChangingValue();

    // 4. Pointer arithmetic
    practicePointerArithemtic();

    // 5. Arrays + pointers
    practiceArrayPointer();

    // 6. Functions + pointers
    practiceFunctionPointer();

    // 7. SWAP TWO VALUES USING POINTERS
    practiceSwapingValues();

    // 8. Pointer to pointer
    practicePointerToPointer();

    // 9. const + pointers
    practiceConstWithPointers();
    practiceConstPointers();

    // 10. Dynamic memory with new/delete
    practicedynamicmemory();
    practicedynamicmemorywithInitialValue();

    // 11. Dynamic arrays
    practicedynamicarray();

    // 12. nullptr
    practiceNullPtr();

    // 13. Struct + pointer
    practiceStructPointer();
    practiceStructPointerWithDynamicMemory();

    // 14. POINTER + ARRAY + FUNCTION
    practicePointerArrayFunction();

    //15. Embedded-style memory buffer
    practiceEmbeddedStyleByteBuffer();

    // 16. MEMORY SIZE PRACTICE
    practiceMemorySize();
}
