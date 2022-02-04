#include "WeatherData.h"

WeatherData::WeatherData() {

}

void WeatherData::registerObserver(Observer* o) {
	observers.push_back(o);
}

void WeatherData::registerObserver(Observer* o) {
	auto iter = observers.begin();
	while (iter != observers.end()) {
		if (*iter == o) {
			iter = observers.erase(iter);
		}
		else {
			iter++;

		
		}


		 

	

	}
}

void WeatherData::notifyObservers() {
	for (auto iter : observers) {
		((Observer*)iter)->update(temperature, humidity, pressure);
	}


}

void WeatherData::measurementsChanged() {
	notifuObservers();
}

void WeatherData::setMeasurements(float temperature, float humidity, float pressure) {
	this->temperature = temperature;
	this->humidity = humidity;
	this->pressure = pressure;
	measurementsChanged();
}

