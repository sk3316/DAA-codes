#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col){
    for (int row = 0; row < 3; row++)
    {
        for (int col = 0; col < 4; col++)
        {
            if (arr[row][col] == target)
            {
                return 1;
            }
            
        }
        
    }
    return 0;
    
}

void printRowSum(int arr[3][4], int row, int col){
    for (int row = 0; row < 3; row++)
    {
        int sum = 0;
        for (int col = 0; col < 4; col++)
        {
            sum+=arr[row][col];
        }
        cout<<"sum of row is: "<< sum <<endl;        
    }    
}

void printColSum(int arr[3][4], int row, int col){
    for (int col = 0; col < 4; col++)
    {
        int sum = 0;
        for (int row = 0; row < 3; row++)
        {
            sum+=arr[row][col];
        }
        cout<<"sum of col is: "<< sum <<endl;        
    }    
}

void largestRowSum(int arr[][4], int row, int col)
{
    vector<int> v;
    for (int row = 0; row < 3; row++)
    {   
        int sum = 0;
        for (int  col = 0; col < 4; col++)
        {
            sum+=arr[row][col];
        }
        v.push_back(sum);
        sort(v.begin(),v.end());
    }
    cout<<"Largest row sum: "<<v.back()<<endl;
}

void largestColSum(int arr[][4], int row, int col)
{
    vector<int> v;
    for (int col = 0; col < 4; col++)
    {   
        int sum = 0;
        for (int  row = 0; row < 3; row++)
        {
            sum+=arr[row][col];
        }
        v.push_back(sum);
        sort(v.begin(),v.end());
    }
    cout<<"Largest column sum: "<<v.back()<<endl;
}


int main(){
    int arr[3][4];

    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            cin>>arr[i][j];
        }
    }

    for (int  i = 0; i < 3; i++)
    {
        for (int  j = 0; j < 4; j++)
        {
            cout<< arr[i][j]<<" ";
        }
        cout<<endl;        
    }

    int target;
    cout<<"Enter the element to be searched: "<<endl;
    cin>>target;
    if(isPresent(arr, target, 3, 4))
    {
        cout<<"element found"<<endl;
    }
    else{
        cout<<"element not found"<<endl;
    }
    
    // print row wise sum;
    printRowSum(arr, 3, 4);
    cout<<endl;
    printColSum(arr, 3, 4);
    cout<<endl;
    largestRowSum(arr, 3, 4);
    cout<<endl;
    largestColSum(arr, 3, 4);
    return 0;
}