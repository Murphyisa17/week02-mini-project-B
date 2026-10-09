#include <iostream>
using namespace std;

int main()
{
    double temp;
    char unit;
    if (!(cin >> temp >> unit))
    {
        cout << "Invalid input" << endl;
        return 0;
    }
    if (unit != 'C' && unit != 'F' && unit != 'c' && unit != 'f')
    {
        cout << "Invalid unit" << endl;
        return 0;
    }
    else if (unit == 'C' || unit == 'c')
    {
        double fahrenheit = (temp * 9.0 / 5.0) + 32.0;
        cout << temp << " degrees Celsius is " << fahrenheit << " degrees Fahrenheit." << endl;
    }
    else
    {
        double celsius = (temp - 32.0) * 5.0 / 9.0;
        cout << temp << " degrees Fahrenheit is " << celsius << " degrees Celsius." << endl;
    }
}