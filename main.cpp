#include <iostream>
#include <string>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
	vector<int> intVector;
	const int k = 10;

	for (int i = k; i > 0; i--)
	{
		intVector.push_back(i);
	}

	sort(intVector.begin(), intVector.end());

	for (int j = 0; j < k; j++)
	{
		cout << intVector[j] << "\n" << endl;
	}

	system("pause");
	return 0;
}