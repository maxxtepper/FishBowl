#include <deque>
#include <memory>
#include <set>
#include <algorithm>
#include "gtest/gtest.h"
#include "src/lib/User.h"
#include "src/lib/Guest.h"
#include "src/lib/Card.h"

TEST(GuestShould, ReturnUserInfo){
	uint64_t id = 18;
	std::string name = "Player";
	std::unique_ptr<User> guest = std::make_unique<Guest>(id, name);
	uint64_t idA = guest->GetId();
	std::string nameA = guest->GetName();
	EXPECT_EQ(id, idA);
	EXPECT_EQ(name, nameA);

	//	Create some cards
	std::vector<std::string> word;
	word.push_back("magma");
	word.push_back("sentence");
	word.push_back("extra");
	word.push_back("reduction");

	std::deque<std::unique_ptr<Card>> card;
	card.push_front(std::make_unique<Card>(word[0]));
	card.push_front(std::make_unique<Card>(word[1]));
	card.push_front(std::make_unique<Card>(word[2]));
	card.push_front(std::make_unique<Card>(word[3]));
	
	//	Give a card to the player
	size_t card_size = card.size();
	guest->EarnCard(std::move(card.front()));
	card.pop_front();
	EXPECT_EQ(card.size(), card_size-1);

	//	Activate the user card
	EXPECT_EQ(guest->ActivateCard(), true);

	//	Get the card back from the player
	card.push_front(guest->ReturnCard());
	EXPECT_EQ(card.size(), card_size);
	
	
}
