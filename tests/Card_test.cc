#include <memory>
#include "gtest/gtest.h"
#include "src/lib/Card.h"

TEST(CardShould, ReturnWord){
	std::string expected = "tiger";
	std::unique_ptr<Card> card = std::make_unique<Card>(expected);
	std::string actual = card->GetWord();
	EXPECT_EQ(expected, actual);
}
