#include "stdafx.h"
#include "ConcreteObservorA.h"

//在这个主题中，添加此观察者
ConcreteObservorA::ConcreteObservorA(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}
//在这个主题中，释放此观察者
ConcreteObservorA::~ConcreteObservorA()
{
	_sub->Detach(this);
	if (_sub != 0)
	{
		delete _sub;
	}
}
// 获取此观察者 所观察的主题
Subject* ConcreteObservorA::GetSubject()
{
	return _sub;
}
//打印观察主题的状态
void ConcreteObservorA::PrintInfo()
{
	State_t  curState = _sub->GetState();
	std::cout << "ConcreteObserverA observer.... index:" << curState.index
		<< "state:" << curState.state << endl;
}
// 更新这个主题的状态
void ConcreteObservorA::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}