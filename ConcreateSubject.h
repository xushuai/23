#pragma once
#include "Subject.h"

//具体主题 
class ConcreteSubject :public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	State_t GetState();					// 获取状态
	void SetState(const State_t& st);		// 设置状态
private:
	//状态
	State_t _st;
};

