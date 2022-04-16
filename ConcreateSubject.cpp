#include "stdafx.h"
#include "ConcreateSubject.h"

ConcreteSubject::ConcreteSubject()
{
	_st.index = 0;
	_st.state = '\0';
}
ConcreteSubject::~ConcreteSubject()
{
}
State_t ConcreteSubject::GetState()
{
	return _st;
}
void ConcreteSubject::SetState(const State_t& st)
{
	_st = st;
}
