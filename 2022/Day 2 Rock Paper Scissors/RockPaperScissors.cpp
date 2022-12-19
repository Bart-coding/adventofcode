#include <fstream>
#include <unordered_map>
int main()
{
	std::unordered_map<std::string, int> possibleGamesResults = {
		{"A X", 4},
		{"B Y", 5},
		{"C Z", 6},
		{"A Y", 8},
		{"A Z", 3},
		{"B X", 1},
		{"B Z", 9},
		{"C X", 7},
		{"C Y", 2}
	};
	std::ifstream input("input.txt");
	std::string line;
	int totalScore = 0;
	while (getline(input, line))
		totalScore += possibleGamesResults[line];
	return totalScore;
}
