//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<sstream>
//
//using namespace std;
//string rollingString(string s, vector<string>operations);
//int main()
//{
//	
//	vector<string> operations;
//	operations.push_back("0 0 L");
//	operations.push_back("2 2 L");
//	operations.push_back("0 2 R");
//	
//
//	cout << rollingString("abc", operations) << endl;
//
//	//int num = atoi(a[0].c_str());
//
//	//char aaa = 'a';	
//	//
//	//string bbb = "abc";
//
//	//bbb[1] = (char)(bbb[1] + 1);
//
//	return 0;
//}
//
//
//string rollingString(string s, vector<string>operations)
//{
//	vector<string> aa;
//
//	for (int i = 0; i < operations.size(); i++)
//	{
//		std::istringstream ss(operations[i]);
//		string token;
//
//		while (std::getline(ss, token, ' ')) {
//			aa.push_back(token);
//		}
//
//		int start, end, direction;		
//
//		start = atoi(aa[0].c_str());
//		end = atoi(aa[1].c_str());
//		direction = aa[2] == "L" ? -1 : 1;
//
//		for (int j = start; j <= end; j++)
//		{
//			if (s[j] == 'a' && direction == -1)
//			{
//				s[j] = 'z';
//			}
//			else if (s[j] == 'z' && direction == 1)
//			{
//				s[j] = 'a';
//			}
//			else {
//				s[j]=(char)(s[j] + direction);
//			}
//		}
//
//		aa.clear();
//	}
//
//	return s;
//}