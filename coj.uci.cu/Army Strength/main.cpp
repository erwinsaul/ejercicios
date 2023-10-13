/*   Problem: Army Strength
 *   Site: coj.uci.cu
 *   Code: 1011
 */

#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main()
{
vector<int> v1;
vector<int> v2;
int cases,a,i,j,ng,nm,maxg,maxm;
cin>>cases;
//cout<<"\n";
for(i=0;i<cases;i++)
{
cin>>ng>>nm;
for(j=0;j<ng;j++)
{
cin>>a;
v1.push_back(a);
}
for(j=0;j<nm;j++)
{
cin>>a;
v2.push_back(a);
}
//cout<<"\n";
maxg=*max_element(v1.begin(),v1.end());
maxm=*max_element(v2.begin(),v2.end());
if(maxm>maxg)
{
cout<<"MechaGodzilla"<<endl;
}
else
cout<<"Godzilla"<<endl;
v1.clear();
v2.clear();
}
return 0;
}
