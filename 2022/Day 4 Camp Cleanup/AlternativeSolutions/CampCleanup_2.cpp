#include <fstream>
int main()
{
	std::ifstream input("input.txt");
	int overlappingPairs = 0;
	char c;
	while (!input.eof())
	{
		std::pair<int,int> firstPair, secondPair;
		while (input.get(c), c != '-')
			firstPair.first =  firstPair.first*10 + (c - '0');
		while (input.get(c), c != ',')
			firstPair.second =  firstPair.second*10 + (c - '0');
		while (input.get(c), c != '-')
			secondPair.first =  secondPair.first*10 + (c - '0');
		while (input.get(c) && c != '\n')
			secondPair.second =  secondPair.second*10 + (c - '0');
		if ((firstPair.first >= secondPair.first && firstPair.first <= secondPair.second)
		|| (secondPair.first >= firstPair.first && secondPair.first <= firstPair.second))
			++overlappingPairs;	
	}
	return overlappingPairs;
}
