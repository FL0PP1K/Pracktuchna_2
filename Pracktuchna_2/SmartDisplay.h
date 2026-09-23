#pragma once
#include "IObserver.h"
class SmartDisplay : public IObserver {
public:
    void Update(float newTemp) override;
};
