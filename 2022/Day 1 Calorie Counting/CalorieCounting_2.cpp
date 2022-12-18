#include <iostream>
#include <fstream>
#include <vector>
#include <algorithm>
int main()
{
	std::ifstream input("input.txt");
	std::string line;
	std::vector<int> topThreeElves(3);
	int calories = 0;
	while(getline(input, line))
	{
		if (!line.empty())
			calories += std::stoi(line);
		else
		{
			if (calories > topThreeElves.back())
			{
				topThreeElves.pop_back();
				topThreeElves.push_back(calories);
				sort(topThreeElves.begin(), topThreeElves.end(), std::greater<int>());
			}
			calories = 0;
		}
	}
	int topThreeElvesSum = topThreeElves[0] + topThreeElves[1] + topThreeElves[2];
	return topThreeElvesSum;
}
