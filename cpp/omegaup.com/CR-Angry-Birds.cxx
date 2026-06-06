#include <iostream>
#include <algorithm>

using namespace std;

int main(){
    string s;
    int total = 0;
    while(cin>>s){
        //total = total + count(s.begin(), s.end(), 'o');
        for(int i=0;i<s.length();i++){
            //total = total + (s.at(i) == 'o' ? 1 : 0);
            if(s[i] == 'o'){
                total = total + 1;
            }
        }       
    }
    cout<<total;
    return 0;
}