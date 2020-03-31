#ifndef DEQUE_SRC_LIB_CARD_H_
#define DEQUE_SRC_LIB_CARD_H_

#include <string>

class Card {
	public:
		Card(std::string word) : word_(word) {}
		~Card();

		std::string GetWord() { return word_; };

	private:
		std::string word_;
};

#endif
