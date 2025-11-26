/* Problem: The Seven Percent Solution
 * Code: 14
 * Site: acm.hdu.edu.cn
 * Status: Accepted
 * Type: Ad-Hoc - String
 */



#include <iostream>
#include <string>
using namespace std;
int main(int argc, char **argv)
{
	int k, tam;
	string c;
	while(1)
	{
		getline(cin,c);
		if(c.compare("#")==0)
		  break;
		tam=c.length();
		for(k=0;k<tam;k++)
		{
			  switch(c.at(k))
			     {
				    case ' ': cout<<"%20";break;
			    	case '!': cout<<"%21";break;
				    case '$': cout<<"%24";break;
				    case '%': cout<<"%25";break;
			   	    case '(': cout<<"%28";break;
				    case ')': cout<<"%29";break;
				    case '*': cout<<"%2a";break;
				    default : cout<<c.at(k);
			 }
		     
			
		}
		cout<<endl;
	}
	return 0;
}

