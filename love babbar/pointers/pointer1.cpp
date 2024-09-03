#include<bits/stdc++.h>
using namespace std;
void print(int *p)
{
    cout<<*p<<endl;
}

int main()
{
    // int num = 5;
    // cout<<num<<endl;
    // cout<<&num<<endl;
    // int *p = &num;
    // num++;
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<"Size of integer is: "<< sizeof(num)<<endl;
    // cout<<"Size of pointer is: "<< sizeof(p)<<endl;
    
    // float f = 10.5;
    // float p = 2.5;
    // float *ptr = &f;
    // *(ptr)++;
    // *ptr = p;
    // cout<<*ptr<<" "<<f<<" "<<p<<endl;
    
    // int *ptr = 0;
    // int a = 10;
    // *ptr = a;
    // cout<<*ptr<<endl;

    // int arr[10] = {2,4,5};
    // cout<<"Address of first memory block is: "<<arr<<endl;
    // cout<<"Address of first memory block is: "<<&arr[0]<<endl;
    // cout<<"Address of first memory block is: "<<arr[0]<<endl;
    // cout<<"Address of first memory block is: "<<&arr[1]<<endl;
    // cout<<"Address of first memory block is: "<<&arr[2]<<endl;
    // cout<<"Address of first memory block is: "<<&arr[3]<<endl;
    // cout<<"Address of first memory block is: "<<&arr[4]<<endl;
    // cout<<"*arr is: "<<*arr<<endl;
    // cout<<"*arr+1 is: "<<*arr+1<<endl;
    // cout<<"*arr+2 is: "<<*arr+2<<endl;
    // cout<<"*(arr+1) is: "<<*(arr+1)<<endl;
    // cout<<"*(arr)+1 is: "<<*(arr)+1<<endl;


    // int i = 1;
    // cout<<i[arr]<<endl;

    int value = 5;
    int *p = &value;

    print(p);


    return 0;
}