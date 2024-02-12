#include <stdio.h>
#include <stdlib.h>
struct node
{
    int info; 
    struct node *left, *right; 
}; 
struct node *createnode(int key)
{
    struct node *newnode = (struct node*)malloc(sizeof(struct node));
    newnode->info = key;
    newnode->left = NULL;
    newnode->right = NULL;
    return(newnode);
}

int heightoftree(struct node *root)
{
    int max;
    if (root!=NULL)
    {
        int leftsubtree = heightoftree(root->left);
        int rightsubtree = heightoftree(root->right);
        if (leftsubtree > rightsubtree)
        {
            max = leftsubtree + 1;
            return max;
        }
        else
        {
            max = rightsubtree + 1;
            return max;
        }
    }
}

void currentlevel(struct node *root, int level)
{
    if (root != NULL) 
    {
        if (level == 1)
        {
            printf("%d ", root->info);
        }
        else if (level > 1) 
        { 
            currentlevel(root->left, level-1); 
            currentlevel(root->right, level-1);
        }			
    }
}

int main() 
{   
    struct node *newnode = createnode(25); 
    newnode->left = createnode(27); 
    newnode->right = createnode(19); 
    newnode->left->left = createnode(17); 
    newnode->left->right = createnode(91);
    newnode->right->left = createnode(13);
    newnode->right->right = createnode(55);	
    /* Sample Tree 1:
                     25
                   /    \  
                  27     19   
                 / \     / \ 
               17  91   13 55 
     */
    printf("Level Order Traversal of Tree 1 is \n");	
    int i;
    int height = heightoftree(newnode);
    for(i = 1; i <= height; i++)      
    {
        currentlevel(newnode,i);
    }
    struct node *node = createnode(1);
    node->right = createnode(2);
    node->right->right = createnode(3);
    node->right->right->right = createnode(4);
    node->right->right->right->right = createnode(5);
    /* Sample Tree 2:   Right Skewed Tree (Unbalanced).
                     1   
                      \
                       2    
                        \    
                         3 
                          \
                           4
                            \
                             5
     */
    printf("\n\nLevel Order Traversal of Tree 2 is \n");
    height = heightoftree(node);
    for(i = 1; i <= height; i++)    
    { 
        currentlevel(node,i);
    }
    struct node *root = createnode(15); 
    /* Sample Tree 3- Tree having just one root node.
                    15                 
     */
    printf("\n\nLevel Order Traversal of Tree 3 is \n");
    height = heightoftree(root);
    for(i = 1; i <= height; i++)    
    {
        currentlevel(root,i);
    }                      
    return 0; 
}
