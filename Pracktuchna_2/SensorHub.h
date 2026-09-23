#pragma once
#include <vector>
#include "ISubject.h"
class SensorHub : public ISubject {
private:
    std::vector<IObserver*> sensorList;
    float temp = 0.0f;
public:
    void Attach(IObserver* observer) override;
    void Detach(IObserver* observer) override;
    void Notify() override;
    void SetTemperature(float newTemp);
};