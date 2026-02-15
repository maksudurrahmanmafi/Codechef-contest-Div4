#include <iostream>
using namespace std;

int main() {
    string date;
    cin >> date;   // read whole string

    string dd = date.substr(0,2);
    string mm = date.substr(3,2);
    string yy = date.substr(6,2);
    cout << mm << "/" << dd << "/" << yy << endl;
    cout << yy << "/" << mm << "/" << dd << endl;
    cout << dd << "-" << mm << "-" << yy << endl;

    return 0;
}
