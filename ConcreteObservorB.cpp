#include "stdafx.h"
#include "ConcreteObservorB.h"


//����������У���Ӵ˹۲���
ConcreteObservorB::ConcreteObservorB(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}
//����������У��ͷŴ˹۲���
ConcreteObservorB::~ConcreteObservorB()
{
	_sub->Detach(this);
	if (_sub != 0)
	{
		delete _sub;
	}
}
// ��ȡ�˹۲��� ���۲������
Subject* ConcreteObservorB::GetSubject()
{
	return _sub;
}
//��ӡ�۲������״̬
void ConcreteObservorB::PrintInfo()
{
	State_t  curState = _sub->GetState();
	std::cout << "ConcreteObserverB observer.... index:"<<curState.index
		<<"state:"<< curState.state <<endl;
}
// ������������״̬
void ConcreteObservorB::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}