#include <iostream>
#include "Observer.h"

class Achievements: public Observer
{
public:
	virtual void onNotify(const Entity &entity, int event) 
	{
		switch (event)
		{
			case ACHIEVEMENTS: 
				if(entity.getName() == "Achievements") std::cout << "Event is "<<entity.getName()<<std::endl;
				break;
			default:std::cout << "Event is null" << std::endl;
		}
	}
};