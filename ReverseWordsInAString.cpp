#include<iostream>
#include<string>
#include<algorithm>

using namespace std;

string reverseWords(string s);
int main()
{
	string str = "apple test";

	reverseWords(str);


	//std::reverse(str.begin(), str.end());

	//cout << str.substr(0, 1) << endl;

	return 0;
}

string reverseWords(string s)
{
	string result;
	string substr;

	while (s.length() > 0)
	{
		int index = s.find(" ", 0);
		if (index == -1)
		{
			index = s.length();
		}

		substr = s.substr(0, index);
		std::reverse(substr.begin(), substr.end());


		if (index == s.length())
		{
			result.append(substr);
			break;
		}
		else {
			result.append(substr + " ");
			s = s.substr(index + 1, s.length());
		}
	}

	return result;
}