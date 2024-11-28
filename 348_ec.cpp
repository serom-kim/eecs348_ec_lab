
// please apply the points to an exam grade!!! :]

#include <iostream>
#include <iomanip>
#include <string>
#include <cmath>

using namespace std;

double extractNumeric(const string& str) {
    
    double result;
    const char *cur_val = str.c_str();
    const char *first_val = str.c_str();
    const char *decimal_pt = str.c_str();
    int conv_int;
    int loop_int = 0;
    
    if (str[0] == '-' || str[0] == '+') { // if there is a sign in the front
        first_val++;
    }
    
    while (*decimal_pt != '\0') { // locate decimal point
        if (*decimal_pt == '.') {
            break;
        }else {
            decimal_pt++;
        }
    }
    // parse from right to left for integer
    cur_val = decimal_pt;
    while (cur_val != first_val) { 
        cur_val--;
        if (*cur_val >= '0' && *cur_val <= '9'){
            conv_int = *cur_val - '0';
            result += conv_int*pow(10, loop_int);
            loop_int++;
        } else {
            return -999999.99;
        }    
    }
    // parse left to right for decimal
    cur_val = decimal_pt;
    cur_val++;
    loop_int = 1;
    while (*cur_val != '\0'){
        if (*cur_val >= '0' && *cur_val <= '9'){
            conv_int = *cur_val - '0';
            result += conv_int/pow(10, loop_int);
            loop_int++;
            cur_val++;
        } else {
            return -999999.99;
        }
    }
    if (str[0] == '-') { // if user's num is negative
        return result * -1;
    }
    return result;
}

int main()
{
    string input;
    while (true) {
        cout << "Enter a string (or 'END' to quit): ";
        cin >> input;
        
        if (input == "END") {
            break;
        }
        double number = extractNumeric(input); // extract and display numeric val
        
        if (number != -999999.99) {
            cout << "The input is: " << fixed << setprecision(4) 
                 << number << endl;
        } else {
            cout << "The input is invalid." << endl;
        }
    }
    return 0;
}