#include <list>
#include "Observer.h"
#include "Entity.h"

class Subject {
private:
	std::list<Observer*> observers;
	int num_observers;
public:
	void addObserver(Observer* observer)
	{
		observers.push_back(observer);
	}
	void removeObserver(Observer* observer)
	{
		observers.remove(observer);
	}
protected:
	void notify(const Entity& entity, int event) {
		for (auto i = observers.begin(); i != observers.end(); i++)
		{
			(*i)->onNotify(entity, event);
		}
	}
};