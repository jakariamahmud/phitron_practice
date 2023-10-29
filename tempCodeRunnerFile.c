#include <stdio.h>

int main()
{
    int a[3];
    
    scanf("%d %d %d",&a[0],&a[1],&a[2]);
    int b[3]={a[0],a[1],a[2]};
    for (int i = 0; i < 1; i++)
    {
        for (int j = 1; j < 2; j++)
        {
            if(b[i]>b[j]){
                int temp=b[i];
                b[i]=b[j];
                b[j]=temp;
            }
        }
        
    }
    printf("%d\n%d\n%d\n\n",b[0],b[1],b[2]);
    printf("%d\n%d\n%d\n",a[0],a[1],a[2]);
    
    
    return 0;
}