#include <bits/stdc++.h>
using namespace std;
using ll = long long;

void solve() {
    ll introverts, extroverts, universals;
    cin >> introverts >> extroverts >> universals;

    // extroverts কে পূর্ণ করার জন্য কত universals লাগবে
    ll needExtra = (3 - extroverts % 3) % 3;

    // যদি universals যথেষ্ট না থাকে, তাহলে impossible
    if (extroverts > 0 && needExtra > universals) {
        cout << "-1\n";
        return;
    }

    // universals ব্যবহার করে extroverts পূর্ণ করি
    universals -= needExtra;
    extroverts += needExtra;

    // এখন tent হিসাব করি
    ll tents = introverts;                // প্রতিটি introvert জন্য ১ tent
    tents += extroverts / 3;             // ৩ extroverts এক tent
    tents += (universals / 3);           // universals ৩ করে tent
    if (universals % 3 > 0) tents++;    // বাকি universals জন্য একটি tent

    cout << tents << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}