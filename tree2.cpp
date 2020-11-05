#include<iostream>
using namespace std;
int main()
{
    int findmaxusinglevelorder(struct binarytreenode *root)
    {
        struct binarytreenode *temp;
        int max=INT_MIN;
        struct queue *q=createqueue();
        enqueue(q,root);
        while(!isemptyqueue(q))
        {
            temp=dequeue(q);
            if(max<temp->data)
            
                max=temp->data;
                if(temp->left)
                enqueue(q,temp->left);

                if(temp->right)
                
                    enqueue(q,temp->right);
                
            
            
        }
        dequeue(q);

    }
    return max;

}