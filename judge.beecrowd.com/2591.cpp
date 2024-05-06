#include<iostream>

using namespace std;

int main(){
    bool sw=true;
    int a, b, n;
    cin>>n;
    string s;
    while(n--){
        cin>>s;
        sw = true;
        a=0;
        b=0;
        for(int i=0;i<(int)s.length();i++){
            if(s.at(i)=='a'){
                if(sw){
                    a++;
                }
                else{
                    b++;
                }
            }

            if(s.at(i)=='k'){
                sw = false;
            }
        }
        cout<<"k";
        for(int i=0;i<a*b;i++){
            cout<<"a";
        }
        cout<<endl;        
    }
    return 0;
}