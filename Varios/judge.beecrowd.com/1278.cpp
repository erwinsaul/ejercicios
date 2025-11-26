#include <iostream>
#include <sstream>
#include <algorithm>
#include <string>

using namespace std;

int main(){
    int n;
    string v[100];
    string s, r;
    bool f = true;
    int m;
    bool sw = false;
    while(cin>>n && n){
        if(sw){
            cout<<endl; 
        }
        sw = true;
        getline(cin, s);
        m = -1;
        for(int i=0;i<n;i++){            
            getline(cin, s);
            stringstream ss(s);
            r = "";
            f = false;
            while(ss>>s){
                if(f){
                    r = r+" ";
                }
                f = true;
                r = r + s;
            }
            v[i]=r;
            m = max(m, (int)r.size());
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<m-v[i].size();j++){
                cout<<" ";
            }
            cout<<v[i]<<endl;            
        }                       
    }
    return 0;
}