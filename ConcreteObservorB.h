#pragma once
#include "Observor.h"
#include <string> 
#include <iostream>

// ����۲��� B
class ConcreteObservorB :public Observor
{
public:
	virtual Subject* GetSubject();

	ConcreteObservorB(Subject* sub);

	virtual ~ConcreteObservorB();
	//���� Subject ��Ϊ����������������һ�� View ���ڶ���� Subject��
	void Update(Subject* sub);
	void PrintInfo();
protected:
private:
	Subject* _sub;
};
