//Accepted
#include<iostream>
using namespace std;
int main(){
    int v[] = {6, 2, 5, 5, 4, 5, 6, 3, 7, 6};
    int t, r;
    string s;
    cin>>t;
    for(int i = 0;i<t; i++){
        cin>>s;
        r = 0;
        for(int j=0;j<s.length();j++){
            r = r + v[ s.at(j)-'0' ]; 
        }
        cout<<r<<" leds"<<endl;
    }

    return 0;
}