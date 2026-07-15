#include <iostream>
using namespace std;

class Node {
public:
    // To store the Value or data
    char data;

    // Pointer to point the Previous Element
    Node* prev;

    // Pointer to point the Next Element
    Node* next;

    // Constructor
    Node(char x) {
        data = x;
        prev = nullptr;
        next = nullptr;
    }
};

void printCurrentState(Node* head, Node* currentNode);
Node* Undo(Node* currentNode);
Node* Redo(Node* currentNode);

int main() {
	 // Create the first node (head of the list)
	Node* head = new Node('a') ;
	
	 // Create and link the second node
    head->next = new Node('b');
    head->next->prev = head;
    
    
    // Create and link the third node
    head->next->next = new Node('c');
    head->next->next->prev = head->next;

    // Create and link the fourth node
    head->next->next->next = new Node('d');
    head->next->next->next->prev = head->next->next;
	
	Node* currentNode = head->next->next->next;
	
	cout << "start node" << endl;
	printCurrentState(head, currentNode);
	
	char a;
	cin >> a ;
	while (a!='s') {
		
	if(a == '<') {
		currentNode = Undo(currentNode) ;
		cout << "output" << endl;
		printCurrentState(head, currentNode);
	} else if (a=='>') {
		currentNode = Redo(currentNode) ;
		cout << "output" << endl;
		printCurrentState(head, currentNode);
	}
		cin >> a;
	}
	
	
    

    return 0;
    
}

// Function definition
Node* Undo(Node* currentNode) {
    if (currentNode != nullptr && currentNode->prev != nullptr) {
        return currentNode->prev; 
	}
    return currentNode; 
}

Node* Redo(Node* currentNode) {
    if (currentNode != nullptr && currentNode->next != nullptr) {
        return currentNode->next; 
    }
    return currentNode;
}


void printCurrentState(Node* head, Node* currentNode) {
    if (currentNode == nullptr) {
        cout << "(Empty)" << endl;
        return;
    }
    
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data;
       
        if (temp == currentNode) {
            break;
        }
        temp = temp->next;
    }
    cout << endl;
}
