#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int min(int x, int y, int z)
{
	return min(min(x, y), z);
}

int levi(string str1, string str2, int m, int n)
{
	if (m == 0)
		return n;

	if (n == 0)
		return m;
 
	if (str1[m - 1] == str2[n - 1])
		return levi(str1, str2, m - 1, n - 1);
	 
	return 1 + min(levi(str1, str2, m, n - 1),
		levi(str1, str2, m - 1, n),
		levi(str1, str2, m - 1, n - 1)
	);
}


int main()
{
	cout << "Input first string: ";
	string str1;
	cin >> str1;
	cout << "Input second string: ";
	string str2;
	cin >> str2;
	
	cout << levi(str1, str2, str1.length(), str2.length());

	return 0;
}