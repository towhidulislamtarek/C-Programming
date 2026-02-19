#include<stdio.h>
int main()
{
    int process;
    printf("Number of processes:");
    scanf("%d",&process);

    int a[process],b[process],c[process];
    for(int i=0;i<process;i++)
    {
        int n;
        scanf("%d",&n);
        a[i]=n;
    }

    for(int i=0;i<process;i++)
    {
        int n;
        scanf("%d",&n);
        b[i]=n;
    }
    printf("AT BT\n");
    for(int i=0;i<process;i++)
    {
        printf ("%d %d\n",a[i],b[i]);
    }
    return 0;
}
