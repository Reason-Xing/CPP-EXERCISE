#include <iostream>
#include <stdlib.h>
using namespace std;
int arr[8],i=0,sum=0;
int* tail;
void TentoTwo(int x)
{
    if(x==0)
        return;
    TentoTwo(x/2);
    arr[i]=x%2;
    i++;
}

int main()
{
    int a[6]={1,0,0,1,0,0};
    /*for(int j=0;j<i;j++)
    cout << arr[j] <<' ';
    cout<<endl;*/
    twototen(a);
    cout<<sum;
    return 0;
}
