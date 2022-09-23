#include <iostream>
#include <algorithm>
using namespace std;

void insertSort(int arr[],int n);
void display(int arr[],int len);
template <typename T>
bool equal(T arr[],T compare[],int len);


int main()
{
    int len=rand()%10+5;
    int *arr=new int[len];
    int *compare=new int[len];
    for(int i=0;i<len;i++)
    {
        arr[i]=rand();
        compare[i]=arr[i];
    } 
    display(arr,len);
    insertSort(arr,len);
    display(arr,len);

//系统排序对照组
   sort(compare,compare+len);

   // display(compare,len);

    cout<<equal(arr,compare,len)<<endl;
    
    delete[] arr;
    delete[] compare;
    return 0;
    return 0;
}

//插入排序：前面的每次都相当于一个有序数组
void insertSort(int arr[],int n)
{
    int i=0;
    int j=0;

    for(i=1;i<n;i++){
        for(j=i;j>0 && arr[j]<arr[j-1];--j){
           
                swap(arr[j],arr[j-1]);
        }
    }
}

void display(int arr[],int len){
    for(int i=0;i<len;i++)
        cout<<arr[i]<<"   ";
    
    cout<<endl;
}

template <typename T>
bool equal(T arr[],T compare[],int len)
{
    //int arrlen=(int)(sizeof(arr))/sizeof(*arr);
    //int comLen=(sizeof(compare))/sizeof(compare[0]);

    // if(arrlen!=comLen || arrlen==0)
    //     return false;

    for(int i=0;i<len;++i)
    {
        if(arr[i]!=compare[i])
            return false;
    }

    return true;
}