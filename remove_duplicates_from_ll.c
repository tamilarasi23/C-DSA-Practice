#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Utility to create a new node
struct Node* newNode(int data) {
    struct Node* temp = (struct Node*)malloc(sizeof(struct Node));
    temp->data = data;
    temp->next = NULL;
    return temp;
}

// Print linked list
void printList(struct Node* head) {
    while (head != NULL) {
        printf("%d -> ", head->data);
        head = head->next;
    }
    printf("NULL\n");
}

// Remove duplicates without using extra space (ptr2 = ptr1->next)
void removeDuplicates(struct Node* head) {
    struct Node* ptr1 = head;
    struct Node* ptr2,*dup;

    while(ptr1!=NULL && ptr1->next!=NULL) {
    	ptr2 = ptr1;
	while(ptr2->next!=NULL) {
		if (ptr2->next->data == ptr1->data) {
			dup = ptr2->next;
			ptr2->next = ptr2->next->next;
			free(dup);
		}
		else {
			ptr2=ptr2->next;
		}
	}
	ptr1=ptr1->next;
    }

}

int main() {
    struct Node* head = newNode(10);
    head->next = newNode(20);
    head->next->next = newNode(10);
    head->next->next->next = newNode(30);
    head->next->next->next->next = newNode(20);

    printf("Original list:\n");
    printList(head);

    removeDuplicates(head);

    printf("List after removing duplicates:\n");
    printList(head);

    return 0;
}
