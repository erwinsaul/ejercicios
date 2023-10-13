/*   Problem: Triple Fat Ladies
 *   Code: 1631
 *   Site: coj.uci.cu
 *   Status: Accepted
 */


#include <iostream>

using namespace std;

int main()
{
    unsigned long long int n, res, casos;
    cin>>casos;
    while(casos--)
    {
        cin>>n;
        res=(n-1)*250+192;
        cout<<res<<endl;
    }
    return 0;
}
