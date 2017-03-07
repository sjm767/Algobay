#include<iostream>
#include<vector>
#include<string>

using namespace std;

string Solve(string str);
string getReplaced(string a);
//int main() {
//	int n;
//	string str;
//	vector<string> resultText;
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> str;
//		resultText.push_back(Solve(str));
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << resultText[i] << endl;
//	}
//	return 0;
//}

string Solve(string str) {
	string result;
	string replaced;
	int index = 0;

	while (index < str.length()) {
		if (str[index] == '%') {			
			result.append(getReplaced(str.substr(index + 2, 1)));
			index += 2;
		}
		else {
			result.append(str.substr(index, 1));
		}
		index++;
	}
	
	return result;
}

string getReplaced(string a) {

	if (a == "0") {
		return " ";
	}
	else if (a == "1") {
		return "!";
	}
	else if (a == "4") {
		return "$";
	}
	else if (a == "5") {
		return "%";
	}
	else if (a == "8") {
		return "(";
	}
	else if (a == "9") {
		return ")";
	}
	else if (a == "a") {
		return "*";
	}
}