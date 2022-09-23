#include <iostream>
using namespace std;

//使用亦或运算解决两个整型数值交换
void swap(int& a,int& b);

int main()
{
    int numa=3;
    int numb=5;
    swap(numa,numb);
    cout<<numa<<"   "<<numb<<endl;
    return 0;
}

void swap(int& a,int& b)
{
    //保证两个数值不能存储在同一内存中
    a=a^b;
    b=a^b;
    a=a^b;
}