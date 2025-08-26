// Traffic lights
#include <iostream>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::chrono;

int main() {
    // enumerate- assign string values to an integer
    enum lightColor { 
        red, 
        green, 
        yellow 
    }; 

    // duration definition
    const auto redDur = seconds(2);
    const auto greenDur = seconds(5);
    const auto yellowDur = seconds(7);

    lightColor currentLight = red;

    cout << "---TRAFFIC LIGHT SIMULATION---" << endl;

    for (int state = 0; state < 3; ++state) {
        switch (currentLight) {
            case red:
                cout << state + 1 << ". RED LIGHT" << endl;
                this_thread::sleep_for(redDur);
                currentLight = green;
                break;

            case green:
                cout << state + 1 << ". GREEN LIGHT" << endl;
                this_thread::sleep_for(greenDur);
                currentLight = yellow;
                break;

            case yellow:
                cout << state + 1 << ". YELLOW LIGHT" << endl;
                this_thread::sleep_for(yellowDur);
                currentLight = red;
                break;
        }
    }

    return 0;
}
