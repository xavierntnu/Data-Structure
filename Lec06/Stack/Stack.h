#include <iostream>

using namespace std;

template <class KeyType>
class Stack
{  //objects: A finite ordered list with zero or more elements
    public:
        Stack(int MaxStartSize);
        //Create an empty stack whose maximun size if MaxStartSize
        bool IsFull();
        // if number of elements in the stack is equal to the maximun size
        // of the stack, return TRUE(1) else return FALSE(0)
        void Add(const KeyType& item);
        // if IsFull(), then StackFull(); else insert item into the top of the stack
        bool IsEmpty();
        // if number of the stack is 0, return TRUE(1) else return FALSE(0)
        KeyType* Delete(KeyType&);
        // if isEmpty(), then StackEmpty() and return 0;
        // else remove and return a pointer to the top element of the stack

    private:
      int top;
      KeyType *stack;
      int MaxSize;
};


template <class KeyType>
Stack<KeyType>::Stack(int MaxStackSize): MaxSize(MaxStackSize)
{
  stack = new KeyType[MaxSize];
  top = -1;
}

template <class KeyType>
inline bool Stack<KeyType>::IsFull()
{
  if(top==MaxSize) return true;
  else return false;
}


template <class KeyType>
inline bool Stack<KeyType>::IsEmpty()
{
  if(top == -1) return true;
  else return false;
}


template <class KeyType>
void Stack<KeyType>::Add(const KeyType &x)
{
  /*add an item into the global stack*/
  if(IsFull())
    cout << "stack is full" << endl;//stack_full();
  else
    stack[++top] = x;
}


template <class KeyType>
KeyType* Stack<KeyType>::Delete(KeyType &x)
{
  if(IsEmpty()){
    cout << "stack is empty" << endl; //stack_Empty();
    return 0;
  }
  x = stack[top--];
  return &x;
}
