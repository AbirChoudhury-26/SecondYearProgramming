#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct tree_node
{
    struct tree_node *left;
    int data;
    struct tree_node *right;
} node;

node *root, *temp, *p, *q;

void create_node()
{
    temp = (node *)malloc(sizeof(node));
    printf("Enter data to be inserted in node = ");
    scanf("%d", &temp->data);
    temp->left = NULL;
    temp->right = NULL;

    if (root == NULL)
        root = temp;
    else
    {
        p = root;
        while (p != NULL)
        {
            if (temp->data < p->data)
            {
                q = p;
                p = p->left;
            }
            else
            {
                q = p;
                p = p->right;
            }
        }
        if (temp->data < q->data)
            q->left = temp;
        else
            q->right = temp;
    }
}

void search_tree(node *root)
{
    int num, level = 0;
    if (root == NULL)
        printf("\nTree is empty.");
    else
    {
        printf("\nEnter element to search in tree = ");
        scanf("%d", &num);
        p = root;
        while (p != NULL)
        {
            if (p->data == num)
            {
                printf("\nElement found at level %d \n", level);
                break;
            }
            else if (p->data > num)
            {
                p = p->left;
                level++;
            }
            else
            {
                p = p->right;
                level++;
            }
        }
        if (p == NULL)
            printf("\nElement not found in this tree \n");
    }
}
void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

int main()
{

    while (1)
    {
        int ch, n;
        printf("\nEnter choice:");
        printf("\n1:Create BST using linked data\n2:Search\n3:Display\n4:Exit\n");
        scanf("%d", &ch);
        switch (ch)
        {
        case 1:
            printf("\nHow many elements do you want to enter = ");
            scanf("%d", &n);
            for (int j = 0; j < n; j++)
                create_node();
            break;
        case 2:
            search_tree(root);
            break;
        case 3:
        if(root==NULL)
          printf("\nTree is empty");
            inorder(root);
            break;
        case 4:
            exit(0);
        default:
            printf("\nInvalid Choice !!\n");
            break;
        }
    }
    return 0;
}