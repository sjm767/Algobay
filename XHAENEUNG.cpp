#include<iostream>
#include<map>
#include<string>
#include<algorithm>

using namespace std;

map<string, int> matching;
map<int,string> matchingResult;
//
//int getResult(int a, char op, int b);
//int main() {
//
//	matching.insert(std::pair<string, int>("zero", 0));
//	matching.insert(std::pair<string, int>("one", 1));
//	matching.insert(std::pair<string, int>("two", 2));
//	matching.insert(std::pair<string, int>("three", 3));
//	matching.insert(std::pair<string, int>("four", 4));
//	matching.insert(std::pair<string, int>("five", 5));
//	matching.insert(std::pair<string, int>("six", 6));
//	matching.insert(std::pair<string, int>("seven", 7));
//	matching.insert(std::pair<string, int>("eight", 8));
//	matching.insert(std::pair<string, int>("nine", 9));
//	matching.insert(std::pair<string, int>("ten", 10));
//
//	matchingResult.insert(std::pair<int, string>(0,"zero"));
//	matchingResult.insert(std::pair<int, string>(1,"one"));
//	matchingResult.insert(std::pair<int, string>(2,"two"));
//	matchingResult.insert(std::pair<int, string>( 3,"three"));
//	matchingResult.insert(std::pair<int, string>( 4,"four"));
//	matchingResult.insert(std::pair<int, string>(5,"five"));
//	matchingResult.insert(std::pair<int, string>(6,"six"));
//	matchingResult.insert(std::pair<int, string>( 7, "seven"));
//	matchingResult.insert(std::pair<int, string>( 8, "eight"));
//	matchingResult.insert(std::pair<int, string>( 9,"nine"));
//	matchingResult.insert(std::pair<int, string>( 10,"ten"));
//
//	int n;
//	string a, b,result;
//	char oper,equal;
//
//	cin >> n;	
//
//	for (int i = 0; i < n; i++) {
//		cin >> a >> oper >> b >> equal >> result;
//
//		int resultInt = getResult(matching[a], oper, matching[b]);	
//
//		string target = matchingResult[resultInt];
//		
//		int ct = 0;
//		int targetCt = result.length();
//		int k = 0;
//		
//		for (int j = 0; j < result.length(); j++) {
//			while (k < target.length()) {
//				bool isEqu;			
//				isEqu = result[j] == target[k];
//
//				if (isEqu == 1) {
//					ct++;
//					break;
//				}
//				k++;
//			}
//
//			k = 0;
//		}
//		
//		if (targetCt == ct) {
//			cout << "Yes" << endl;
//		}
//		else {
//			cout << "No" << endl;
//		}		
//	}
//
//
//	return 0;
//}
//int getResult(int a, char op, int b) {
//	
//	switch (op) {
//	case '+':
//		return a + b;
//		break;
//	case '-':
//		return a - b;
//		break;
//	case '*':
//		return a * b;
//		break;
//	case '/':
//		return a / b;
//		break;
//	}
//}