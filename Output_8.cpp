#include <iostream>
#include <iomanip> // fixed এবং setprecision এর জন্য

using namespace std;

int main()
{
    double a = 234.345;
    double b = 45.698;

    cout << fixed << setprecision(6) << a << " - " << b << endl;

    cout << fixed << setprecision(0) << a << " - " << b << endl;

    cout << fixed << setprecision(1) << a << " - " << b << endl;

    cout << fixed << setprecision(2) << a << " - " << b << endl;

    cout << fixed << setprecision(3) << a << " - " << b << endl;

    cout << scientific << setprecision(6) << a << " - " << b << endl;

    cout << uppercase << scientific << setprecision(6) << a << " - " << b << endl;

    cout << nouppercase << defaultfloat << a << " - " << b << endl;

    cout << uppercase << defaultfloat << a << " - " << b << endl;

    return 0;
}