#include "stdafx.h"
#include "ConcreteObservorB.h"


//在这个主题中，添加此观察者
ConcreteObservorB::ConcreteObservorB(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}
//在这个主题中，释放此观察者
ConcreteObservorB::~ConcreteObservorB()
{
	_sub->Detach(this);
	if (_sub != 0)
	{
		delete _sub;
	}
}
// 获取此观察者 所观察的主题
Subject* ConcreteObservorB::GetSubject()
{
	return _sub;
}
//打印观察主题的状态
void ConcreteObservorB::PrintInfo()
{
	State_t  curState = _sub->GetState();
	std::cout << "ConcreteObserverB observer.... index:"<<curState.index
		<<"state:"<< curState.state <<endl;
}
// 更新这个主题的状态
void ConcreteObservorB::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}