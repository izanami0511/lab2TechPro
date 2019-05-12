#pragma once
//Установка начальных значений
//Методы получения и установки значений 

class Data{
	int sec;
	int minutes;
	int hours;
public:
	Data() : sec(0), minutes(0), hours(0) {};
	void set_sec(int value) { sec = value; }
	int get_sec() { return sec; }
	void set_minutes(int value) { minutes = value; }
	int get_minutes() { return minutes; }
	void set_hours(int value) { hours = value; }
	int get_hours() { return hours; }
};