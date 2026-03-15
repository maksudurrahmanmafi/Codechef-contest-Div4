#include <bits/stdc++.h>
using namespace std;
 
int main() {
 
    int x;
    int y;
    int z;
    cin>>x>>y>>z;
    int a = x -(y+z);
    cout<<max({y,z,a})<<endl;
 
    return 0;
}