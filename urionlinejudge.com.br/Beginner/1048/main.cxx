/*  Problem: Salary Increase
 *  Code: 1048
 *  Site: www.urionlinejudge.com.br
 *  Status: Accepted
 *  Type: Beginner - 1
 */

#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	double s;
	double p,sn;
    cin>>s;
    if(s>0 && s<=400.00)
       p=15;
    if(s>400.00 && s<=800.00)
       p=12;
    if(s>800.00 && s<=1200.00)
       p=10;
    if(s>1200.00 && s<=2000.00)
       p=7;
    if(s>2000.00)
       p=4;
    sn=s*(p/100.00);
    cout.precision(2);
    cout.setf(ios::fixed);
    cout<<"Novo salario: "<<(s+sn)<<endl;
    cout<<"Reajuste ganho: "<<sn<<endl;
    cout.precision(0);
    cout.setf(ios::fixed);
    cout<<"Em percentual: "<<p<<" %"<<endl;
    
	return 0;
}

