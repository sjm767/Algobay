//#include<iostream>
//#include<vector>
//#include<algorithm>
//
//#include<climits>
//using namespace std;
//
//vector<double> solve(int c);
//int main()
//{
//	int c;	
//	cin >> c;	
//	//c =1;
//	vector<double> result = solve(c);
//
//	cout.setf(ios::fixed);
//	cout.precision(11);
//	for (int i = 0; i < result.size(); i++)
//	{
//		cout << result[i] << endl;
//	}
//
//	cout << INT_MAX << endl;
//	
//	return 0;
//}
//
//vector<double> solve(int c)
//{
//	int n, l;	
//	vector<double> result;
//	
//	vector<int> bbb;
//	int bb;
//
//
//	vector<vector<int>> sums;
//	vector<int> sumVector;
//	int sum=0;
//	vector<double> avgs;	
//
//	for (int i = 0; i < c; i++)
//	{
//		cin >> n >> l;	
//
//		for (int j = 0; j < n; j++)
//		{
//			cin >> bb;
//			bbb.push_back(bb);
//		}
//		//입력 끝
//
//		//로직 시작
//		for (int j = 0; j < n; j++)
//		{
//			for (int k = j; k < n; k++)
//			{
//				sum += bbb[k];				
//				sumVector.push_back(sum);								
//			}
//			
//			sums.push_back(sumVector);
//			sum = 0;
//			sumVector.clear();			
//		}
//
//		int days = l;
//		int min= INT_MAX;
//		for (int j = l-1; j < n; j++)
//		{
//			for (int k = 0; k <= n - j-1; k++)
//			{
//				if (min > sums[k][j])
//				{
//					min = sums[k][j];
//				}
//			}
//
//			avgs.push_back((double)min / days);
//			days++;
//			min = INT_MAX;
//		}
//
//		std::sort(avgs.begin(), avgs.end());
//
//		result.push_back(avgs[0]);
//		avgs.clear();
//		sums.clear();
//	}
//	return result;
//}