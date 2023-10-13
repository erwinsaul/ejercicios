/* Problem: Maximum Sum Sequece
 * Code: 002
 * Site: http://judge.u-aizu.ac.jp
 * Status: Accepted
 * Type: Programacion Dinamica
 */


#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;
	
int main(int argc, char **argv)
{
	int n, a;
	vector<int> v,s(10001);
	while(1)
	{
	  cin>>n;
	   fill(s.begin(),s.end(),0);
	  if(n==0)
	    break;
	
	  
	  for(int k=0;k<n;k++)
	  {
		  cin>>a;
		  v.push_back(a);
	  }
	
	  for(int i = 0; i < n; i++)
	  {
         int sum = 0;
        for(int j = i; j < n; j++)
        {
          sum += v[j];
          s.push_back(sum);
        }
      } 
      int d = *max_element(s.begin(),s.end());
	  cout<<d<<endl;
	   s.clear(),v.clear();
    }
	return 0;
}

