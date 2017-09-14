//#include<iostream>
//#include<algorithm>
//#include<vector>
//
//using namespace std;
//int lonelyInteger(vector<int> arr);
//int main()
//{
//	vector<int> a;
//	a.push_back(1);
//	a.push_back(1);
//	a.push_back(2);
//	
//
//
//	cout << lonelyInteger(a) << endl;
//	return 0;
//}
//
//int lonelyInteger(vector<int> arr)
//{
//	int result = 0;
//	sort(arr.begin(), arr.end());	
//	vector<int> aa;
//	aa.resize((int)(arr.size()));
//
//	std::copy(arr.begin(), arr.end(), aa.begin());
//
//	auto pos = std::unique(arr.begin(), arr.end());	
//	arr.erase(pos, arr.end());
//
//	for (int i = 0; i < arr.size(); i++)
//	{
//		if (std::count(aa.begin(), aa.end(), arr[i]) < 2)
//		{
//			result = arr[i];
//		}
//	}	
//
//	return result;
//}