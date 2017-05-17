//#include<iostream>
//#include<string>
//#include<algorithm>
//#include<vector>
//#include<cctype>
//
//using namespace std;
//
//vector<string> findWords(vector<string> &words);
//int main()
//{
//	vector<string> words;
//
//
//	words.push_back("Hello");
//	words.push_back("Alaska");
//	words.push_back("Dad");
//	words.push_back("Peace");
//
//	words = findWords(words);
//
//	return 0;
//}
//vector<string> findWords(vector<string> &words)
//{
//	vector<string> result;
//
//	vector<char> firstRow  { 'q','w','e','r','t','y','u','i','o','p' };
//	vector<char> secondRow { 'a','s','d','f','g','h','j','k','l' };
//	vector<char> thirdRow { 'z','x','c','v','b','n','m' };	
//
//	vector<vector<char>> rows{ firstRow,secondRow,thirdRow };
//
//
//	for (int i = 0; i < words.size(); i++)
//	{
//		vector<char> row;		
//		bool isInRow = true;
//
//		for (int j = 0; j < rows.size(); j++)
//		{
//			//Ã£À½
//			if ((std::find(rows[j].begin(), rows[j].end(), tolower(words[i][0]))) != rows[j].end()) 
//			{
//				row = rows[j];
//				break;
//			}
//		}
//
//		for (int j = 1; j < words[i].size(); j++)
//		{
//			if ((std::find(row.begin(), row.end(), tolower(words[i][j]))) == row.end())
//			{
//				isInRow = false;
//				break;
//			}			
//		}
//
//		if (isInRow)
//		{
//			result.push_back(words[i]);
//		}
//	}
//
//
//	return result;
//}