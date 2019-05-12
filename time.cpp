#pragma once

//Реализация класса "Время"

#include "time.h"
#include <iostream>
#include <cstdlib>

using namespace std;

/*time::time(const time &op1) {
	time copy;
	int hours_c, minutes_c, sec_c;
	hours_c = op1.get_hours;
	minutes_c = op1.get_minutes;
	sec_c = op1.get_sec();
	time copy(hours_c, minutes_c, sec_c);
}*/

time::~time() {
	delete &sec;
	delete &minutes;
	delete &hours;
}

time& time::create() {
	set_sec(rand() % 20 + 1);
	set_minutes(rand() % 20 + 1);
	set_hours(rand() % 20 + 1);
	return *this;
}

void time::optimize() {
	minutes += sec / 60;
	sec = sec % 60;
	minutes += ((sec < 0) ? -1 : 0);
	sec += ((sec < 0) ? 60 : 0);
	hours += minutes / 60;
	minutes = minutes % 60;
	hours += ((minutes < 0) ? -1 : 0);
	minutes += ((minutes < 0) ? 60 : 0);
} 

void time::show() {
	cout << "<" << get_hours() << ":" << get_minutes() << ":" << get_sec() << ">";
	cout << endl;
}

time& time::operator+(int User_value) {
	int chs = 0;
	cout << "Choose term:" << endl;
	cout << "1.Hours" << endl;
	cout << "2.Minutes" << endl;
	cout << "3.Seconds" << endl;
	cin >> chs;
	switch (chs) {
	case 1:
		set_hours(get_hours() + User_value);
		return *this;
		break;
	case 2:
		set_minutes(get_minutes() + User_value);
		return *this;
		break;
	case 3:
		set_sec(get_sec() + User_value);
		return *this;
		break;
	default:
		break;
	}
	system("cls");
}

time& time::operator-(int User_value) {
	int chs = 0;
	cout << "Choose term:" << endl;
	cout << "1.Hours" << endl;
	cout << "2.Minutes" << endl;
	cout << "3.Seconds" << endl;
	cin >> chs;
	switch (chs) {
	case 1:
		set_hours(get_hours() - User_value);
		return *this;
		break;
		system("cls");
	case 2:
		set_minutes(get_minutes() - User_value);
		return *this;
		break;
		system("cls");
	case 3:
		set_sec(get_sec() - User_value);
		return *this;
		break;
		system("cls");
	default:
		break;
	}

}

time& time::operator*(int User_value) {
	set_hours(get_hours() * User_value);
	set_minutes(get_minutes() * User_value);
	set_sec(get_sec() * User_value);
	optimize();
	return *this;
}

time& time::operator/(int User_value) {
	set_hours(get_hours() / User_value);
	set_minutes(get_minutes() / User_value);
	set_sec(get_sec() / User_value);
	optimize();
	return *this;
}