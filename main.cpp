#include <iostream>     // For cout and endl
#include <stdexcept>    // For runtime_error exceptions
#include "math_utils.h" // Include our custom header file

using namespace std;

/*
    Function IMPLEMENTATIONS are written in source files (.cpp).

    This separation improves:
    - Readability
    - Maintainability
    - Compilation speed in large projects
*/

// Implement functions inside the same namespace
namespace MathUtils {

    int add(int a, int b) {
        return a + b;
    }

    int divide(int a, int b) {
        // Check for division by zero
        if (b == 0) {
            // Throw an exception if division by zero is attempted
            throw runtime_error("Division by zero is not allowed.");
        }
        return a / b;
    }

}

int main() {

    // Successful function calls
    cout << "Addition result: "
         << MathUtils::add(10, 5) << endl;

    // TRY / CATCH block to handle exceptions
    try {
        cout << "Division result: "
             << MathUtils::divide(20, 4) << endl;
    }
    catch (const runtime_error& e) {
        cout << "Error: " << e.what() << endl;
    }

    /*
        Demonstrating division by zero.
        Without try/catch, the program would CRASH and terminate.
        With exception handling, the error is handled safely.
    */
    try {
        cout << "Attempting division by zero..." << endl;
        cout << MathUtils::divide(10, 0) << endl;
    }
    catch (const runtime_error& e) {
        cout << "Caught exception: " << e.what() << endl;
    }

    cout << "Program continues running after handling the error." << endl;

    return 0;
}
