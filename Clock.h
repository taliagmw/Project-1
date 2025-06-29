#pragma once

/**
 * Creating class for Clock
 */
class Clock {
private:
    int hour;
    int minute;
    int second;
public:
    Clock(int h, int m, int s);
    void displayClocks();
    void addHour();
    void addMinute();
    void addSecond();

};