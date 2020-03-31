#include <iostream>
#include <memory>
#include "gtest/gtest.h"
#include "src/lib/FishBowl.h"
#include "src/lib/Card.h"

TEST(FishBowlShould, ReturnRandomWord){
	std::string str0 = "tiger";
	std::string str1 = "king";
	std::string str2 = "corona";

	std::unique_ptr<FishBowl> fishbowl = std::make_unique<FishBowl>();

	fishbowl->AddWord(str0);
	std::string actual0 = fishbowl->GetWord();
	EXPECT_EQ(str0, actual0);
	std::cout << actual0 << std::endl;

	fishbowl->AddWord(str1);
	fishbowl->AddWord(str2);
	std::string random0 = fishbowl->GetWord();
	std::string random1 = fishbowl->GetWord();
	std::cout << random0 << std::endl;
	std::cout << random1 << std::endl;

	std::string empty = fishbowl->GetWord();
	std::string actual_empty = "SECRET_CODE_CATCHER";
	EXPECT_EQ(empty, actual_empty);

	fishbowl->Reset();
	std::string actual1 = fishbowl->GetWord();
	EXPECT_NE(empty, actual1);
}
