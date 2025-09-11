#include <iostream>
using namespace std;

int main(){
    
    double temp;
    char unit;

    cout << "***** Temperature conversion *****\n";
    cout << "F = Fahrenhit\n";
    cout << "C = Celsius\n";
    cout << "What unit would you like to convert to: ";
    cin >> unit;

    if(unit == 'F' || unit == 'f'){
        cout << "Enter the temperature in Celsius: ";
        cin >> temp;

        temp = (1.8 * temp) + 32.0;
        cout << "Temperature is: " << temp << "F\n";
    }
    else if(unit == 'C' || unit == 'c'){
        cout << "Enter the temperature in Fahrenhit: ";
        cin >> temp;

        temp = (temp - 32) / 1.8;
        cout << "Temperature is: " << temp << "C\n";
    }
    else{
        cout << "Please enter in only C or F\n";
    }

    return 0;
}