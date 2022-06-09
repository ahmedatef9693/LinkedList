#include<iostream>
#include "MyLinkedList/LinkedList.h";
using namespace std;



int main(){

    LinkedList myList = LinkedList();
    myList.insert_start(1);
    myList.insert_start(2);
    myList.insert_start(4);
    myList.insert_start(5);
    myList.insert_start(10);
    myList.insertAt(22,3);
    myList.display();
    // cout<<"-----------------------------------------"<<endl;
    // myList.insertAt(5,3);
    // myList.display();
    // cout<<"Number of items = "<<myList.countItems()<<endl;
    // bool found = myList.isFound(5);
    // cout<<" answer is : "<<found<<endl;
    cout<<"-----------------------------------------"<<endl;
    myList.deleteItem(4);
    myList.display();



    
    return 0;
    

}