#include <fstream>
int main()
{
	std::ifstream input("input.txt");
	std::string line;
	int pairsWithFullSelfContainment = 0;
	while (input >> line)
	{
		std::pair<int,int> firstPair, secondPair;
		int i = -1;
		while (line[++i] != '-')
			firstPair.first =  firstPair.first*10 + (line[i] - '0');
		while (line[++i] != ',')
			firstPair.second =  firstPair.second*10 + (line[i] - '0');
		while (line[++i] != '-')
			secondPair.first =  secondPair.first*10 + (line[i] - '0');
		while (++i != line.length())
			secondPair.second =  secondPair.second*10 + (line[i] - '0');
		if ((firstPair.first <= secondPair.first && firstPair.second >= secondPair.second)
		|| (secondPair.first <= firstPair.first && secondPair.second >= firstPair.second))
			++pairsWithFullSelfContainment;	
	}
	return pairsWithFullSelfContainment;
}
