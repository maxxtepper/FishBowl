#include <memory>
#include "gtest/gtest.h"
#include "src/lib/User.h"
#include "src/lib/Guest.h"

TEST(GuestShould, ReturnUserInfo){
	uint64_t id = 18;
	std::string name = "Player";
	std::unique_ptr<User> guest = std::make_unique<Guest>(id, name);
	uint64_t idA = guest->GetId();
	std::string nameA = guest->GetName();
	EXPECT_EQ(id, idA);
	EXPECT_EQ(name, nameA);
}
