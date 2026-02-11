
#include <iostream>
#include<algorithm>
using namespace std;

int main() 
{
    int t;
    cin >> t;
    while (t--) 
    {
        int b, c, h;
        cin >> b >> c >> h;

        int f = c + h;
        int k = min(f, b - 1);
        int layers = 2 * k + 1;

        cout << layers << endl;
    }
    return 0;
}

