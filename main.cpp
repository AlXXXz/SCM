/**
 * @file main.cpp
 * @author Shishkin A.S.
 * @brief Система управления движением на линии метро
 * @version 0.1
 * @date 2022-06-03
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>
#include <iostream>
#include <string>

using namespace std;

int main() {

    setlocale(LC_ALL, "Rus");

    string week[] = {
        "Monday",
        "Tuesday",
        "Wednesday",
        "Thursday",
        "Friday",
        "Saturday",
        "Sunday" }; //Дни недели
    string today; //Текущий день
    unsigned short time; //Время
    unsigned short i; //Перключатель дней недели
    bool isWorking; //Работает ли метро
    bool peak_hour; //Час пик

    isWorking = false;
    peak_hour = false;
    time = 0;
    i = 0;

    while (1)
    {
        cout << "Today is: " << week[i] << endl;
        cout << "Time is: " << time << endl;
        if (isWorking)
            cout << "Метро работает" << endl;
        else
            cout << "Метро не работает" << endl;
        ++time;
        if (time == 24) {
            time = 0;
            ++i;
            isWorking = false;
        }
        if (time == 6)
            isWorking = true;
        if (i == 7)
            i = 0;

        getchar();
    }

    return 0;
}
