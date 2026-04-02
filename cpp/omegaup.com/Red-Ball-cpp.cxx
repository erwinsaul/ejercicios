//ACC
#include <iostream>

using namespace std;


int main(){
    int n;
    string s;
    cin >> n;
    for(int i = 0; i < n; i++){
        cin >> s;
        int tam = s.size()-1;
        int total = 0;
        for(int j = 0; j < s.size(); j++){
            if(s[j] != '0'){
                total = total + 1;
            }            
        }
        cout<<total<<endl;
        for(int j = 0; j < total; j++){
            if(s[j] != '0'){
                cout<<s[j];
                for(int k = 0; k < tam; k++){
                    cout<<'0';
                }
                cout<<" ";
            }
            tam = tam - 1;
        }
        cout<<endl;
    }
}