#include<iostream>
#include<sstream>

using namespace std;

int main(){
    int c, a, b;
    string s, aux;
    stringstream ss;
    cin>>c;
    while(c--){
        cin>>a>>b;
        s = "";
        for(int i=a;i<=b;i++){
            ss << i;
            aux = ss.str();
            s = s + aux;
            ss.str("");
        }
        s = s + string(s.rbegin(),s.rend());
        cout<<s<<endl;
    }
    return 0;
}