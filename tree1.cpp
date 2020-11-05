//finding maximum element in binary tree
#include<iostream>
using namespace std;
int main()
{
    int root_val,left,right,max=INT_MIN;


    int findmax(struct binarytreenode *root)
    {
        //int root_val,left,right,max=INT_MIN;
        if(root !=NULL)
        {
            root_val=root->data;
            left=findmax(root->left);
            right=findmax(root->right);
            if(left>right)
            {
                max=left;

            }
            else 
            {
                max=right;
                if(root_val>max)
                {
                    max=root_val;

                }
            }

        }
    
    //return max;
    }
    return max;

}
