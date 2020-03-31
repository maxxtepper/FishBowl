#ifndef DEQUE_SRC_LIB_FISHBOWL_H_
#define DEQUE_SRC_LIB_FISHBOWL_H_

#include <string>
#include <deque>
#include <algorithm>
#include <memory>
#include <random>
#include <chrono>
#include "Card.h"

class FishBowl {
	public:
		FishBowl();
		~FishBowl();

		void AddWord(std::string card);
		//	How do we want to retrive the card data?
		//	Do we want to return the card?
		//	Or just the card info?
		std::string GetWord();
		void Reset();

	private:
		std::deque<std::string> deck_;
		std::deque<std::string> discard_;
};

#endif
