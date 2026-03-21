#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int n;
    cin >> n;

    int bonecos = 0, arquitetos = 0, musicos = 0, desenhistas = 0;

    while (n--) {
        string name, group;
        int h;
        cin >> name >> group >> h;

        if (group == "bonecos") {
            bonecos += h;
        } 
        else if (group == "arquitetos") {
            arquitetos += h;
        } 
        else if (group == "musicos") {
            musicos += h;
        } 
        else if (group == "desenhistas") {
            desenhistas += h;
        }
    }

    int total = 0;
    total += bonecos / 8;
    total += arquitetos / 4;
    total += musicos / 6;
    total += desenhistas / 12;

    cout << total << '\n';

    return 0;
}