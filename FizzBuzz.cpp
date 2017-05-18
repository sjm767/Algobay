//#include<iostream>
//#include<algorithm>
//#include<vector>
//#include<string>
//
//using namespace std;
//vector<string> fizzBuzz(int n);
//int main()
//{
//	vector<string> result = fizzBuzz(15);
//	return 0;
//}
//
//vector<string> fizzBuzz(int n)
//{
//	vector<string> fizzBuzz{ "Fizz","Buzz" };
//	vector<string>result;
//	string str;
//
//	int index = 1;
//	while (index <= n)
//	{
//		if (index % 3 == 0)
//		{
//			str.append(fizzBuzz[0]);
//		}
//		if (index % 5 == 0)
//		{
//			str.append(fizzBuzz[1]);
//		}
//
//		else if ((index % 3 != 0) && (index % 5 != 0))
//		{
//			str = std::to_string(index);
//		}
//
//
//		result.push_back(str);
//		str.clear();
//		index++;
//	}
//	return result;
//}