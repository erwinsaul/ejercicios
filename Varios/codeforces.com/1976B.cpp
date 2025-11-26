#include<iostream>
#include<algorithm>
#include<cmath>
#include<climits>
using namespace std;

int main() {
    int t, n;
    cin>>t;
    while (t--) {
        cin>>n;
        int a[n+1];
        int b[n+1];
        
        for (int i = 0; i < n; i++) {
            cin>>a[i];
        }
        for (int i = 0; i < n+1; i++) {
            cin>>b[i];
        }       
       
        int r = 0;
        for (int i = 0; i < n;i++) {
            r = r + abs(a[i]-b[i]);
        }        
        int ult = b[n];
        bool sw = true;
        for(int i=0; i < n; i++) {
            if((a[i]<=ult && ult<=b[i]) || (b[i]<=ult && ult<=a[i])){                
                r = r + 1 ;
                sw = false;
                break;
            }
        }
        
        int mi =INT_MAX;        
        if(sw){
            for(int i=0; i < n; i++) {
                int t = min(abs(ult-a[i]), abs(ult-b[i]));
                mi = min(mi, t);
            }   
            r = r + mi + 1;
        }

        cout<<r<<endl;
    }
    
    return 0;
}