#ifndef DEQUE_SRC_LIB_GUEST_H_
#define DEQUE_SRC_LIB_GUEST_H_

#include <string>
#include "User.h"

class Guest : public User {
	public:
		Guest(uint64_t id, std::string name) : User(id, name) {}
		virtual ~Guest()= default;

	private:
};

#endif
