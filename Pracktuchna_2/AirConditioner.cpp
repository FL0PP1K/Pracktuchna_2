#include "AirConditioner.h"
#include <iostream>
void AirConditioner::Update(float newTemp) {
    if (newTemp > 25.0) {
        std::cout << "Кондиціонер: Увімкнено охолодження.\n";
    }
    else {
        std::cout << "Кондиціонер: Вимкнено.\n";
    }
}