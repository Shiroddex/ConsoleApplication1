#pragma once
class Observer {
public:
	virtual void update(float temperature, float pressure) = 0;
};

