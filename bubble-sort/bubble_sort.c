//bubble sort..
//run time ~ n **2

#include<stdio.h>
#include<stdlib.h>

void bubble_sort(int list[], int len)
{
     int i=0,j=0,swap_done=0,temp=0,i_val=0,k=0;

     for(i=0;i<len;i++)
     {
         swap_done = 0;
         for(j=i+1;j<len;j++)
         {
          if(list[j] >  list[i])        
          {
              temp = list[j] ;
              list[j] = list[i];
              list[i] = temp;
              swap_done = 1;
            
           }  
            printf("\n i = %d j=%d ..list =  \n ",i,j);
            for(k=0;k<len;k++) printf("%d",list[k]);
              
         } 


     }

     

   for(i=0;i<len;i++) printf("final:%d \n",list[i]);
}


void main()
{
    int len, *list, i;
    
    printf("Enter number of elements to be sorted:\n");
    scanf("%d",&len);
    printf("enter numbers: \n");
    list = malloc(len * sizeof(int));
    for(i=0; i < len; i++)
    { 
    scanf("%d", &list[i]);
    }
    
    bubble_sort(list,len);
    
    
}
