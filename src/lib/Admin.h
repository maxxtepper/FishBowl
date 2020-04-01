#ifndef DEQUE_SRC_LIB_ADMIN_H_
#define DEQUE_SRC_LIB_ADMIN_H_
//	The admin should get settings control at some point
//

#include <string>
#include "User.h"

class Admin : public User {
	public:
		Admin(uint64_t id, std::string name) : User(id, name) {}
		~Admin() = default;

	private:
};

#endif
