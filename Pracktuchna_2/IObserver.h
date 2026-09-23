#pragma once
class IObserver {
public:
    virtual ~IObserver() = default;
    virtual void Update(float temperature) = 0;
};