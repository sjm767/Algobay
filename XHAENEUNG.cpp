#include<iostream>
#include<map>
#include<string>
#include<algorithm>
#include<vector>
using namespace std;

int calc(int a, int b, char oper);
bool isEqual(string resultValue, string result);

map<string, int> stringToNumMap;
map<int, string> intToStringMap;

void init()
{	
	stringToNumMap.insert(pair<string, int>("zero", 0));
	stringToNumMap.insert(pair<string, int>("one", 1));
	stringToNumMap.insert(pair<string, int>("two", 2));
	stringToNumMap.insert(pair<string, int>("three", 3));
	stringToNumMap.insert(pair<string, int>("four", 4));
	stringToNumMap.insert(pair<string, int>("five", 5));
	stringToNumMap.insert(pair<string, int>("six", 6));
	stringToNumMap.insert(pair<string, int>("seven", 7));
	stringToNumMap.insert(pair<string, int>("eight", 8));
	stringToNumMap.insert(pair<string, int>("nine", 9));
	stringToNumMap.insert(pair<string, int>("ten", 10));

	intToStringMap.insert(pair<int, string>(0, "zero"));
	intToStringMap.insert(pair<int, string>(1,"one"));
	intToStringMap.insert(pair<int, string>(2,"two"));
	intToStringMap.insert(pair<int, string>(3,"three"));
	intToStringMap.insert(pair<int, string>(4,"four"));
	intToStringMap.insert(pair<int, string>(5,"five"));
	intToStringMap.insert(pair<int, string>(6,"six"));
	intToStringMap.insert(pair<int, string>(7,"seven"));
	intToStringMap.insert(pair<int, string>(8,"eight"));
	intToStringMap.insert(pair<int, string>(9,"nine"));
	intToStringMap.insert(pair<int, string>(10,"ten"));	
}
bool solve(string first,string second,char oper,string result)
{
	int firstInt, secondInt;
	string resultValue;
	firstInt = stringToNumMap[first];
	secondInt = stringToNumMap[second];
	resultValue = intToStringMap[(calc(firstInt, secondInt, oper))];

	return isEqual(resultValue, result);	
}

int calc(int a, int b,char oper)
{
	int result;
	switch (oper)
	{
	case '+':
		result = a + b;
		break;
	case '-':
		result = a - b;
		break;
	case '*':
		result = a * b;
		break;
	case '/':
		result = a / b;
		break;
	}

	return result;
}
bool isEqual(string resultValue, string result)
{
	sort(resultValue.begin(), resultValue.end());
	sort(result.begin(), result.end());

	if (resultValue == result)
	{
		return true;
	}

	return false;
}
int main() {
	int n=1;	
	string first, second,result;	
	char oper,equal;	
	cin >> n;	
	vector<string> resultText;
	int index = 0;
	init();

	for (int i = 0; i < n; i++) {
		cin >> first >> oper >> second >> equal >> result;
		if (solve(first, second, oper, result))
		{
			resultText.push_back("Yes");
		}
		else
		{
			resultText.push_back("No");
		}
	}

	for (int i = 0; i<resultText.size(); i++)
	{ 
		cout << resultText[i] << endl;
	}	

	return 0;
}