#include "header.h"



int gcd(int a, int b)
{
	if(a!=b)
	{
		if(a>b)
			gcd(a-b,b);
		else
			gcd(a,b-a);
	}
	else
		return a;
}
/* FAST
private static long gcd2(long x, long y) {
    while (x * y != 0) {
        if (x >= y) x = x % y;
        else y = y % x;
    }
    return (x + y);
}
*/
int main()
{
	int z;
	z = gcd(2,10);
	cout << z;
	system("pause");
	return 0;
}