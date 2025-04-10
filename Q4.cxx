#include <iostream>
using namespace std;
int main()
{
    int decimal, num;
    cout << "Enter a decimal number: ";
    cin >> decimal;
    num = decimal;
    string binary = "";
    if (num == 0)
    {
        binary = "0";
    }
    else
    {
        if (num < 0)
            num = -num;
        while (num > 0)
        {
            binary = char((num % 2) + '0') + binary;
            num = num / 2;
        }
        if (decimal < 0)
            binary = "-" + binary;
    }
    num = decimal;
    string octal = "";
    if (num == 0)
    {
        octal = "0";
    }
    else
    {
        if (num < 0)
            num = -num;
        while (num > 0)
        {
            octal = char((num % 8) + '0') + octal;
            num = num / 8;
        }
        if (decimal < 0)
            octal = "-" + octal;
    }
    cout << "Binary: " << binary << endl;
    cout << "Octal: " << octal << endl;
    return 0;
}