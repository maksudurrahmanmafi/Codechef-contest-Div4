#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    int a, b;
    cin >> a >> b;
    while (b <= 0)
    {
        cin >> b;
    }
    int sum = 0;
    for (int i = 0; i < b; i++)
    {
        sum += (a + i);
    }
    cout<<sum<<endl;

    return 0;
}
