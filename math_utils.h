#ifndef MATH_UTILS_H
#define MATH_UTILS_H

/*
    This is a HEADER FILE.

    A header file contains function DECLARATIONS (not implementations).
    It tells the compiler:
    - What functions exist
    - What parameters they take
    - What they return

    This allows multiple source files to share the same function definitions
    without rewriting code.
*/

// Namespace is used to organize related functions
// and prevent name conflicts in large programs.
namespace MathUtils {

    // Function declaration for addition
    int add(int a, int b);

    // Function declaration for division
    // This function may throw an exception if division by zero occurs
    int divide(int a, int b);

}

#endif  // MATH_UTILS_H
