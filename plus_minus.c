#include<stdio.h>

int main()
{
    int n;
    //printf("Enter the size of an array.\n");
    scanf("%d",&n);
    int i;
    int array[n];
    for(i=0;i<n;i++)
    {
       scanf("%d",& array[i]);
    }
    int count1 = 0;
    int count2 = 0;
    int count3 = 0;
    for(i=0;i<n;i++)
    {
        if(array[i]>0)
        {
                count1++;
        }
        else if(array[i]<0)
        {
                count2++;
        }
        else
        {
                count3++;
        }
    }
    
        float x;
        x=(float)count1/n;
        printf("%f", x);
    
        float y;
        y=(float)count2/n;
        printf("\n%f", y);
        
        float z;
        z=(float)count3/n;
        printf("\n%f", z);
    return 0;
}
