#include <iostream>
#include <fstream>
int main() {
	std::ifstream input("input.txt");
	std::string line;
	int calories, mostCalories = 0;
	while (getline(input, line))
	{
		if (!line.empty())
			calories += std::stoi(line);
		else
		{
			if (calories > mostCalories)
				mostCalories = calories;
			calories = 0;
		}
	}
	return mostCalories;
}
