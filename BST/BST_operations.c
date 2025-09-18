#include <stdio.h>
#include <stdlib.h>

// Node structure
typedef struct Node {
    int data;
    struct Node *left, *right;
} Node;

// Create a new node
Node* createNode(int data) {
    Node* newNode = (Node*)malloc(sizeof(Node));
    newNode->data = data;
    newNode->left = newNode->right = NULL;
    return newNode;
}

// Insert into BST
Node* insert(Node* root, int key) {
    if (root == NULL) return createNode(key);
    if (key < root->data) root->left = insert(root->left, key);
    else if (key > root->data) root->right = insert(root->right, key);
    return root; // unchanged if duplicate
}

// Search in BST
Node* search(Node* root, int key) {
    if (root == NULL || root->data == key) return root;
    if (key < root->data) return search(root->left, key);
    return search(root->right, key);
}

// Find minimum value node
Node* minValueNode(Node* node) {
    Node* current = node;
    while (current && current->left != NULL)
        current = current->left;
    return current;
}

// Delete a node
Node* deleteNode(Node* root, int key) {
    if (root == NULL) return root;

    if (key < root->data)
        root->left = deleteNode(root->left, key);
    else if (key > root->data)
        root->right = deleteNode(root->right, key);
    else {
        // Case 1: No child or one child
        if (root->left == NULL) {
            Node* temp = root->right;
            free(root);
            return temp;
        }
        else if (root->right == NULL) {
            Node* temp = root->left;
            free(root);
            return temp;
        }
        // Case 2: Two children
        Node* temp = minValueNode(root->right);
        root->data = temp->data;
        root->right = deleteNode(root->right, temp->data);
    }
    return root;
}

// Traversals
void inorder(Node* root) {
    if (root != NULL) {
        inorder(root->left);
        printf("%d ", root->data);
        inorder(root->right);
    }
}

void preorder(Node* root) {
    if (root != NULL) {
        printf("%d ", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}

void postorder(Node* root) {
    if (root != NULL) {
        postorder(root->left);
        postorder(root->right);
        printf("%d ", root->data);
    }
}

// Find min & max
int findMin(Node* root) {
    Node* current = root;
    while (current->left != NULL) current = current->left;
    return current->data;
}

int findMax(Node* root) {
    Node* current = root;
    while (current->right != NULL) current = current->right;
    return current->data;
}

// Height of BST
int height(Node* root) {
    if (root == NULL) return -1; // convention: height of empty tree = -1
    int lh = height(root->left);
    int rh = height(root->right);
    return (lh > rh ? lh : rh) + 1;
}

// Driver
int main() {
    Node* root = NULL;

    // Insert elements
    root = insert(root, 50);
    root = insert(root, 30);
    root = insert(root, 70);
    root = insert(root, 20);
    root = insert(root, 40);
    root = insert(root, 60);
    root = insert(root, 80);

    printf("Inorder (sorted): ");
    inorder(root);   printf("\n");

    printf("Preorder: ");
    preorder(root);  printf("\n");

    printf("Postorder: ");
    postorder(root); printf("\n");

    // Search
    int key = 40;
    Node* found = search(root, key);
    printf("Search %d: %s\n", key, (found ? "Found" : "Not Found"));

    // Min & Max
    printf("Min = %d, Max = %d\n", findMin(root), findMax(root));

    // Height
    printf("Height = %d\n", height(root));

    // Delete
    root = deleteNode(root, 50);
    printf("Inorder after deleting 50: ");
    inorder(root); printf("\n");

    return 0;
}

