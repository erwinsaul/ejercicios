#include<iostream>
using namespace std;

int main(){
  int n, h, w;
  cin>>n>>h>>w;
  char go, back;
  for(int i=0;i<n;i++){
    cin>>go>>back;
    if(go=='Y'){
      cout<<"Y ";
      h = h - 1;
      w = w + 1;      
    }
    else{
      if(w==0){
        cout<<"Y ";
        h = h - 1;
        w = w + 1;  
      }
      else{
        cout<<"N ";
      }
    }

    if(back=='Y'){
      cout<<"Y"<<endl;
      h = h + 1;
      w = w - 1;      
    }
    else{
      if(h==0){
        cout<<"Y"<<endl;
        h = h + 1;
        w = w - 1;  
      }
      else{
        cout<<"N"<<endl;
      }
    }
    
  }
  return 0;
}
