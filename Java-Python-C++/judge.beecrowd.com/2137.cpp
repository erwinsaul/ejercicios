#include<iostream>
#include<algorithm>
#include<vector>

using namespace std;

int main(){
    int n;
    vector<string> v;
    string s;
    while(cin>>n){
        for(int i=0;i<n;i++){
            cin>>s;
            v.push_back(s);
        }
        sort(v.begin(), v.end());
        for(int i=0;i<n;i++){
            cout<<v[i]<<endl;
        }
        v.clear();
    }
    return 0;
}