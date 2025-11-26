#include<iostream>
using namespace std;
int main(){
    long t, x, y, r, b, c;
    cin>>t;
    while(t--){
        cin>>x>>y;
        r = (3*x)*(3*x) + y*y;
        b = 2*x*x + (5*y)*(5*y);
        c = -100*x + y*y*y;
        if (r>b && r>c){
            cout<<"Rafael ganhou"<<endl;
        }
        else if(b>r && b>c){
            cout<<"Beto ganhou"<<endl;
        }
        else{
            cout<<"Carlos ganhou"<<endl;
        }
    }
}