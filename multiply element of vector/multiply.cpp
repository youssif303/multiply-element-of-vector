#include<iostream>
#include <vector>
using namespace std;
int grow(std::vector<int> nums) {
	int result = 1;
	for (int i = 0; i < nums.size(); i++)
	{
		result *= nums[i];
	}
	return result;
}
int main()
{
	cout << grow({1,2,5,3});
	return 0;
}