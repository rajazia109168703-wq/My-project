#include <iostream>
int main() 
{
    float temperature;
    std::cout << "Enter the current temperature in Celsius: ";
    std::cin >> temperature;

    if (temperature > 45) {
        std::cout << "ALERT: Temperature has crossed the safe limit of 45°C!" << std::endl;
    } else {
        std::cout << "Temperature is within safe limits." << std::endl;
    }

    return 0;
}
