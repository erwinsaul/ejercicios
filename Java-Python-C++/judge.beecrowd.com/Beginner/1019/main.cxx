/*  Problem: Banknotes
 *  Code: 1019
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted 
 *  Type: Beginner - 1
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
    int h,m,s;
    cin>>s;
    h=s/3600;
    s=s%3600;	
    m=s/60;
    s=s%60;
    cout<<h<<":"<<m<<":"<<s<<endl;
	return 0;
}

