#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
//
//int main() {
//	int n;
//	vector<string> text;
//	vector<string> result;
//	string str;
//	string strResult;
//	cin >> n;		
//	
//	for (int i = 0; i < n; i++) {
//		cin >> str;
//		for (int j = 0; j < str.length(); j += 2) {
//			text.push_back(str.substr(j, 2));
//		}
//		std::sort(text.begin(), text.end());
//
//		for (int j = 0; j < text.size(); j++) {			
//			strResult.append(text[j]);						
//		}
//
//		result.push_back(strResult);
//		text.clear();
//		str.clear();
//		strResult.clear();
//	}	
//
//	for (int i = 0; i < n; i++) {
//		cout << result[i] << endl;
//	}	
//	
//	return 0;
//}

//bool isBiggerA(string a, string b) {
//	int j = 0;
//	int k = 0;
//
//	while (true) {
//
//		if (a[j] == b[k]) {
//			j++;
//			k++;
//		}
//		else if (a[j] < b[k]) {
//			return false;
//		}
//		else {
//			return true;
//		}
//
//		if (j == a.length() || k == b.length()) {
//			return true;
//		}
//	}
//}

