#include <iostream>
#include <sstream>
#include <vector>
using namespace std;

int main(){
    string s,s1, sn, r;
    getline(cin,s);
    getline(cin,s1);
    getline(cin,sn);
    vector<string> v;
    if(sn=="nao"){
        cout<<s<<" "<<s1<<endl;
    }
    else{
        stringstream ss(s);
        while(ss>>r){
            if(r!=sn){
                v.push_back(r);
            }
            else{
                break;
            }
        }

        ss.clear();
        ss.str(s1);
        while(ss>>r){
            v.push_back(r);                      
        }
        ss.clear();
        ss.str(s);
        bool sw = false;        
        while(ss>>r){
            if(r==sn){
                sw = true;
            }        
            if(sw){
                v.push_back(r);
            }    
        }
        sw = false;
        for(int i=0;i<v.size();i++){
            if(sw){
                cout<<" ";
            }
            sw = true;
            cout<<v[i];
        }
        cout<<endl;
    }    
    return 0;
}