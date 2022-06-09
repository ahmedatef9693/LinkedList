#include<iostream>
using namespace std;
#include "Node.h";


class LinkedList{
    private:
    Node *head;
    int numberofItems;

     public:
     LinkedList(){
        head = NULL;
        numberofItems = 0;
     }
    bool isEmpty(){
        //if head equals null return true else return false
        return(head == NULL);
    }
    int countItems(){
        return numberofItems;
    }
    void insert_start(int item){
        
        Node* newNode = new Node;
        
        newNode->data = item;
        if(isEmpty()){           
            newNode->Next = NULL;
            head = newNode;

        }else{
            newNode->Next = head;
            head = newNode;
            
        }
         
        numberofItems++;

    }
    void insertAt(int item, int index){
        if(index == 0){
            //inserting item at the beginning
            insert_start(item);
        }
        else if(index == numberofItems){
            //inserting item at the end of the linked list
            Node* tempNode = new Node;
            tempNode = head;
            while (tempNode->Next != NULL)
            {
                tempNode = tempNode->Next;
            }
            Node* newNode = new Node;
            newNode->data = item;
            tempNode->Next = newNode;
            


            numberofItems++;

        }else{
            Node*prev = new Node;
            Node*currentNode = new Node;
            Node*newNode = new Node;
            newNode->data = item;
            currentNode = head;
            int counter = 0;
            while(counter != index){
                prev = currentNode;  
                currentNode = currentNode->Next;
                counter++;
            }
            cout<<"previous node : "<<prev->data<<endl;
            cout<<"next node : "<<currentNode->data<<endl;

            prev->Next = newNode;
            newNode->Next = currentNode;
            numberofItems++;

        }

    }
    void display(){
        Node*tempNode = new Node;
        int counter = 0;
        tempNode = head;
        if(isEmpty()){
            cout<<"There is no Elements In Our Linked List"<<endl;
        }else{
            while(counter != numberofItems){
                cout<<"Element at Index = "<<counter<<" is : "<<tempNode->data<<endl;
                tempNode = tempNode->Next;
                counter++;
            }
        }

    }
    bool isFound(int item){
        Node* tempNode = head;
        
        bool found = false;
        int count = 0; 
        while(count != numberofItems){
            if(tempNode ->data == item){
                found = true;
            }
            count++;
            tempNode = tempNode->Next;
        }

       return found;
    }

    void deleteItem(int item){
        
        if(item == head->data){
            Node* delPtr = head;
            cout<<"true"<<endl;
            head = head->Next;
            delete delPtr;
            numberofItems--;
        }else{
            Node* tempNode = head;
            Node* previousNode = new Node;
            Node* savedNode = new Node;
            bool found = false;
            while (tempNode->data != item)
            {
                previousNode = tempNode;
                tempNode = tempNode->Next;
                if(tempNode->data == item){
                    found = true;
                    savedNode =tempNode;
                }
            }
            if(found == true){
                previousNode->Next = savedNode->Next;
            }
            delete savedNode;
            
            numberofItems--;
        }
        
    }

};