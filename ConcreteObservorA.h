#pragma once
#include "Observor.h"
#include <string> 
#include <iostream>

// 具体观察类 A
class ConcreteObservorA :public Observor 
{
public:
	// 获取此观察者 所观察的主题
	virtual Subject* GetSubject();
	//在这个主题中，添加此观察者
	ConcreteObservorA(Subject* sub);
	//在这个主题中，释放此观察者
	virtual ~ConcreteObservorA();
	//传入 Subject 作为参数，这样可以让一个 View 属于多个的 Subject。
	// 更新这个主题的状态
	void Update(Subject* sub);
	//打印观察主题的状态
	void PrintInfo();
protected:
private:
	Subject* _sub;
};
