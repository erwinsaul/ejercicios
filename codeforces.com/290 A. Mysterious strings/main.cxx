/* problem: A. Mysterious strings
 * code: 290
 * site: codeforces.com
 * status: Accepted
 */
#include <bits/stdc++.h>

using namespace std;

int main(int argc, char **argv)
{
    string nombres[]={"Washington","Adams","Jefferson","Madison","Monroe","Adams","Jackson","Van Buren","Harrison","Tyler",
		           "Polk","Taylor","Fillmore","Pierce","Buchanan","Lincoln","Johnson","Grant","Hayes","Garfield","Arthur",
		           "Cleveland","Harrison","Cleveland","McKinley","Roosevelt","Taft","Wilson","Harding","Coolidge","Hoover",
		           "Roosevelt","Truman","Eisenhower","Kennedy","Johnson","Nixon","Ford","Carter","Reagan"};
	int n;
	cin>>n;
	cout<<nombres[n-1];	           
	return 0;
}

