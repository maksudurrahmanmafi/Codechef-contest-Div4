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

        // গুরুত্বপূর্ণ অংশ:
        // নতুন সোডা খেয়ে যে খালি বোতল পেলেন (new_sodas)
        // আর সোডা কেনার পর যে কয়টা বোতল হাতে রয়ে গিয়েছিল (total_bottles % C)
        // এই দুইটা যোগ হয়ে পরের বারের জন্য 'টোটাল বোতল' হবে।
        total_bottles = new_sodas + (total_bottles % C);
    }
    cout<<total_drunk<<"\n";
    return 0;
}
