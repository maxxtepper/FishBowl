#include <memory>
#include "gtest/gtest.h"
#include "src/lib/User.h"

TEST(UserShould, ReturnEverything){
	/*
	//	Create memory for inputs
	const size_t array_size = 256;

	std::array<uint64_t, array_size> idA;
	std::array<uint64_t, array_size> idE;

	std::array<std::string, array_size> nameA;
	std::array<std::string, array_size> nameE;
	std::array<std::string, array_size> nameNew;

	std::array<std::unique_ptr<User>, array_size> user;

	//	Generate some inputs
	idA[0] = 0;
	nameA[0] = "Sarah";
	user[0] = std::make_unique<User>(idA[0],nameA[0]);

	idA[1] = 1;
	nameA[1] = "Maxx";
	user[1] = std::make_unique<User>(idA[1],nameA[1]);

	//	Test the get functions
	idE[0] = user[0]->GetId();
	nameE[0] = user[0]->GetName();
	EXPECT_EQ(idE[0], idA[0]);
	std::cout << "User " << idE[0] << ": ";
	EXPECT_EQ(nameE[0], nameA[0]);
	std::cout << nameE[0] << std::endl;

	idE[1] = user[1]->GetId();
	nameE[1] = user[1]->GetName();
	EXPECT_EQ(idE[1], idA[1]);
	std::cout << "User " << idE[1] << ": ";
	EXPECT_EQ(nameE[1], nameA[1]);
	std::cout << nameE[1] << std::endl;

	//	Test the set functions
	nameNew[0] = "Sexy Sarah";
	user[0]->SetName(nameNew[0]);
	nameE[0] = user[0]->GetName();
	std::cout << "User " << idE[0] << ": ";
	EXPECT_EQ(nameE[0], nameNew[0]);
	std::cout << nameE[0] << std::endl;

	nameNew[1] = "Mighty Maxx";
	user[1]->SetName(nameNew[1]);
	nameE[1] = user[1]->GetName();
	std::cout << "User " << idE[1] << ": ";
	EXPECT_EQ(nameE[1], nameNew[1]);
	std::cout << nameE[1] << std::endl;
	
	*/
}
