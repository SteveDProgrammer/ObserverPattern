#include <iostream>
#include "Observer.h"

class SoundEngine : public Observer
{
public:
	virtual void onNotify(const Entity &entity, int event)
	{
		switch (event)
		{
			case SOUND_ENGINE:
				if (entity.getName() == "SoundEngine") std::cout << "Event is " << entity.getName() << std::endl;
				break;
			default:std::cout << "Event is null" << std::endl;
		}
	}
};