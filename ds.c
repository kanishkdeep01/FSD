#include <stdio.h>
#include <stdlib.h>

// Node structure for stack
typedef struct Node {
    int data;
    struct Node* next;
} Node;

// Stack structure
typedef struct Stack {
    Node* top;
} Stack;

// Initialize stack
void initStack(Stack* s) {
    s->top = NULL;
}

// Check if stack is empty
int isEmpty(Stack* s) {
    return s->top == NULL;
}

// Push operation
void push(Stack* s, int value) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    if (!newNode) {
        printf("Memory allocation failed\n");
        return;
    }
    newNode->data = value;
    newNode->next = s->top;
    s->top = newNode;
    printf("%d pushed to stack\n", value);
}

// Pop operation
int pop(Stack* s) {
    if (isEmpty(s)) {
        printf("Stack underflow\n");
        return -1; // Indicate error
    }
    Node* temp = s->top;
    int popped = temp->data;
    s->top = temp->next;
    free(temp);
    printf("%d popped from stack\n", popped);
    return popped;
}

// Display stack
void display(Stack* s) {
    Node* curr = s->top;
    printf("Stack: ");
    while (curr) {
        printf("%d ", curr->data);
        curr = curr->next;
    }
    printf("\n");
}

int main() {
    Stack s;
    initStack(&s);

    push(&s, 10);
    push(&s, 20);
    push(&s, 30);
    display(&s);

    pop(&s);
    display(&s);

    if (isEmpty(&s))
        printf("Stack is empty\n");
    else
        printf("Stack is not empty\n");

    // Clean up remaining nodes
    while (!isEmpty(&s)) {
        pop(&s);
    }

    return 0;
}
