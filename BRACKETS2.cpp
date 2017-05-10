//#include<iostream>
//#include<fstream>
//#include<string>
//#include<vector>
//#include<stack>
//using namespace std;
//
//string Solve(string text);
//char GetTargetBracket(char bracket);
//
//vector<string> result;
//int main()
//{
//	ifstream cin("in.txt");
//	ofstream cout("out.txt");
//
//	int cs; cin >> cs;
//	while (cs--)
//	{
//		string text; cin >> text;
//		cout << Solve(text) << endl;
//	}
//
//	//int n;
//	//string text;
//	//cin >> n;
//
//	//for (int i = 0; i < n; i++)
//	//{
//	//	cin >> text;
//	//	result.push_back(Solve(text));
//	//}
//
//	//for (int i = 0; i < result.size(); i++)
//	//{
//	//	cout << result[i] << endl;
//	//}
//	//
//	return 0;
//}
//
//string Solve(string text)
//{
//	char currentBracket,targetBracket;	
//	int index = 0;
//	stack<char> bracketStack;
//	
//	while (index < text.size())
//	{		
//		targetBracket = text[index];
//
//		if (bracketStack.empty())
//		{
//			bracketStack.push(text[index]);
//			index++;
//			continue;
//		}
//		else if(!bracketStack.empty())
//		{
//			currentBracket = bracketStack.top();
//		}
//
//		if (GetTargetBracket(currentBracket) == targetBracket)
//		{
//			bracketStack.pop();						
//		}
//		else
//		{
//			bracketStack.push(text[index]);			
//		}
//		index++;
//	}
//
//	if (bracketStack.empty()) {
//		return "YES";
//	}
//	else
//	{
//		return "NO";
//	}
//}
//
//char GetTargetBracket(char bracket)
//{
//
//	switch (bracket)
//	{
//	case '(':
//		return ')';		
//	case '{':
//		return '}';
//	case '[':
//		return ']';			
//	}
//}