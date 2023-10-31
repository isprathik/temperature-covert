#include <iostream>
using namespace std;

double celsiusToFahrenheit(double celsius) {
    return (celsius * 9.0/5.0) + 32;
}

double fahrenheitToCelsius(double fahrenheit) {
    return (fahrenheit - 32) * 5.0/9.0;
}

int main() {
    char choice;
    double temperature;

    cout << "Temperature Converter" << endl;
    cout << "Choose the conversion type:" << endl;
    cout << "C - Celsius to Fahrenheit" << endl;
    cout << "F - Fahrenheit to Celsius" << endl;
    cin >> choice;

    if (choice == 'C' || choice == 'c') {
        cout << "Enter temperature in Celsius: ";
        cin >> temperature;
        double result = celsiusToFahrenheit(temperature);
        cout << "Temperature in Fahrenheit: " << result << endl;
    } else if (choice == 'F' || choice == 'f') {
        cout << "Enter temperature in Fahrenheit: ";
        cin >> temperature;
        double result = fahrenheitToCelsius(temperature);
        cout << "Temperature in Celsius: " << result << endl;
    } else {
        cout << "Invalid choice. Please select 'C' or 'F'." << endl;
    }

    return 0;
}
