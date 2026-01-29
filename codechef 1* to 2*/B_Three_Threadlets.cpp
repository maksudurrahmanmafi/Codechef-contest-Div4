#include<iostream>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        if((a==b && a==c) || (a==2*b && b==c) || (a==b && c==2*a) || (a==c && b==2*a) || (a==b && a==2*c) || (a==c && a==2*b) || (b==c && b==2*a) || (a==b && c==3*a) || (a==c && b==3*a) || (b==c && a==3*c) || (a==b && c==4*a) || (a==c && b==4*a) || (b==c && a==4*c) || (a==2*c && b==3*c) || (a==3*c && b==2*c) || (a==2*b && c==3*b) || (a==3*b && c==2*b) || (b==3*a && c==2*a) || (b==2*a && c==3*a)){
            cout<<"YES"<<endl;
        }
            else{
                cout<<"NO"<<endl;
            }
        }
    
    return 0;
}