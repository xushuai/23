#pragma once
#include "Observor.h"
#include <string> 
#include <iostream>

// ����۲��� A
class ConcreteObservorA :public Observor 
{
public:
	// ��ȡ�˹۲��� ���۲������
	virtual Subject* GetSubject();
	//����������У���Ӵ˹۲���
	ConcreteObservorA(Subject* sub);
	//����������У��ͷŴ˹۲���
	virtual ~ConcreteObservorA();
	//���� Subject ��Ϊ����������������һ�� View ���ڶ���� Subject��
	// ������������״̬
	void Update(Subject* sub);
	//��ӡ�۲������״̬
	void PrintInfo();
protected:
private:
	Subject* _sub;
};
