#include<iostream>
#include<string>
#include<stack>

using namespace std;
bool isValid(string s);
int main()
{
	string str = "[";

	cout << isValid(str) << endl;
	return 0;
}

bool isValid(string s)
{
	stack<char> mystack;
	char a;
	for (int i = 0; i < s.size(); i++)
	{
		if ((s[i] == '{') || (s[i] == '[') || (s[i] == '('))
		{
			mystack.push(s[i]);
		}

		else if (mystack.size() == 0)
		{
			return false;
		}
		else if (s[i] == '}')
		{			
			a = mystack.top();
			if (a != '{')
			{
				return false;
			}
			mystack.pop();
		}
		else if (s[i] == ']')
		{
			a = mystack.top();
			if (a != '[')
			{
				return false;
			}
			mystack.pop();
		}
		else if (s[i] == ')')
		{
			a = mystack.top();
			if (a != '(')
			{
				return false;
			}
			mystack.pop();
		}
	}


	if (mystack.size() > 0)
	{
		return false;
	}
	return true;
}