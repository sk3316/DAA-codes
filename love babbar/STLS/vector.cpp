#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;

    // Capacity tells about how much space is there allocated in the vector
    // Size tells about how many elements are there inside the declared vector
    
    cout<<"capacity of v: "<<v.capacity()<<endl; //capacity = 0
    cout<<"size of v: "<<v.size()<<endl; //size = 0

    // capacity doubles itself in vector when it sees that the number of elements are increasing.

    v.push_back(1);
    
    cout<<"capacity of v: "<<v.capacity()<<endl; //capacity = 1
    cout<<"size of v: "<<v.size()<<endl; //size = 1


    v.push_back(2);

    cout<<"capacity of v: "<<v.capacity()<<endl; //capacity = 2
    cout<<"size of v: "<<v.size()<<endl; //size = 2
    

    v.push_back(3);

    cout<<"capacity of v: "<<v.capacity()<<endl; //capacity = 4
    cout<<"size of v: "<<v.size()<<endl; //size = 3


    v.push_back(4);

    cout<<"capacity of v: "<<v.capacity()<<endl; //capacity = 4
    cout<<"size of v: "<<v.size()<<endl; //size = 4


    v.push_back(5);

    cout<<"capacity of v: "<<v.capacity()<<endl; //capacity = 8
    cout<<"size of v: "<<v.size()<<endl; //size = 5

    cout<<"Elements in the Vector are: "<<endl;
    for (int i = 0; i < v.size(); i++)
    {
        cout<<v[i]<<" ";
    }
    
    cout<<endl;

    cout<<"Element at 2nd index: "<<v.at(2)<<endl;




    return 0;
}