#include<bits/stdc++.h>
using namespace std;

class Stack{


  int size;
  int * arr;
  int top;
  public:
    Stack() {
      top = -1;
      size = 1000;
      arr = new int[size];
    }

  void Push(int val){
    top++;
    arr[top]=val;
  }


  int Pop(){
    int x= arr[top];
     top--;

    return x;

  }


  int Size(){
    return top+1;
  }





  int Top(){
   

  return arr[top];

  }

  
};
int main()
{

  Stack st;
  st.Push(3);
  st.Push(4);
  st.Push(5);
  st.Push(6);

   cout << "Top of stack is before deleting any element " << st.Top() << endl;
  cout << "Size of stack before deleting any element " << st.Size() << endl;
  cout << "The element deleted is " << st.Pop() << endl;
  cout << "Size of stack after deleting an element " << st.Size() << endl;
  cout << "Top of stack after deleting an element " << st.Top() << endl;
  return 0;
}

