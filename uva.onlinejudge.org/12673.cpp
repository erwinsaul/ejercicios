#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int n, g, r, s, p;
    vector<int> v;
    while(cin>>n>>g) {        
        p = 0;
        v.clear();
        for(int i=0;i<n;i++){
            cin>>s>>r;
            if(s>r){ //se gana
                p = p + 3 ;
            }
            else if(s==r){ // se empata se busca desempatar
                if(g>0){
                    p = p + 3 ;
                    g = g - 1;
                }else{
                    p = p + 1; //no puedo desempatar entonces anoto 1 punto
                }               
            }
            else{ // se pierde entonces se almacena en el vector lo que necesito para ganar
                v.push_back(r-s);
            }
        }        
        //Ordeno el vector de diferencias de menor a mayor
        sort(v.begin(), v.end());        
        //buscare los partidos que puedo ganar o al menos empatar
        for(int i=0;i<v.size();i++){
            if(g>v[i]){ //puedo hacerle ganar este partido
                p = p + 3;
                g = g - (v[i]+1);
            }
            else if(g==v[i]){// le hare empatar si no puede ganar
                p = p + 1;
                g = g - v[i];
            }
        }
        cout<<p<<endl;        
    }
    return 0;
}