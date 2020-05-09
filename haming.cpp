#include <iostream>;
#include <vector>
using namespace std;


int main()
{
	
	string s1;
	cout << "Input first word: ";
	cin >> s1;
	vector<char> v1(s1.begin(), s1.end());
	string s2;
	cout << "Input second word: ";
	cin >> s2;
	vector<char> v2(s2.begin(), s2.end());
	if (v1.size() != v2.size()) {
		cout << "Words must be the same length";
		return 0;
	}

	int haming = 0;
	for (int i = 0; i < v1.size(); i++) {
		if (v1[i] != v2[i]) {
			haming++;
		}
	}
	cout << "Haming = " << haming;
	return 0;
}
