#pragma once

//Реализация методов класса "Список"

#include "line.h"
#include <iostream>
#include <cstdlib>

using namespace std;

line::line() {
	Head = nullptr;
	Tail = nullptr;
	Num = 0;
}

line::line(int Value) {
	Num = Value;
}

line::line(const line &op1) {
	line copy;
	line *a;
	Node *temp = op1.Head;
	int k = op1.Num - 1;
	int *mas = new int[op1.Num];
	for (int i = 0; i <= k; ++i) {
		mas[i] = temp->getValue();
		temp = temp->getNext();
	}
	for (k = 0; k < op1.Num; ++k) {
		Node*temp = new Node;
		if (Num == 0) {
			temp->setValue(mas[k]);
			temp->setNext(nullptr);
			Head = temp;
			Tail = temp;
		}
		else {
			temp->setValue(rand() % 10 + 1);
			temp->setNext(Head);
			Head = temp;
		}
		Num++;
	}
	delete[] mas;
}

line::~line(){
	Node *temp = Head;
	while (temp->getNext() != NULL) {
		temp = temp->getNext();
		delete Head;
		Head = temp;
	}
}


void line::show() {
	Node *temp = Head;
	for (int i = 0; i < Num; ++i)
	{
		cout << temp->getValue() << " >> ";
		temp = temp->getNext();
	}
	cout << endl;
}

void line::create(int len) {
	for (int i = 0; i < len; ++i)
	{
		if (Num == 0)
		{
			++(*this);
		}
		else
		{
			(*this)++;
		}
	}
}

line& line::operator++(int) {
	Node*temp = new Node;
	if (Num == 0) {
			temp->setValue(rand()% 20 +1);
		temp->setNext(nullptr);
		Head = temp;
		Tail = temp;
	}
	else {
			temp->setValue(rand() % 20 + 1);
		temp->setNext(nullptr);
		Tail->setNext(temp);
		Tail = temp;
	}
	Num++;
	return *this;
}

line& line::operator++() {
	Node*temp = new Node;
	if (Num == 0) {
		temp->setValue(rand() % 20 + 1);
		temp->setNext(nullptr);
		Head = temp;
		Tail = temp;
	}
	else {
		temp->setValue(rand() % 20 + 1);
		temp->setNext(Head);
		Head = temp;
	}
	Num++;
	return *this;
 }

line& operator--( line &op1) {
	Node*temp = op1.Head;
	while (temp->getNext() != NULL)
		temp = temp->getNext();
	
	delete op1.Tail;
	op1.setTail(temp);
	op1.Num--;
	return op1;
} 

line& operator--(line &op1, int) {
	Node*temp = op1.getHead();
	temp = temp->getNext();
	op1.setHead(nullptr);
	op1.setHead(temp);
	op1.setNum(op1.getNum() - 1);
	return op1;
}