/* Problem: Equal Sum
 * Code: 1685
 * Site: coj.uci.cu
 * Type: Ad-hoc / Math / String / Bool
 * Status: Accepted
 */
 
#include <iostream>
#include <string.h>
#include <stdio.h>
#include <map>

using namespace std;

int main()
{
    int n,d,r,x, i;
    scanf("%d",&n);
    map<int,bool> m;
    map<int,bool>::iterator it;
    map<int,bool>::iterator f;
    for(int k=0;k<n;k++)
    {
      scanf("%d",&d);
      m[d]=true;
    }
    r=0;
    scanf("%d",&x);

     for ( it=m.begin() ; it != m.end(); it++ )
     {
              i=(int)(*it).first;
              i=x-i;
              f=m.find(i);
              if(f!=m.end())
                 r++;
     }
     printf("%d",r/2);
    return 0;
}
