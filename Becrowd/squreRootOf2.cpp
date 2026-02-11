#include <bits/stdc++.h>
using namespace std;

int main() {
    int N;
    cin >> N;
    double value = 0.0;
    for (int i = 0; i < N; i++) {
        value = 1.0 / (2.0 + value);
    }
    double result = 1.0 + value;
    cout << fixed << setprecision(10) << result << endl;
    return 0;
}
