
#include<stdio.h>

int main()
{
    int a[10],i=0;
    for(i=0; i<10; i++)
    {
      scanf("%d",&a[i]);
    }
    i=0;
    while(a[i+1]==a[i]){
        i++;
    }
    if (i==9)printf("same");
    else printf("not same");
    return 0;
}
