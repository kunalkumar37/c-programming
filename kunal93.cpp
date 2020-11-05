#include<iostream>
using namespace std;
int main()
{
    void levelorder(struct binarytree *root)
    {
        struct  binarytree *temp;
        struct queue *q=createqueue();
        if(!root)
        return;
        enqueue(q,root);
        while(!isemptyqueue(q))
        {
            temp=dequeue(q);
            printf("%d",temp->data);
            if(temp->left)
            enqueue(q,temp->left);
            if(temp->right)
            enqueue(q,temp->right);

        }
        deletequeue(q);

    }
    return 0;
}