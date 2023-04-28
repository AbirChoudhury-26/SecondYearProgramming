#include <stdio.h>
#include <stdlib.h>
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
    printf("\nEnter data to be inserted in node = ");
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

void inorder(node *root)
{
    if (root == NULL)
        return;
    inorder(root->left);
    printf("%d ", root->data);
    inorder(root->right);
}

void preorder(node *root)
{
    if (root == NULL)
        return;
    printf("%d ", root->data);
    preorder(root->left);
    preorder(root->right);
}

void postorder(node *root)
{
    if (root == NULL)
        return;
    postorder(root->left);
    postorder(root->right);
    printf("%d ", root->data);
}


int main()
{
    int ch, n;
    while (1)
    {
        printf("\nEnter the choice");
        printf("\n1:Create a BST using linked data\n2:Add a node\n3:Preorder traversal\n4:Inorder traversal\n5:Postorder traversal\n6:Exit\n");
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
            create_node();
            break;
        case 3:
            if (root == NULL)
                printf("\nTree is empty.\n");
            else
                preorder(root);
            break;
        case 4:
            if (root == NULL)
                printf("\nTree is empty.\n");
            else
                inorder(root);
            break;
        case 5:
            if (root == NULL)
                printf("\nTree is empty.\n");
            else
                postorder(root);
            break;
        case 6:
            exit(0);
        default:
            printf("\nInvalid Choice !!\n");
            break;
        }
    }
    return 0;
}