#include "SmartDisplay.h"
#include <iostream>
void SmartDisplay::Update(float newTemp) {
    std::cout << "Розумний дисплей: Оновлення температури: " << newTemp << "°C\n";
}