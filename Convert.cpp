#include<iostream>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

const double KG_TO_LB = 2.2046;
const double LB_TO_KG = 0.4536;
const double L_TO_G = 0.2642;
const double G_TO_L = 3.7854;

vector<string> converted;

string GetLower(string str);
double Solve(double data, string convert);
string DoubleToString(double value);
//int main() {
//	int n;
//
//	double data;
//	string convert;
//	
//	vector<double> result;
//
//	
//	cout << fixed;
//	cout.precision(4);
//
//
//	cin >> n;
//	for (int i = 0; i < n; i++) {
//		cin >> data;
//		cin >> convert;
//		
//		result.push_back(Solve(data, convert));
//
//	}
//
//	for (int i = 0; i < n; i++) {
//		cout << (i + 1) << " " << result[i] << " " << converted[i] << endl;
//	}
//	return 0;
//}
string DoubleToString(double value)
{
	ostringstream ostr;

	ostr.fixed;
	ostr.precision(4);
	ostr << value;
	
	
	return ostr.str();
}
double Solve(double data, string convert) {
	double op = 0.0;

	if (!convert.compare("kg")) {
		op = KG_TO_LB;
		converted.push_back("lb");
	}
	else if (!convert.compare("l")) {
		op = L_TO_G;
		converted.push_back("g");
	}
	else if (!convert.compare("lb")) {
		op = LB_TO_KG;
		converted.push_back("kg");
	}
	else if (!convert.compare("g")) {
		op = G_TO_L;
		converted.push_back("l");
	}

	return data * op;
}
