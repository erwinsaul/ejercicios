#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<string> pila;
    string s;
    while(true){
        cin>>s;
        if(s=="#"){
            break;
        }
        pila.push(s);
    }

    while(!pila.empty()){
        cout<<pila.top()<<endl;
        pila.pop();
    }
    return 0;
}