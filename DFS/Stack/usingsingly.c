#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

struct Stack {
    struct Node* top;
};

// Function to create a new node
struct Node* newNode(int data) {
    struct Node* node = (struct Node*)malloc(sizeof(struct Node));
    node->data = data;
    node->next = NULL;
    return node;
}

// Function to push an item onto the stack
void push(struct Stack* stack, int data) {
    struct Node* node = newNode(data);
    node->next = stack->top;
    stack->top = node;
    printf("%d pushed to stack\n", data);
}

// Function to pop an item from the stack
int pop(struct Stack* stack) {
    if (stack->top == NULL) {
        printf("Stack is empty\n");
        return -1;
    }
    struct Node* temp = stack->top;
    int popped = temp->data;
    stack->top = temp->next;
    free(temp);
    return popped;
}

// Function to print the contents of the stack
void printStack(struct Stack* stack) {
    struct Node* temp = stack->top;
    while (temp != NULL) {
        printf("%d ", temp->data);
        temp = temp->next;
    }
    printf("\n");
}

int main() {
    struct Stack* stack = (struct Stack*)malloc(sizeof(struct Stack));
    stack->top = NULL;

    push(stack, 10);
    push(stack, 20);
    push(stack, 30);

    printf("Popped element from stack: %d\n", pop(stack));
    printStack(stack);

    return 0;
}