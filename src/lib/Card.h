#ifndef FISHBOWL_SRC_LIB_CARD_H_
#define FISHBOWL_SRC_LIB_CARD_H_

#include <string>

class Card {
	public:
		Card(std::string word) : word_(word) {}
		~Card();

		std::string GetWord() { return word_; };

		bool Activate();

	private:
		std::string word_;
};

#endif
