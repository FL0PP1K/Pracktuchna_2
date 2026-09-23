#include <iostream>
#include <Windows.h>
#include "SensorHub.h"
#include "SmartDisplay.h"
#include "AirConditioner.h"

using namespace std;

int main() {
    SetConsoleCP(1251);
    SetConsoleOutputCP(1251);

    SensorHub hub;
    SmartDisplay display;
    AirConditioner airConditioner;

    hub.Attach(&display);
    hub.Attach(&airConditioner);

    cout << "Зміна температури на 22°C\n";
    hub.SetTemperature(22.0f);

    cout << "\nЗміна температури на 28°C\n";
    hub.SetTemperature(28.0f);

    cout << "\nВідключення дисплея та зміна температури на 30°C\n";
    hub.Detach(&display);
    hub.SetTemperature(30.0f);

    return 0;
}