#include <stdio.h>
#include <string.h>

// typedef for structure
typedef struct {
    char make[20];
    char model[20];
    unsigned int year : 12;      // bit-field to store year (up to 4095)
    unsigned int electric : 1;   // bit-field for boolean flag
} Car;

// Function to display Car info (passing struct by value)
void displayCar(Car c) {
    printf("Make: %s\nModel: %s\nYear: %u\nElectric: %s\n",
           c.make, c.model, c.year, c.electric ? "Yes" : "No");
}

// Self-referencing structure for linked list node
typedef struct Node {
    int data;
    struct Node *next;
} Node;

// Function to create node
Node* createNode(int val) {
    Node* newNode = (Node*) malloc(sizeof(Node));
    if (newNode != NULL) {
        newNode->data = val;
        newNode->next = NULL;
    }
    return newNode;
}

// Function to print linked list
void printList(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        printf("%d -> ", temp->data);
        temp = temp->next;
    }
    printf("NULL\n");
}

int main() {
    // Using typedef struct Car
    Car myCar;
    strcpy(myCar.make, "Tesla");
    strcpy(myCar.model, "Model S");
    myCar.year = 2023;
    myCar.electric = 1;

    displayCar(myCar);

    // Linked List example
    Node* head = createNode(10);
    head->next = createNode(20);
    head->next->next = createNode(30);

    printf("Linked List: ");
    printList(head);

    // Free allocated memory
    Node* current = head;
    while(current) {
        Node* next = current->next;
        free(current);
        current = next;
    }

    return 0;
}
