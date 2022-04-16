#pragma once
#include "Observor.h"
#include <string> 
#include <iostream>

// 具体观察类 B
class ConcreteObservorB :public Observor
{
public:
	virtual Subject* GetSubject();

	ConcreteObservorB(Subject* sub);

	virtual ~ConcreteObservorB();
	//传入 Subject 作为参数，这样可以让一个 View 属于多个的 Subject。
	void Update(Subject* sub);
	void PrintInfo();
protected:
private:
	Subject* _sub;
};
