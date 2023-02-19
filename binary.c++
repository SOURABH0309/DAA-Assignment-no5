#include<iostream>
using namespace std;
int binaryserach(int arr[],int beg,int end,int S1)
{
    if (beg<=end)
    {
        int mid=(beg+end)/2;
        if (arr[mid]==S1)
        {
            return mid;
        }
        if (arr[mid]>S1)
        {
            return binaryserach(arr,beg,mid-1,S1);
        }
        if (arr[mid]<S1)
        {
            return binaryserach(arr,mid+1,end,S1);
        }
        return -1;
    }  
}
int main()
{
    int arr[]={10,20,30,40,50,60};
    int n=sizeof(arr)/sizeof(arr[0]);
    int S1;
    cout<<"Enter the number to search:-> ";
    cin>>S1;
    int index=binaryserach(arr,0,n-1,S1);
    if (index==-1)
    {
        cout<<S1<<" is not present in an array";
    }
    else
    {
        cout<<S1<<" is present at index "<<index<<" in given array";
    }
    
return 0;
}