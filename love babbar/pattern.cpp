#include<iostream>
using namespace std;
int main()
{
    int rows, columns;
    cout<<"Enter the number the Rows:- "<<endl;
    cin>>rows;
    cout<<"Enter the number the Columns:- "<<endl;
    cin>>columns;
    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < columns; j++)
        {
            cout<<"*";
            // j++;
        }
        cout<<endl;
        // i++;
    }
    return 0;
}