<<<<<<< HEAD
#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    // Node A1(4);

    //Dynamic creation of node
  Node *head;

  head = new Node(4);

  cout<<head->data<<endl;

  cout<<head->next<<endl;


=======
#include<iostream>

using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = NULL;
    }
};
int main(){
    // Node A1(4);

    //Dynamic creation of node
  Node *head;

  head = new Node(4);

  cout<<head->data<<endl;

  cout<<head->next<<endl;


>>>>>>> 7b0ddf00bcb78678a06bca489ae7779a51d18a7b
}