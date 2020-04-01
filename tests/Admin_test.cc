#include <memory>
#include "gtest/gtest.h"
#include "src/lib/User.h"
#include "src/lib/Admin.h"

TEST(AdminShould, ReturnUserInfo){
	uint64_t id = 17;
	std::string name = "Master";
	std::unique_ptr<User> admin = std::make_unique<Admin>(id, name);
	uint64_t idA = admin->GetId();
	std::string nameA = admin->GetName();
	EXPECT_EQ(id, idA);
	EXPECT_EQ(name, nameA);
}
