#include <stdio.h>
#include <stdlib.h>
#include <malloc.h>
struct node
{
    int data;
    struct node *left;
    struct node *right;
} *root = NULL, *newnode;

struct node *create(struct node *root, int val)
{

    if (root == NULL)
    {
        newnode = (struct node *)malloc(sizeof(struct node));
        newnode->data = val;
        newnode->left = NULL;
        newnode->right = NULL;
        return (newnode);
    }
    else if (val < root->data)
        root->left = create(root->left, val);
    else if (val > root->data)
        root->right = create(root->right, val);
    return (root);
}

void inorder(struct node *root)
{
    if (root != NULL)
    {
        inorder(root->left);
        printf("%d\t", root->data);
        inorder(root->right);
    }
}
void preorder(struct node *root)
{
    if (root != NULL)
    {
        printf("%d\t", root->data);
        preorder(root->left);
        preorder(root->right);
    }
}
void postorder(struct node *root)
{
    if (root != NULL)
    {
        postorder(root->left);
        postorder(root->right);
        printf("%d\t", root->data);
    }
}

int main()
{
    struct node *root = NULL;
    int choice;
    int i,n,a[100];
    do
    {
        printf("\n****Main menu****\n");
        printf(" 1.Create\n 2.In order Traversal\n 3.Pre order Traversal\n 4.Post order Traversal\n 5.Exit\n");
        printf("Enter your choice\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            printf("Enter the number of nodes:\n");
			scanf("%d",&n);
			printf("Enter the node values\n");
            for(i=0;i<n;i++)
            {
            	scanf("%d",&a[i]);
            	root=create(root,a[i]);
			}
            break;
        case 2:
            inorder(root);
            break;
        case 3:
            preorder(root);
            break;
        case 4:
            postorder(root);
            break;
        case 5:
            exit(0);
        default:
            printf("Enter the valid Input");
            break;
        }
    } while (choice > 0 && choice <=5);
    return 0;
}