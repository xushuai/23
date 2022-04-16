#include "stdafx.h"
#include "Subject.h"
#include "Observor.h"

#include <iostream>
#include <list>
using namespace std;

// ���� �����˺ܶ�۲��߶���
Subject::Subject()
{
	//****��ģ���ʹ��֮ǰһ��Ҫ new������
	_obvs = new list<Observor*>;
}

Subject::~Subject()
{
}
// ���һ���۲���
void Subject::Attach(Observor* obv)
{
	_obvs->push_front(obv);
}
// ɾ��һ���۲���
void Subject::Detach(Observor* obv)
{
	if (obv != NULL)
		_obvs->remove(obv);
}
// �����й۲��߽��и���
void Subject::Notify()
{
	list<Observor*>::iterator it;
	it = _obvs->begin();
	for (; it != _obvs->end(); it++)
	{
		//����ģ��� iterator ���÷�
		(*it)->Update(this);
	}
}

