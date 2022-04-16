#include "stdafx.h"
#include "Subject.h"
#include "Observor.h"

#include <iostream>
#include <list>
using namespace std;

// 主题 创建了很多观察者对象
Subject::Subject()
{
	//****在模板的使用之前一定要 new，创建
	_obvs = new list<Observor*>;
}

Subject::~Subject()
{
}
// 添加一个观察者
void Subject::Attach(Observor* obv)
{
	_obvs->push_front(obv);
}
// 删除一个观察者
void Subject::Detach(Observor* obv)
{
	if (obv != NULL)
		_obvs->remove(obv);
}
// 对所有观察者进行更新
void Subject::Notify()
{
	list<Observor*>::iterator it;
	it = _obvs->begin();
	for (; it != _obvs->end(); it++)
	{
		//关于模板和 iterator 的用法
		(*it)->Update(this);
	}
}

