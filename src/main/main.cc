#include <memory>
#include <iostream>
#include "src/lib/FishBowl.h"

int main(int argc, char** argv) {
	FishBowl fishbowl;

	std::string inarg;
	while (inarg != "0") {
		if (inarg.size() > 0) {
			fishbowl.AddWord(inarg);
		}
		std::cout << "Enter a word into the fishbowl (0 to quit): ";
		std::cin >> inarg;
	}

	std::string word;
	word = fishbowl.GetWord();

	//	Round 1
	std::cout << "\n~~~~~~~~~~\nRound 1\n~~~~~~~~~~\n";
	while (word != "SECRET_CODE_CATCHER") {
		std::cout << "Now picking a random word..." << word << std::endl;
		word = fishbowl.GetWord();
	}

	//	Reset when you choose
	fishbowl.Reset();
	word = fishbowl.GetWord();

	//	Round 2
	std::cout << "\n~~~~~~~~~~\nRound 2\n~~~~~~~~~~\n";
	while (word != "SECRET_CODE_CATCHER") {
		std::cout << "Now picking a random word..." << word << std::endl;
		word = fishbowl.GetWord();
	}

	//	Reset when you choose
	fishbowl.Reset();
	word = fishbowl.GetWord();

	//	Round 3
	std::cout << "\n~~~~~~~~~~\nRound 3\n~~~~~~~~~~\n";
	while (word != "SECRET_CODE_CATCHER") {
		std::cout << "Now picking a random word..." << word << std::endl;
		word = fishbowl.GetWord();
	}

	return 0;
}
