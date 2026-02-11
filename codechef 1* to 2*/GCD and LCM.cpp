/* #include <bits/stdc++.h>
using namespace std;

long long int GCD(long long int a, long long int b) {
   return __gcd(a, b); // O(log(min(a,b)))
}

long long int LCM(long long int a, long long int b) {
   // return ((a * b) / __gcd(a, b)); // O(log(min(a,b)))
   return (a / __gcd(a, b)) * b;
}

int main() {
   ios::sync_with_stdio(false);
   cin.tie(nullptr);

   long long int a, b;
   cin >> a >> b;
   cout << GCD(a, b) << " "<<LCM(a, b)<<'\n';
//    cout <<  << '\n';
   return 0;
} */