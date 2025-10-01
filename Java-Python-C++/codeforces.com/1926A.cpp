#include<iostream>
using namespace std;

int main(int argc, char *argv[]) {
    int t,a,b;
    string s;
    cin>>t;
    while(t--){
        cin>>s;
        a = 0;
        b = 0;
        for(int i=0;i<s.length();i++){
            if(s[i] == 'A'){
                a = a+1;
            }
            else{
                b = b+1;
            }
        }
        if(a>b){
            cout<<"A"<<endl;
        }
        else{
            cout<<"B"<<endl;
        }
    }
    return 0;
}