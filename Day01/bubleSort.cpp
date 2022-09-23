#include<iostream>
#include<algorithm>

using namespace std;

void bubleSort(int arr[],int len);
void display(int arr[],int len);
template <typename T>
bool equal(T arr[],T compare[],int len)
{
    for(int i=0;i<len;++i)
    {
        if(arr[i]!=compare[i])
            return false;
    }

    return true;
}
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
    bubleSort(arr,len);
    display(arr,len);

//系统排序对照组
   sort(compare,compare+len);

   // display(compare,len);

    cout<<equal(arr,compare,len)<<endl;
    
    delete[] arr;
    delete[] compare;
    return 0;
}
//冒泡排序：每次冒出一个最大的到最后面
void bubleSort(int arr[],int len)
{
    int i=0;
    int j=0;
    for(i=0;i<len-1;i++){
        for(j=0;j<len-i-1;j++)
        {
            if(arr[j]>arr[j+1])
                swap(arr[j],arr[j+1]);
        }
    }
}


void display(int arr[],int len){
    for(int i=0;i<len;i++)
        cout<<arr[i]<<"   ";
    
    cout<<endl;
}

