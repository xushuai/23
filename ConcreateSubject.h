#pragma once
#include "Subject.h"

//�������� 
class ConcreteSubject :public Subject
{
public:
	ConcreteSubject();
	~ConcreteSubject();
	State_t GetState();					// ��ȡ״̬
	void SetState(const State_t& st);		// ����״̬
private:
	//״̬
	State_t _st;
};

