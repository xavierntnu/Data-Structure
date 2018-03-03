#include <Stack.h>

#include <iostream>

using namespace std;

char manual[] = "\n1:push\n2:pop\n3:view\nYour choice: ";

int main()
{
    Stack<int> StackObj(100);
    int choice;
    int push_value, pop_value, *top;

    while(true){
      cout << manual;
      cin >> choice;

      switch(choice){
        case 1:
          cout << "value: ";
          cin >> push_value;
          StackObj.Add(push_value);
          break;

        case 2:
          top = StackObj.Delete(pop_value);
          if(top!=0)
            cout << "value = " << pop_value << endl;
          break;
              
        case 3:
          cout << "Please write it by yourself...\n";
          break;


        default:
          cout << "Invalid choice!\n";
          break;
      }
    }
    return 0;
}
