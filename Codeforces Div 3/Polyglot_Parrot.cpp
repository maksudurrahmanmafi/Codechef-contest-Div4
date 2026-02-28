#include<bits/stdc++.h>
using namespace std;

int main()
{
    string s;
    while (true)
    {
        if (!getline(cin, s))
            break;

        if (s == "esquerda")
            cout << "ingles" << '\n';
        else if (s == "direita")
            cout << "frances" << '\n';
        else if (s == "nenhuma")
            cout << "portugues" << '\n';
        else if (s == "as duas")
            cout << "caiu" << '\n';
    }
    return 0;
}