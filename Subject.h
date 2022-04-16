//#pragma once
#ifndef  _SUBJECT_H_
#define _SUBJECT_H_

#include <list>
#include <string>
#include "stateDef.h"
using namespace std;

class Observor; //�۲�����

class Subject //������
{
public:
	virtual ~Subject();
	virtual void Attach(Observor* obv); // ���һ���۲���
	virtual void Detach(Observor* obv); // ɾ��һ���۲���
	virtual void Notify();				// �����й۲��߽��и���
	virtual void SetState(const State_t& st) = 0; // ��������״̬
	virtual State_t GetState() = 0;				// ��ȡ����״̬

protected:
	// ���� �����˺ܶ�۲��߶���
	Subject(); 

private:
	list<Observor*>* _obvs;
};


#endif // ! _SUBJECT_H_


