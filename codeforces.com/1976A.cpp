//Accepted
#include<iostream>
using namespace std;


bool letra(char c){
    return c>='a' && c<='z';
}

bool numero(char c){
    return c>='0' && c<='9';
}


bool letras(string s, int n){    
    char c = s.at(0);
    for(int i=1;i<n;i++){
        if(letra(s.at(i)) && c > s.at(i)){            
            return false;
        }
        c = s.at(i);
    }
    return true;
}

bool numeros(string s, int n){
    char c = s.at(0);
    for(int i=1;i<n;i++){
        if(numero(s.at(i)) && c > s.at(i)){
            return false;
        }
        c = s.at(i);
    }
    return true;
}

bool minusculas(string s, int n){    
    for(int i=0;i<n;i++){
        if(s.at(i)>='A' && s.at(i)<='Z'){
            return false;
        }
    }
    return true;
}

bool buscarNumero(string s, int n){
    bool sw = false;
    for(int i=0; i<n; i++){
        if(letra(s.at(i))){
            sw = true;            
        }
        if(numero(s.at(i)) && sw){
            return false;
        }
    }
    return true;
}

int main() {
    #ifdef ONLINE_JUDGE 
        freopen("data.in", "r", stdin);
        freopen("data.out", "w", stdout);
    #endif
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);
    cout.tie(NULL);
    int t, n;
    cin>>t;
    string s;
    while(t--) {
        cin>>n;
        cin>>s;
        if(letras(s, n) && numeros(s, n) && minusculas(s, n) && buscarNumero(s, n) && buscarNumero(s, n)) {
            cout<<"YES"<<endl;
        }
        else {
            cout<<"NO"<<endl;
        }
    }
    return 0;
}