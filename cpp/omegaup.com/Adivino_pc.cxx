#include <iostream>
#include <vector>

using namespace std;

int main(){
    vector<int> v;
    vector<int>::reverse_iterator rit;
    int d;
    while(cin>>d){
        v.push_back(d);
    }

    for( rit = v.rbegin(); rit != v.rend(); rit++ ){
        cout<<*rit<<endl;
    }

    return 0;
}