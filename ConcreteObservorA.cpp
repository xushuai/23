#include "stdafx.h"
#include "ConcreteObservorA.h"

//����������У���Ӵ˹۲���
ConcreteObservorA::ConcreteObservorA(Subject* sub)
{
	_sub = sub;
	_sub->Attach(this);
}
//����������У��ͷŴ˹۲���
ConcreteObservorA::~ConcreteObservorA()
{
	_sub->Detach(this);
	if (_sub != 0)
	{
		delete _sub;
	}
}
// ��ȡ�˹۲��� ���۲������
Subject* ConcreteObservorA::GetSubject()
{
	return _sub;
}
//��ӡ�۲������״̬
void ConcreteObservorA::PrintInfo()
{
	State_t  curState = _sub->GetState();
	std::cout << "ConcreteObserverA observer.... index:" << curState.index
		<< "state:" << curState.state << endl;
}
// ������������״̬
void ConcreteObservorA::Update(Subject* sub)
{
	_st = sub->GetState();
	PrintInfo();
}