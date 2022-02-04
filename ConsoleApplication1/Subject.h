#pragma once
#include "Observer.h"

class Subject {
public:
	virtual void registerObserver(Observer* o) = 0;
	virtual void removeObserver(Observer* O) = 0;
	virtual void notifuObservers() = 0;
};

