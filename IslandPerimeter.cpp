//#include<iostream>
//#include<vector>
//using namespace std;
//
//int islandPerimeter(vector<vector<int>>&grid);
//int main() {
//	vector<vector<int>> grid
//	{
//		{0,0,0,0},
//		{1,1,0,0},
//		{0,1,0,0},
//		{1,1,0,0}
//	};
//	int result = islandPerimeter(grid);
//
//	return 0;
//}
//
//int islandPerimeter(vector<vector<int>>&grid)
//{
//	int count = 0;
//
//	for (int i = 0; i < grid.size(); i++)
//	{
//		for (int j = 0; j < grid[i].size(); j++)
//		{
//			if (grid[i][j] == 1)
//			{
//				//��
//				if (i != 0)
//				{
//					if (grid[i - 1][j] == 0) {
//						count++;
//					}
//				}
//				else 
//				{
//					count++;
//				}
//
//				//��
//				if (j != 0)
//				{
//					if (grid[i][j - 1] == 0)
//					{
//						count++;
//					}
//				}
//				else {
//					count++;
//				}
//				//��
//				if (i != grid.size() - 1)
//				{
//					if (grid[i + 1][j] == 0) {
//						count++;
//					}
//				}
//				else {
//					count++;
//				}
//				//��
//				if (j != grid[i].size() - 1)
//				{
//					if (grid[i][j + 1] == 0) {
//						count++;
//					}
//				}
//				else {
//					count++;
//				}
//			}
//		}
//	}
//	return count;
//}