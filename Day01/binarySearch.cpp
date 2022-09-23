#include<iostream>
#include<algorithm>
using namespace std;
int binarySearch(int arr[],int num,int size);
void display(int arr[],int len);
int main()
{
    int len=rand()%10+5;
    int *arr=new int[len];
    for(int i=0;i<len;i++)
    {
        arr[i]=rand();
    } 
    sort(arr,arr+len);
    display(arr,len);

    int searchNum;
    cout<<"please input:"<<endl;
    cin>>searchNum;
    int result=binarySearch(arr,searchNum,len);
    if(result==-1)
        cout<<"can't find..."<<endl;
    else{  
        cout<<"position:"<<result<<endl;
    }
    
    return 0;
}

//二分查找
int binarySearch(int arr[],int num,int size)
{
    int right=size;
    int left=0;
    int mid=(left+right)/2;

    while(left<=right)//注意这里有等号
    {
       mid=(left+right)/2;
       if(arr[mid]==num)
       {
        return mid;
       }else if(arr[mid]>num)
       {
        right=mid-1;
       }else{
        left=mid+1;
       }
    }

    return -1;
}
void display(int arr[],int len){
    for(int i=0;i<len;i++)
        cout<<arr[i]<<"   ";
    
    cout<<endl;
}
