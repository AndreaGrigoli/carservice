 #include "State.h"
 #include <iostream>
using namespace std;

State::State()
{
    //ctor
}

State::~State()
{
    //dtor
}


FirstPageState::FirstPageState()
{}

FirstPageState::~FirstPageState()
{}


void FirstPageState::Handle(Context* pContext)
{
     cout <<"FirstPageState" << endl;
     pContext->ChangeState(new SecondPageState());
}

SecondPageState::SecondPageState()
{}

SecondPageState::~SecondPageState()
{}


void SecondPageState::Handle(Context* pContext)
{
     cout <<"SecondPageState" << endl;
     pContext->ChangeState(new ThirdPageState());
}

ThirdPageState::ThirdPageState()
{}

ThirdPageState::~ThirdPageState()
{}


void ThirdPageState::Handle(Context* pContext)
{
     cout <<"ThirdPageState" << endl;
     pContext->ChangeState(new FirstPageState());
}


Context::Context(State* pState)
{
     this->_state = pState;
 }

 Context::~Context()
 {}

 void Context::GoNext()
 {
     if(NULL != this->_state)
     {
         this->_state->Handle(this);
     }
}

 //Change state
 void Context::ChangeState(State* pState)
 {
     this->_state = pState;
 }

