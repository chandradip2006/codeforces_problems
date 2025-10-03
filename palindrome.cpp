#include <stdio.h>
int main()
{
    int np=0;
    scanf("%d",&np);
 
    int arr[np];
    for(int i=0; i<np;i++)
    {
        scanf("%d",arr+i);
    }
    // int z = arr[0],z1=arr[1],z2=0;
    // for(int i=1;i<np;i++)
    // {
    //     if(arr[i]>z)
    //     {
    //         z1=z;
    //         z=arr[i];
            
    //         z2=i;
    //     }
        
    //     else{
    //         if(arr[i]>z1)
    //         {
    //             z1=arr[i];
    //         }
    //     }
    // }
    // printf("%d %d",z2+1,z1);
    int z1=0,z2=0,z3=0;
    if(arr[0]>arr[1])
    {
        z1=arr[0];
        z2=arr[1];
        for(int i=2;i<np;i++)
        {
            if(arr[i]>z1)
            {
                int temp = z1;
                z1=arr[i];
                z3=i;
                if(z2<temp)
                {
                    z2=temp;
                }
            }
            else
            {
                if(arr[i]>z2)
                {
                    z2=arr[i];
                }
            }
        }
    }
    else
    {
        z3=1;
       z2=arr[0];
        z1=arr[1];
        for(int i=2;i<np;i++)
        {
            if(arr[i]>z1)
            {
                int temp = z1;
                z1=arr[i];
                z3=i;
                if(z2<temp)
                {
                    z2=temp;
                }
            }
            else
            {
                if(arr[i]>z2)
                {
                    z2=arr[i];
                }
            }
        } 
    }
    printf("%d %d",z3+1,z2);
    return 0;
}