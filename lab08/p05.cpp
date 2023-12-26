#include <iostream>
using namespace std;

const int NUMBER_OF_DAYS = 10;
const int NUMBER_OF_HOURS = 24;
double temperatureHumidityData[NUMBER_OF_DAYS][NUMBER_OF_HOURS][2];

int main()
{
    int day, hour;
    double temperature, humidity;
    for (int k = 0; k < NUMBER_OF_DAYS * NUMBER_OF_HOURS; k++)
    {
        cin >> day >> hour >> temperature >> humidity;
        temperatureHumidityData[day - 1][hour - 1][0] = temperature;
        temperatureHumidityData[day - 1][hour - 1][1] = humidity;
    }

    for (int i = 0; i < NUMBER_OF_DAYS; i++)
    {
        double dailyTemperatureTotal = 0, dailyHumidityTotal = 0;
        for (int j = 0; j < NUMBER_OF_HOURS; j++)
        {
            dailyTemperatureTotal += temperatureHumidityData[i][j][0];
            dailyHumidityTotal += temperatureHumidityData[i][j][1];
        }

        cout << "Day " << i << "'s average temperature is "
             << dailyTemperatureTotal / NUMBER_OF_HOURS << endl;
        cout << "Day " << i << "'s average humidity is "
             << dailyHumidityTotal / NUMBER_OF_HOURS << endl;
    }

    return 0;
}
