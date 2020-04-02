#ifndef FISHBOWL_SRC_LIB_USER_H_
#define FISHBOWL_SRC_LIB_USER_H_
//	This is the base class for the players of the game
//	It should be devoid of the actual game being played
//	This is the purpose of the card object:
//		The card object exists to abstract the players from the game
//		This way, the user and card object system can be used for 
//		anything, not just FishBowl
//
//	I am building the user space for any interaction. 

#include <string>
#include <memory>
#include "Card.h"

class User {
	public:
		User(uint64_t id, std::string name) 
			: id_(id), name_(name) {}
		virtual ~User() = default;

		uint64_t GetId() { return id_; }
		std::string GetName() { return name_; }

		void SetName(std::string &name);

		void EarnCard(std::unique_ptr<Card> card);
		bool ActivateCard();
		std::unique_ptr<Card> ReturnCard();

	private:
		//	A user can hold 1 card
		std::unique_ptr<Card> card_;

		uint64_t const id_;
		std::string name_;
};

#endif
