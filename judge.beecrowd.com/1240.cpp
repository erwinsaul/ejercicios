#include<iostream>
using namespace std;

bool solve(long long a, long long b){
    if(a<b){
      return false;
    }
    else if(a==b){
      return true;
    }
    else{
      while(b>0){
        if(b%10!=a%10){
          return false;
        }
        a = a / 10;
        b = b / 10;        
      }
    }
    return true;
}

int main(){
  int t;
  long long a,b;
  cin>>t;
  while(t--){
    cin>>a>>b;
    if(solve(a,b)){
      cout<<"encaixa"<<endl;
    }
    else{
      cout<<"nao encaixa"<<endl;
    }
  }
  return 0;
}
