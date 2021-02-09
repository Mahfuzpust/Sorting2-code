#include<stdio.h>
int main()
{
    int array[50];
    int i,n,position=-1,value;
    printf("How num i want : ");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&array[i]);
    }

    printf("Founding Num : ");
    scanf("%d",&value);

    for(i=0;i<n;i++)
    {
        if(array[i]==value)
        {
            position=i+1;
            break;
        }
    }
    if(position==-1)
    {
        printf("Nothing Found");
    }
    else
        {
         printf("the position is : %d",position);
         printf("The number is : %d",value);
      }
return 0;
}
