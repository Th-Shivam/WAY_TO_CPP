#include <iostream>
using namespace std;

class Node {
    public:
    int data ;
    Node* next ;

    Node(int data){
        this->data = data ;
        this->next = NULL;
    }
};

class List{
    Node* head ;
    Node* tail ;

    

    public:

    List(){
        head = tail = NULL ;
    }

    void PushFront(int data){

        Node* newNode = new Node(data);

        if(head == NULL){
            head = tail = newNode;
            return ;
        } else{
            newNode->next = head ;
            head = newNode;
        }
    }

    void display(){
        Node* temp = head ;

        while(temp != NULL){
            cout<< temp->data << " ";
            temp = temp->next ;
        }
    }


};

int main(){
    List ll;
    ll.PushFront(10);
    ll.PushFront(20);
    ll.display();
    return 0 ;
}