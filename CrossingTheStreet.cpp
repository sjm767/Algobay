//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//using namespace std;
//
//int widestGap(int n, vector<int>start, vector<int>end);
//int main()
//{
//	vector<int> start;
//	vector<int> end;
//	int n = 10;
//
//	start.push_back(1);
//	start.push_back(2);
//	start.push_back(8);	
//
//	end.push_back(2);
//	end.push_back(3);
//	end.push_back(9);
//	
//
//	int result = widestGap(n, start, end);
//	
//	return 0;
//}
//
//int widestGap(int n, vector<int>start, vector<int>end)
//{
//	vector<int> V(n + 1, -1);
//	V[0] = 99;
//
//	for (int i = 0; i < start.size(); i++)
//	{
//		int s, e;
//
//		s = start[i];
//		e = end[i];
//		
//		for (int j = s; j <= e; j++)
//		{
//			V[j] = 0;
//		}
//	}
//
//	vector<int>::iterator iter = std::find(V.begin(), V.end(), -1);
//	auto pos = std::distance(V.begin(), iter);
//	int max = 0;
//
//	while (iter != V.end())
//	{
//		iter = std::find((V.begin() + pos + 1), V.end(), -1);
//		pos = std::distance(V.begin(), iter);
//	}
//	
//
//		
//	
//	
//
//	return 0;
//} 