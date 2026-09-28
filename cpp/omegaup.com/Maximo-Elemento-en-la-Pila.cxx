#include <iostream>
#include <stack>

using namespace std;

int main(){
    stack<int> pila;
    int t, n, m;
    cin>>t;
    for(int i=0;i<t;i++){
        cin>>n;
        if(n==1){
            cin>>m;
            if(pila.empty() || m > pila.top()){
               pila.push(m); 
            }
            else{
                pila.push( pila.top() );
            }
        }
        else if(n==3){
            cout<<pila.top()<<endl;
        }
        else{
            pila.pop();
        }
    }

}