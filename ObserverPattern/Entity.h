#ifndef ENTITY
#define ENTITY
#include <string>
#include "Events.h"
#include <iostream>

class Entity {
	std::string name = "";
public:
	void setName(std::string theName) {
		this->name = theName;
	}
	std::string getName() const {
		return name;
	}
};

#endif // !ENTITY