#pragma once

//Установка начальных значений
//Методы получения и установки значений 

class Node {
	int Value;
	Node*Next;
public:
	Node() :Value(0), Next(nullptr) {};
	void setValue(int userValue) { Value = userValue; }
	int getValue() { return Value; }
	void setNext(Node *Value) { Next = Value; }
	Node *getNext() { return Next; }
};
