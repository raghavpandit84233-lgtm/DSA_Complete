#include<iostream>
#include<vector>
using namespace std;
void SelectionSort(vector<int>& arr)
{
  
  for(int i =0 ; i<arr.size() -1;i++)
    {   int minIdx= i ;
      for(int j = i+1 ; j<arr.size(); j++)
        {
          if(arr[j]<arr[minIdx])
          {
            minIdx=j;
          }
        }
     swap(arr[i],arr[minIdx]);
    }
}
int main ()
{
  int n ;
  cout<<"Enter number of elements in the array : ";
    cin>>n;
  vector <int> arr;
  cout<<"Enter elements : ";
  for(int i=0 ; i<n;i++)
    {
      int x ;
      cin>>x;
      arr.push_back(x);  // adding elements
    }
   SelectionSort(arr);
  cout<<"Sorted Array : ";
  for(int i=0; i<arr.size();i++)
    {
      cout<<arr[i] <<" ";
    }
 
 return 0;  
}
