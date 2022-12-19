#include <fstream>
#include <unordered_map>
int main()
{
	std::unordered_map<std::string, int> possibleGamesResults = {
		{"A X", 3}, //rock && lose => scissors => 0+3 = 3
		{"A Y", 4},
		{"A Z", 8},
		{"B X", 1},
		{"B Y", 5},
		{"B Z", 9},
		{"C X", 2},
		{"C Y", 6},
		{"C Z", 7}
	};
	std::ifstream input("input.txt");
	std::string line;
	int totalScore = 0;
	while (getline(input, line))
		totalScore += possibleGamesResults[line];
	return totalScore;
}
