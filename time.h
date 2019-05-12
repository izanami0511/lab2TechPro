#pragma once
//Описание класса "Время"


class time
{
	int sec;
	int minutes;
	int hours;
public:
	time() : sec(0), minutes(0), hours(0) { };
	explicit time(int h, int m, int s) : hours(h), minutes(m), sec(s) { optimize(); }
	time(const time &op1);
	~time();

	void set_sec(int value) { sec = value; }
	int get_sec() { return sec; }
	void set_minutes(int value) { minutes = value; }
	int get_minutes() { return minutes; }
	void set_hours(int value) { hours = value; }
	int get_hours() { return hours; }

	void optimize();
	void show();
	time& create();

	time& operator+(int User_value);
	time& operator-(int User_value);

	time& operator*(int User_value);
	time& operator/(int User_value);
};

	