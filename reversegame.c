#include <stdio.h>
int main()
{
    int n,i,a[100000],j,temp,r,b[100000],k,t,s,c[50];
    scanf("%d",&t);
    for(s=1;s<=t;s++)
    {
    scanf("%d %d",&n,&k);
    for(i=0;i<n;i++)
    {
        a[i]=i;
    }
    for(j=0;j<n;j++)
    {
        for(i=j;i<=(n-1+j)/2;i++)
        {
            temp=a[i];
            a[i]=a[n-1+j-i];
            a[n-1+j-i]=temp;
        }
    }
    if((n-1)%2==1)
    {
        r=-1;
        for(i=n-1;i>=(n+1)/2;i--)
        {
            r=r+1;
            b[i]=r;
            r=r+1;
            b[n-1-i]=r;
        }
        c[s]=b[k];
        continue;
    }
    if((n-1)%2==0)
    {
        r=-1;
        for(i=n-1;i>=(n+1)/2;i--)
        {
            r=r+1;
            b[i]=r;
            r=r+1;
            b[n-1-i]=r;
        }
        b[(n-1)/2]=n-1;
        c[s]=b[k];
        continue;
    }
    }
    for(s=1;s<=t;s++)
    {
        printf("%d\n",c[s]);
    }
    return(0);
}

