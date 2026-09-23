#include "SensorHub.h"
#include <algorithm>
void SensorHub::Attach(IObserver* observer) {
    sensorList.push_back(observer);
}
void SensorHub::Detach(IObserver* observer) {
    sensorList.erase(std::remove(sensorList.begin(), sensorList.end(), observer), sensorList.end());
}
void SensorHub::Notify() {
    for (IObserver* observer : sensorList) {
        observer->Update(temp);
    }
}
void SensorHub::SetTemperature(float newTemp) {
    temp = newTemp;
    Notify();
}