#include <iostream>
#include <bits/stdc++.h>
using namespace std;
int main()
{
	int a, b;
	cin >> a >> b;
	int y = 0;
	while (1)
	{
		y++;
		a *= 3;
		b *= 2;
		if (a > b)
		{
			cout << y;
			break;
		}
	}
}