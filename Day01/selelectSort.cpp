#include <iostream>
#include <algorithm>
using namespace std;

//选择排序
void selectionSort(int arr[],int len);
void swap(int &a,int &b);
void display(int arr[],int len);
template <typename T>
bool equal(T arr[],T compare[]);
int main(){

//生成随机数组
    int len=rand()%100+5;
    int *arr=new int[len];
    int *compare=new int[len];
    for(int i=0;i<len;i++)
    {
        arr[i]=rand();
        compare[i]=arr[i];
    } 
   // display(arr,len);
    selectionSort(arr,len);
    //display(arr,len);

//系统排序对照组
    sort(compare,compare+len);

   // display(compare,len);

    cout<<equal(arr,compare)<<endl;
    
    delete[] arr;
    delete[] compare;
    return 0;
}

//思路：每次在剩下的当中选择一个最小的和当前的对调（升序为例）
void selectionSort(int arr[],int len)
{
    int i=0;
    int j=0;

    for(i=0;i<len;++i){
        for(j=i+1;j<len;j++){
            if(arr[i]>arr[j])
            {
                 swap(arr[i],arr[j]);

            }
               
        }
        
    }
}
void swap(int &a,int &b){
    int temp=a;
    a=b;
    b=temp;
}

void display(int arr[],int len){
    for(int i=0;i<len;i++)
        cout<<arr[i]<<"   ";
    
    cout<<endl;
}

template <typename T>
bool equal(T arr[],T compare[])
{
    int arrlen=(int)(sizeof(arr))/sizeof(*arr);
    int comLen=(sizeof(compare))/sizeof(compare[0]);

    if(arrlen!=comLen || arrlen==0)
        return false;

    for(int i=0;i<arrlen;++i)
    {
        if(arr[i]!=compare[i])
            return false;
    }

    return true;
}