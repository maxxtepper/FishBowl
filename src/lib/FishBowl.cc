#include "FishBowl.h"

FishBowl::FishBowl() {
}

FishBowl::~FishBowl() {
}

void FishBowl::AddWord(std::string card) {
	if (card.size() > 0)
		deck_.push_front(card);
}

std::string FishBowl::GetWord() {
	if (deck_.empty()) {
		return "SECRET_CODE_CATCHER";
	}

	const auto seed = std::chrono::system_clock::now().time_since_epoch().count();
	std::shuffle(deck_.begin(), deck_.end(), std::default_random_engine(seed));

	std::string output = deck_.front();
	discard_.push_front(output);
	deck_.pop_front();

	return output;
}

void FishBowl::Reset() {
	std::move(discard_.begin(), discard_.end(), std::back_inserter(deck_));
	discard_.erase(discard_.begin(), discard_.end());
}
