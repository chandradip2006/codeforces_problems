#include <stdio.h>
#include <string.h>

int main()
{
    char arr[101];
    int flag=0;
    int ans;

    scanf("%s",arr);

    int a = strlen(arr);

    for(int i=0;i<a-2;i++)
    {
        for(int j=i+1;j<a-1;j++)
        {
            for(int k=j+1;k<a;k++)
            {
                int z=(arr[i]-'0')*100+(arr[j]-'0')*10+(arr[k]-'0');
                if(z%8==0)
                {
                    flag=1;
                    ans=z;
                    
                    
                    break;
                }
            }
            if(flag==1)
            break;
        }
        if(flag==1)
        break;
    }

     if(flag==0)
    {
        for(int i=0;i<a-1;i++)
        {
            for(int j=i+1;j<a;j++)
            {
                 int z=(arr[i]-'0')*10+(arr[j]-'0');

                 if(z%8==0)
                 {
                    flag=1;
                    ans=z;
                    break;
                 }

            }
            if(flag)
            break;
        }
    }
    if(!flag)
    {
        for(int i=0;i<a;i++)
        {
            int z=(arr[i]-'0');
            if(z%8==0)
            {
                flag=1;
                ans=z;
                break;
            }
        }
    }
    
    if(flag)
    {
        printf("YES\n");
        printf("%d\n",ans);
    }

    else
    printf("NO");

    return 0;
}