#include <iostream>
using namespace std;
void check(int a[],int size)
{
    int j=0;
    for(int i=0;i<size;i++)
    {
        if(a[i]==a[i+1] &&a[i]!=0)
        {
            a[i]=a[i]-1;
            j=j+1;
        }
        if(a[i]==a[i+1]&&a[i]-a[i-1]>=2)
        {
            a[i]=a[i]-1;
            j=j+1; 
        }
        if(a[i]==a[i+1]&&a[i]-a[i-1]==2)
            {
                 a[i]=a[i];
            }
        eif(a[i]==a[i-1])
        {
          a[i]=a[i]+1;
          j=j+1;
        }
}
    cout<<j<<endl;
}
int main()
{
    int a,temp;
    cin>>a;
   int ar[a];
   for(int i=0;i<a;i++)
   {
       cin>>ar[i];
   }
   for(int i=1;i<a;++i)
    {
        for(int j=0;j<(a-i);++j)
            if(ar[j]>ar[j+1])
            {
                temp=ar[j];
                ar[j]=ar[j+1];
                ar[j+1]=temp;
            }
    }
  
   check(ar,a);
}