#include<iostream>
using namespace std;
void swap (char *x,char *y)
{
    int temp=*x;
    *x=*y;
    *y=temp;
    return;
}
int LinearSearchTransposition(char ch[],int l,char key)
{
    for(int i =0;i<l;i++)
    {
        if(key == ch[i])
        {   if(i>0)
         {
            swap(&ch[i],&ch[i-1]);
            return i-1;
         }
            return i; // already 0;
        }
    }
    return -1;
}
int LinearSearchMoveToHead(char ch[],int l,char key)
{
    for(int i =0 ; i<l;i++)
    {
        if(ch[i]==key)
        {
            swap(&ch[i],&ch[0]);
            return 0;
        }
    }
    return -1;
}
int LinearSearch(char ch[],int l,char key)
{for(int i =0 ;i<l;i++){
   if(key == ch[i])
   {
        return i;
   }
}
return -1;
}
int main ()
{int op;
  char ch[10]={'a','b','c','d','e','f','g','h','i','j'};
  char key;
   cout<<"Which operation you wants to perform :\n ";
  cout<<"1.Normal Linear Search\n2.Linear Search with Transposition\n3.Linear Search with Move to Head\n";
  cout<<"Enter Option Number : ";
  cin>>op;
  cout<<"Enter character you want to search : ";
  cin>>key;
 

  switch(op)
  {
case 1: {
    int k =LinearSearch(ch,10,key) ; if (k!=-1) cout<<key<<" is at "<<k<<" index";
             else cout<<"Character not found ";
             break;}
    case 2: {int posT=LinearSearchTransposition(ch,10,key); 
        if (posT!=-1) cout<<key<<" is at "<<posT<<" index";
             else cout<<"Character not found ";
             break;}
    case 3: { int posH=LinearSearchMoveToHead(ch,10,key);
        if (posH!=-1) cout<<key<<" is at "<<posH<<" index";
             else cout<<"Character not found ";
             break;}
  }

   
return 0;
}