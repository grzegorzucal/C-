#include <iostream>
#include <math.h>
long double a = 3, b = 4, n, c, x;
int d;

using namespace std;
void Three();
int main()
{
	cin >> n;
	Three();
	return 0;
}
void Three()
{
	while (a <= n)
	{
		for (int i = b; i <= n; i++)
		{
			c = sqrt(a * a + b * b);
			d = int(c);
			x = c - d;
			if (b > a && c <= n && a * a + b * b == c * c && x == 0)
			{
				cout << a << " " << b << " " << c << endl;
			}
			b++;
		}
		a++;
		b = 4;
	}
}
