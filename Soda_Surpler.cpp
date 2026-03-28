#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int E, F, C;
    cin >> E >> F >> C;
    int total_bottles = E + F;
    int total_drunk = 0;

    while (total_bottles >= C)
    {
        int new_sodas = total_bottles / C; // কতগুলো সোডা কিনলেন
        total_drunk += new_sodas;          // কতগুলো খেলেন তার হিসাব
        total_bottles = new_sodas + (total_bottles % C);
    }
    cout<<total_drunk<<"\n";
    return 0;
}
