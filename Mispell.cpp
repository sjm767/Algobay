#include<iostream>
#include<string>
#include<vector>
#include<map>
using namespace std;

class Texts {
public:
	int index;
	string text;


};

int main(string args[]) {
	int n;
	int index;
	string text;

	map<int, string> texts;

	cin >> n;
	cin.clear();
	cin.ignore(256, '\n');

	for (int i = 0; i < n; i++) {		
		getline(cin, text);

		texts.insert(pair<int, string>(text[0], text.substr(2)));		
	}

	for (int i = 0; i < texts.size(); i++) {
		cout << texts[i] << endl;
	}
	
	//vector<string> texts;
}