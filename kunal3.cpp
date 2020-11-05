using namespace std;
#include<iostream>
int sum(int *,int *);
int main()
{
int a=5,b=6;
int s=sum(&a,&b);
cout<<"sum is "<<s;

}
int sum(int *x,int *y)
{
return (*x+*y);
}