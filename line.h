#pragma once

//Описание методов класса "Список"

#include "node.h"

class line
{
	Node *Head;
	Node *Tail;
	int Num;

public:
	line();
	line(int Value);
	explicit line(const line &op1);
	~line();

	void create(int len);
	void setTail(Node *op) { Tail = op; }
	void setHead(Node *op) { Head = op; }
	void setNum(int Value) { Num = Value; }
	Node* getHead() { return Head; }
	Node* getTail() { return Tail; }
	int getNum() { return Num; }

	line& operator++(int);
	line& operator++();

	friend line& operator--( line &op1);
	friend line& operator--( line &op1, int);

	void show();
}; 

