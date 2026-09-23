#pragma once
#include "IObserver.h"
class AirConditioner : public IObserver {
public:
    void Update(float newTemp) override;
};