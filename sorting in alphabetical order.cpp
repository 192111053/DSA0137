#include<bits/stdc++.h>
using namespace std;
void sortString(string &str)
{
sort(str.begin(), str.end());
cout << str;
}
int main()
{
	string s;
	cin >> s;
	sortString(s);
	return 0;
}

