#ifndef OBSERVER
#define OBSERVER
#include "Entity.h"

class Observer {
public:
	virtual ~Observer() {}
	virtual void onNotify(const Entity& entity, int event) = 0;
};
#endif // !OBSERVER