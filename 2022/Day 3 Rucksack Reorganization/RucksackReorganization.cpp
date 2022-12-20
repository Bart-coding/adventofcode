#include <fstream>
#include <unordered_set>
int main()
{
	std::ifstream input("input.txt");
	std::string line;
	int sumOfPriorities = 0;
	while(input >> line)
	{
		std::unordered_set<char> firstCompartmentLetters;
		for (int i = 0; i < line.length()/2; ++i)
			firstCompartmentLetters.insert(line[i]);
		for (int j = line.length()/2; j < line.length(); ++j)
		{
			if (firstCompartmentLetters.find(line[j]) != firstCompartmentLetters.end())
			{
				if ((int)line[j] >= 97) //is the letter lowercase (ASCII value)
					sumOfPriorities += (int)line[j] - 96;
				else
					sumOfPriorities += (int)line[j] - 38;
				break;
			}
		}
	}
	return sumOfPriorities;
}
