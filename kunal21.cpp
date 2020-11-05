#include<iostream>
using namespace std;
char R[200][200];

bool isvalid(int i,int j,int r,int c){
 if(i>=0 && i<r && j>=0 && j<c)
 return true;

 return false;
}
void getAdj(int i,int j,int r,int c)//Bombing the adjacent cells
{
 char res='1';

 if(isvalid(i-1,j,r,c) && R[i-1][j]!='O')
 R[i-1][j]=res;
 if(isvalid(i+1,j,r,c) && R[i+1][j]!='O')
 R[i+1][j]=res;
 if(isvalid(i,j-1,r,c) && R[i][j-1]!='O')
 R[i][j-1]=res;
 if(isvalid(i,j+1,r,c) && R[i][j+1]!='O' )
 R[i][j+1]=res;
}
int main()
{
 int r,c;
 long int n;
 cin>>r>>c>>n;
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++){
 cin>>R[i][j];}}

 if(n==1)
 {
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++){
 cout<<R[i][j];}
 cout<<endl;
 }
 goto end;
 }

 else if(n%2==0)
 {
 for(int i=0;i<r;i++)
 {
 for(int j=0;j<c;j++)
 {
 cout<<"O";
 }
 cout<<endl;
 }
 goto end;
 }

 else
 {
 for (int i=0, s = (n<8) ? (n-1)/2 : (n%4 + 3) / 2; i<s; i++)
 {                                                           
 for(int i=0;i<r;i++){                                       
 {for(int j=0;j<c;j++)                
 {                              
 if(R[i][j]=='O')
 {
 R[i][j]='1';
 getAdj(i,j,r,c);
 }
 }
 }}
 for(int i=0;i<r;i++)
 {for(int j=0;j<c;j++)
 {
 if(R[i][j]=='.')
 {
 R[i][j]='O';
 }
 else
 {
 R[i][j]='.';
 }
 }}


 }}
 for(int i=0;i<r;i++){
 for(int j=0;j<c;j++){
 cout<<R[i][j];}
 cout<<endl;
 }


end: return 0;



}
