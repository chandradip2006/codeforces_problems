#include <iostream>
#include <string>

using namespace std;

string multiply_large_numbers(const string& num1, const string& num2) {
    try {
        return to_string(stoll(num1) * stoll(num2));
    } catch (const invalid_argument& e) {
        return "Invalid input. Please enter valid integers.";
    } catch (const out_of_range& e) {
        return "Input numbers are too large.";
    }
}

int main() {
    string num1, num2;
    cin >> num1;
    cin >> num2;
    cout<< multiply_large_numbers(num1, num2) << endl;
    return 0;
}
