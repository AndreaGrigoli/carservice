#ifndef STATE_H
#define STATE_H


class Context;

class State
  {
 public:
    virtual void Handle(Context* pContext)=0;
    ~State();
 protected:
     State();
 private:
};


class FirstPageState : public State
{
public:
     FirstPageState();
     ~FirstPageState();
     virtual void Handle(Context* pContext);
 protected:
 private:
};

class SecondPageState : public State
{
public:
     SecondPageState();
     ~SecondPageState();
     virtual void Handle(Context* pContext);
 protected:
 private:
};

class ThirdPageState : public State
{
public:
     ThirdPageState();
     ~ThirdPageState();
     virtual void Handle(Context* pContext);
 protected:
 private:
};

class Context
 {
 public:
     Context(State* pState);
     ~Context();
     void GoNext();
     void ChangeState(State* pState);
 protected:
 private:
     State* _state;
 };
#endif // STATE_H
