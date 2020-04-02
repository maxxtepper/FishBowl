#include "User.h"

void User::SetName(std::string &name) {
	name_ = name;
}

void User::EarnCard(std::unique_ptr<Card> card) {
	//	The User now owns the Card
	card_ = std::move(card);
}

bool User::ActivateCard() {
	//	Use the Card, return what happened
	return (card_->Activate());
}

std::unique_ptr<Card> User::ReturnCard() {
	//	Return the card
	return (std::move(card_));
}
