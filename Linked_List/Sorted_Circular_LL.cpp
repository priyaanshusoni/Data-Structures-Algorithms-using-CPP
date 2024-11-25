#include<bits/stdc++.h>

using namespace std;

class Node{
    public : 
    int data;
    Node* next;

    Node(int data1){
        this->data = data1;
        next = NULL;
    }

    Node(int data1 , Node* next1){
        this->data = data1;
        this->next = next1;
    }

};


Node*  convert2LL(vector<int>&arr){
  Node* head = new Node(arr[0]);

  Node* temp = head;

  for(int i=1;i<arr.size();i++){
    Node * newnode = new Node(arr[i]);
    temp->next = newnode;
    temp = newnode;
  }
  temp->next = head;

  return head;
}

void printLL(Node * head){
      Node* temp = head;

   do
   {
       cout<<temp->data<<"->";
        temp=temp->next;
   } while (temp!=head);
}




Node * insertcircularLL(Node * head , int data){
     
        Node* temp = head;
        
     
        
        Node* prev = NULL;
        do{
            
           if(temp->data > data){
               break;
           }


          
            prev = temp;
            temp=temp->next;
            
            
            
            
        }while(temp!=head);

     
        
        if(prev==NULL){
            Node * newnode = new Node(data);
            Node * temp2 = head;
            Node * prev2 = temp2;
            
            do{
                prev2 = temp2;
                temp2=temp2->next;
            }while(temp2!=head);
            
            
            prev2->next = newnode;
            newnode->next = head;
            
            return newnode;
        }
        
        Node* newnode = new Node(data);
        
        Node* temp2 = prev->next;
        
        
        prev->next = newnode;
        newnode->next = temp2;
        
        return head;
}

int main(){

    vector<int> arr = {1,2,4,5};

    Node * head = convert2LL(arr);

    // printLL(head);


    Node * newhead = insertcircularLL(head , 0);

    printLL(newhead);




  
   



    
}