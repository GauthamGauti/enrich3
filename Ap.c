#include <stdio.h>
#include <stdlib.h>

int main()
{
    int n,s,d,m,i;
    printf("enter the method\n1.AP\n2.GP");
    scanf("%d",&m);
    printf("enter s ,n ,diff");
    scanf("%d%d%d",&s,&n,&d);

    if(m==1)
    {
        for(i=1;i<=n;i++)
        {
            printf("%d\t",s);
            s=s+d;
        }
    }
    else
    {
        for(i=1;i<=n;i++)
        {
            printf("%d\t",s);
            s=s*d;
        }

    }
    return 0;
}
