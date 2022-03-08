#include "Physics.h"

int main() {
	Physics physics;
	SoundEngine soundEngine;
	Achievements achievements;
	physics.addObserver(&soundEngine);
	physics.addObserver(&achievements);

	while (true) {
		physics.update();
	}
	return 0;
}