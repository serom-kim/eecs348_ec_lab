Write a C++ program that reads a string from the user and extracts a valid double-precision floating-point number from it without using library functions like std::stod. The program should handle potential errors in the input and provide clear feedback to the user.

Input:

A string of characters, with a maximum length of 20 (for practical purposes).
The string may contain digits (0-9), a period (.), a plus sign (+), or a minus sign (-).
The string may represent a valid double-precision number (e.g., "-123.456", "12.34", "+0.5", "123").
The string may also contain invalid characters or be formatted incorrectly (e.g., "+-12.34", "12.34+", "12+34", "123abc").

Output:

If the input string represents a valid double-precision number, display: The input is: ########.#### (where ########.#### is the extracted number formatted to four decimal places).
If the input string is invalid or contains non-numeric characters, display: The input is invalid.
Program requirements

Input loop: The main function should continuously prompt the user for input until the user enters "END".
Extraction function: Create a function named extractNumeric that takes the input string as an argument and attempts to extract the numeric value.
If successful, the function should return the double-precision value.
If the input is invalid, the function should return -999999.99.
Display output: when the main function receives the returned value from extractNumeric, it should display the output as specified above.
