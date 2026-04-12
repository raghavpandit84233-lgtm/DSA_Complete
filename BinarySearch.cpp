#include<iostream>
using namespace std;
int RecursiveBinarySearch(int arr[],int low,int high,int key)
{
    if(low<=high){
        int mid =(low+high)/2 ;
        if(key==arr[mid]) return mid ;
        else if (key<arr[mid]) return RecursiveBinarySearch (arr,low,mid-1,key);
        else return RecursiveBinarySearch(arr,mid+1,high,key);
    }
    
    return -1 ;
}
int IterativeBinarySearch(int arr[],int low,int high,int key)
{
   while(low<=high)
   {
     int mid =(low+high)/2;
     if(key==arr[mid]) return mid ;
     else if (key<arr[mid]) high =mid-1;
     else low=mid+1;
   }
   return -1;
}
int main ()
{
    int arr[15]={1,2,4,6,7,8,10,11,17,19,20,21,24,26,27};
    int key;
    cout<<"Array is a[15]={1,2,4,6,7,8,10,11,17,19,20,21,24,26,27}";
    cout<<"\nEnter element you want to search : ";
    cin>>key ;
    int low=0;
    int high=14;
    int op;
    cout<<"By which method you want to search : \n";
    cout<<"1.Iterative Binary Search\n2.Recursive Binary Search";
    cout<<"\nEnter option number : ";
    cin>>op;
    switch(op)
    {
        case 1 : { int idx= IterativeBinarySearch(arr,low,high,key);
                 if(idx==-1) cout<<"Element not found in the array";
                 else cout<<key<<" is at "<<idx<<" index"; break;}
        case 2 : { int idx= RecursiveBinarySearch(arr,low,high,key);
                 if(idx==-1) cout<<"Element not found in the array";
                 else cout<<key<<" is at "<<idx<<" index";break ;}
                 default : cout<<"Invalid Choice";
    }
  
   return 0;
}