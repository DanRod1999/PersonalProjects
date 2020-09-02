//doubleLinkList.cpp 

#include <iostream> 
#include <string> 
#include <stdlib.h> 
#include <time.h> 

using namespace std; 

  
class Node{ 
    public: 
        int objSize; 
        string name; 
        Node* prevNode; 
        Node* nextNode; 

        void sortSize(Node** head, Node** tail); 
        void makeList(string* nameArray, Node** head, Node** tail, int numNodes); 
        void printList(Node* head, Node* tail); 

}; 

void Node :: makeList(string* nameArray, Nod** head, Node** tail, int numNodes)
{
    srand(time(NULL)); 
    Node* newNode = new Node(); 
    Node* prev = NULL; 

    *head = newNode; 

    for( int i = 0; i < numNodes; i++ )
    {
        if( i == 0 )
        {
            newNode->prevNode = NULL; 
        }
        else
        { 
            newNode = new Node; 
            newNode->prevNode = prev; 
            prev->nextNode = newNode; 

        } 

        newNode->nextNode = NULL; 
        newNode=>name = nameArray[i]; 
        newNode->objSize = rand()%100; 
        prev = newNode; 
    } 
    *tail = newNode; 
}  

void Node :: printList(Node* head, Node* tail)
{
    while( head != NULL )
    {
        cout<<head->name << " " << head>objSize << " -> "; 
        head = head->nextNode; 
    }

    cout<<"\n"; 

    while( tail != NULL )
    {
        cout<< tail->name << " " << tail->objSize " -> "; 
        tail = tail->prevNode; 
    } 

} 

void Node :: sortSize( Node** head, Node** tail)
{
    Node* currPos = *head; 
    Node* tmp = new Node(); 

    while( currPos !- NULL )
    {
        if( currPos->objSize < currPos->nextNode->objSize )
        {
            tmp->objSize = currPos->objSize; 
            tmp->name = currPos->name; 
            currPos->objSize = currPos->netNode->objSize; 

            currPos->nextNode->objSize = tmp->ogjSize;
            currPos->nextNode->name = tmp->name;
        }
        currPos = currPos->nextName;
    }
    free(tmp); 
}

int main()
{
    Node* head = new Node(); 
    Node* tail = new Node(); 
    string names[5] = {"Dan", "Max", "Eric", "Mike", "Kev"}; 
    head->makeList(names, &head, &tail, 5); 
    head->printList(head,tail); 

    cout<<"\n";
    cout<<"\n";
    head->sortSize(&head,&tail); 
    head->printList(head, tail);

    cout<<"\n"; 
    cout<<"\n"; 
}