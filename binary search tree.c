  #include <stdio.h>
  #include <stdlib.h>

  struct treeNode {
        int data;
        struct treeNode *left, *right;
  };

  struct treeNode *root = NULL;

  /* create New node */
  struct treeNode* createNode(int data) {
        struct treeNode *node;
        node = (struct treeNode *)malloc(sizeof (struct treeNode));
        node->data = data;
        node->left = node->right = NULL;
        return node;
  }

  /* insert new node into the binary search tree */
  void insert(struct treeNode **myNode, int data) {
        if (*myNode == NULL) {
                *myNode = createNode(data);
        } else if (data < (*myNode)->data) {
                insert(&(*myNode)->left, data);
        } else if (data > (*myNode)->data) {
                insert(&(*myNode)->right, data);
        }
  }

  /* Find the given key value in Binary Search Tree */
  void searchAnElement(struct treeNode *myNode, int data) {
        if (myNode == NULL) {
                printf("Element not found in ur tree\n");
        } else if (data < myNode->data) {
                searchAnElement(myNode->left, data);
        } else if (data > myNode->data) {
                searchAnElement(myNode->right, data);
        } else if (data == myNode->data) {
                printf("I am present!!\n");
        }
  }

  /* find the minimum from our binary search tree */
  void findMin(struct treeNode *myNode) {
        if (myNode == NULL) {
                printf("Tree not Exists\n");
        } else if (myNode->left == NULL) {
                printf("Min element in tree:%d\n",
                        myNode->data);
        } else {
                findMin(myNode->left);
        }

  }

  /* Find Maximum from Binary search tree */
  void findMax(struct treeNode *myNode) {
        if (myNode == NULL) {
                printf("Tree Not Exists\n");
        } else if (myNode->right == NULL) {
                printf("Max element in tree: %d\n",
                        myNode->data);
        } else {
                findMax(myNode->right);
        }
  }

  int main() {
        int data, ch;
        while (1) {
                printf("1. Insertion in Binary Search Tree\n");
                printf("2. Find Minimum\n3. Find Maximum\n");
                printf("4. Search for an element\n5. Exit\n");
                printf("Enter your choice:");
                scanf("%d", &ch);
                switch (ch) {
                        case 1:
                                while (1) {
                                printf("Enter ur data to insert:");
                                scanf("%d", &data);
                                insert(&root, data);
                                printf("Do you wanna continue insertion(1/0):");
                                scanf("%d", &ch);
                                if (ch == 0)
                                        break;
                                }
                                break;
                        case 2:
                                findMin(root);
                                break;
                        case 3:
                                findMax(root);
                                break;
                        case 4:
                                printf("Enter data to search:");
                                scanf("%d", &data);
                                searchAnElement(root, data);
                                break;
                        case 5:
                                exit(0);
                                break;
                        case 6:
                                printf("root->data: %d\n", root->data);
                                break;
                        default:
                                printf("Please enter correct option\n");
                                break;
                }
        }

  }
