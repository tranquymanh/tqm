#include<iostream>
#include<algorithm>

using namespace std;

int main()
{
    int ** a = new int *[3] ;
    for(int i=0;i<3;i++)
    {
       a[i] = new int[3];
    }

    for(int i=0 ; i < 3; i++)
    {
        for(int j=0; j<3 ; j++)
        {
            cin>>a[i][j];
        }
    }
    for(int i=0 ; i < 3; i++)
    {
        for(int j=0; j<3; j++)
        {
            cout<<a[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;

}
