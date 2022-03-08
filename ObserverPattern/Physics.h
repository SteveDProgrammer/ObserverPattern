#include <iostream>
#include "Observer.h"
#include "Subject.h"
#include "SoundEngine.h"
#include "Achievements.h"

class Physics : public Subject //Better to call the subject 'Notifier', makes more sense
{
	Entity entity;
public:
	void update()
	{
		std::string name = "";
		std::cout << "Enter new name!!!" << std::endl;
		std::cin >> name;
		entity.setName(name);
		if (name == "Achievements") notify(entity, ACHIEVEMENTS);
		else if (name == "SoundEngine") notify(entity, SOUND_ENGINE);
		//else notify(entity, NULL);
	};
};