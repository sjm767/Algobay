#include<iostream>
#include<vector>
#include<set>
#include<algorithm>
using namespace std;

vector<int> intersection(vector<int> &nums1, vector<int> &nums2);
int main()
{
	vector<int> nums1{ 1,2,2,3 };
	vector<int> nums2{ 2 };

	vector<int> result = intersection(nums1, nums2);

	return 0;
}

vector<int> intersection(vector<int> &nums1, vector<int> &nums2)
{
	vector<int> result;
	set<int> numSets1(nums1.begin(),nums1.end());	
	
	std::sort(nums2.begin(), nums2.end());

	for (set<int>::iterator i = numSets1.begin(); i != numSets1.end(); i++)
	{
		if (std::binary_search(nums2.begin(), nums2.end(), *i))
		{
			result.push_back(*i);
		}
	}
	return result;
}