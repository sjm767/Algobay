//#include<iostream>
//#include<vector>
//#include<string>
//#include<algorithm>
//#include<sstream>
//using namespace std;
//void superStack(vector<string> operations);
//int main()
//{
//
//	vector<string> items;
//	items.push_back("push 4");
//	items.push_back("pop");
//	items.push_back("push 3");
//	items.push_back("push 5");
//	items.push_back("push 2");
//	items.push_back("inc 3 1");
//	items.push_back("pop");
//	items.push_back("push 1");
//	items.push_back("inc 2 2");
//	items.push_back("push 4");
//	items.push_back("pop");
//	items.push_back("pop");
//
//	superStack(items);
//
//
//	return 0;
//}
//
//void superStack(vector<string> operations)
//{
//	vector<string> items; 
//	int itemIndex = -1;
//	vector<int> superStack;
//
//	for (int i = 0; i < operations.size(); i++)
//	{
//		string item;
//		stringstream ss(operations[i]);
//
//		while (getline(ss, item, ' '))
//		{
//			items.push_back(item);
//		}		
//
//		if (items[0] == "push")
//		{
//			superStack.push_back(atoi(items[1].c_str()));
//			itemIndex++;
//			cout << superStack[itemIndex] << endl;			
//		}
//		else if (items[0] == "pop")
//		{
//			superStack.erase(superStack.end()-1);			
//			itemIndex--;
//			if (superStack.size() ==0)
//			{
//				cout << "EMPTY" << endl;
//			}
//			else
//			{				
//				cout << superStack[itemIndex] << endl;
//			}
//		}
//		else
//		{
//			int targetIndex = atoi(items[1].c_str());
//			int num = atoi(items[2].c_str());
//
//			
//			for (int j = 0; j < targetIndex; j++)
//			{
//				superStack[j] += num;
//			}
//
//			cout << superStack[itemIndex] << endl;		
//		}
//
//
//		items.clear();
//	}
//
//
//}
//
//
