#include <iostream>
using namespace std;

int main()
{
    int ary[100],i,n,c[256]={0};
    cin>>n;
    for(i=0;i<n;i++)
    {
        cin>>ary[i];
    c[ary[i]]++;
        
    }   
    cout<<"repeated numbers:";
        for(i=0;i<256;i++)
        {
            if(c[i]>1)
            cout<<i;
        }
        
    return 0;
}
