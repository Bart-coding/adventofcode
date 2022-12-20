#include <fstream>
#include <unordered_set>
int main()
{
	std::ifstream input("input.txt");
	std::string firstLine, secondLine, thirdLine;
	int sumOfPriorities = 0;
	while(input >> firstLine)
	{
		input >> secondLine;
		input >> thirdLine;
		std::unordered_set<char> firstRucksackLetters;
		for (int i = 0; i < firstLine.length(); ++i)
			firstRucksackLetters.insert(firstLine[i]);
		std::unordered_set<char> firstTwoRucksacksCommonLetters;
		for (int i = 0; i < secondLine.length(); ++i)
		{
			if (firstRucksackLetters.find(secondLine[i]) != firstRucksackLetters.end())
				firstTwoRucksacksCommonLetters.insert(secondLine[i]);
		}
		for (int i = 0; i < thirdLine.length(); ++i)
		{
			if (firstTwoRucksacksCommonLetters.find(thirdLine[i]) != firstTwoRucksacksCommonLetters.end())
			{
				if ((int)thirdLine[i] >= 97) //is the letter lowercase (ASCII value)
					sumOfPriorities += (int)thirdLine[i] - 96;
				else
					sumOfPriorities += (int)thirdLine[i] - 38;
				break;
			}
		}
	}
	return sumOfPriorities;
}
