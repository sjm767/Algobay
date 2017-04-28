#include<iostream>
#include<string>
#include<vector>
#include <algorithm> 
#include <functional> 
#include <cctype>
#include <locale>
using namespace std;

int GetEndDayOfMonth(int month);
int GetDayNumByDay(string day);
int GetPrevMonth(int month);
int GetNextMonth(int month);
void Solve(int month,int date,string day);
void rtrim(std::string &s);

vector<string> result;
int main()
{
	int n;
	int month, date;
	string day;

	cin >> n;
	for (int i = 0; i < n; i++)
	{
		cin >> month >> date >> day;
		Solve(month, date, day);
	}

	for (int i = 0; i < result.size(); i++)
	{
		cout << result[i] << endl;
	}
	return 0;
}
void Solve(int month,int date,string day)
{
	int minusDay;
	int currentDay,currentMonth;
	int endDayOfMonth;
	string textResult;

	minusDay = GetDayNumByDay(day);	
	
	currentDay = date - minusDay;
	currentMonth = month;
	endDayOfMonth = GetEndDayOfMonth(currentMonth);

	for (int i =0; i < 7; i++)
	{
		if (currentDay < 1)
		{
			currentMonth = GetPrevMonth(currentMonth);
			endDayOfMonth = GetEndDayOfMonth(currentMonth);
			currentDay = endDayOfMonth - ((date-minusDay)*-1);
		}
		if (currentDay > endDayOfMonth)
		{
			currentMonth = GetNextMonth(currentMonth);
			currentDay = 1;			
		}
		textResult.append(to_string(currentDay));		
		textResult.append(" ");
		
		currentDay++;
	}
	rtrim(textResult);

	result.push_back(textResult);

}
int GetEndDayOfMonth(int month)
{
	switch (month)
	{
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
		return 31;

	case 2:
		return 28;
	case 4:
	case 6:
	case 9:
	case 11:
			return 30;
	}
}

int GetDayNumByDay(string day)
{
	if (day == "Sunday")
	{
		return 0;
	}
	else if (day == "Monday") 
	{
		return 1;
	}
	else if (day == "Tuesday")
	{
		return 2;
	}
	else if (day == "Wednesday")
	{
		return 3;
	}
	else if (day == "Thursday")
	{
		return 4;
	}
	else if (day == "Friday")
	{
		return 5;
	}
	else if (day == "Saturday")
	{
		return 6;
	}
}
int GetPrevMonth(int month)
{
	if (month == 1)
	{
		return 12;
	}
	else
	{
		return month - 1;
	}
}
int GetNextMonth(int month)
{
	if (month == 12)
	{
		return 11;
	}
	else
	{
		return month + 1;
	}
}
void rtrim(std::string &s) {
	s.erase(std::find_if(s.rbegin(), s.rend(),
		std::not1(std::ptr_fun<int, int>(std::isspace))).base(), s.end());
}