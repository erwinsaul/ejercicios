#include <iostream>
using namespace std;
int main(int argc, char **argv)
{
	long double num;
	scanf("%LE", &num);
	printf("%+.4LE\n", num);
	return 0;
}
