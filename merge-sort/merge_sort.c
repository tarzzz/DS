//Merge Sort
// not in place
// Worst case runtime nlogn
// recursive
// divide and conquer

#include<stdio.h>
#include<stdlib.h>

void merge(int list[], int p , int q, int r)
{
    
    int sub1[q-p+1], sub2[r-q];
    int n = q-p+1, m = r-q;
    int i=0, k=0, l=0;
    
    for(i=0;i<n;i++)       
    {
        sub1[i] = list[p+i]; 
        
    }
       
    for(i=0;i<m;i++)       
    {
        sub2[i] = list[q+i+1]; 
        
    }    
    
    sub1[n] = 99999999;
    sub2[m] = 99999999;
    
    for(i=p;i<=r;i++)
        {
            
          if(sub1[k] > sub2[l] )   
              {
                  list[i] = sub2[l];  
                  l++;
        
               } 
          
          else
          {
              list[i] = sub1[k];  
              k++;
        
          }
        }
          
}



void merge_sort(int list[], int p, int r)
{
    
    if(p < r)
    {   
        int i=0;
        int q = p + (r-p)/2; 
        
        merge_sort(list, p, q);
        merge_sort(list, q+1, r);
        merge(list,p, q, r);
        
    }
    
}



void main()

{
    int len, *list, i;
    
    printf("Enter number of elements to be sorted:\n");
    scanf("%d",&len);
    printf("enter numbers: \n");
    list = malloc(len * sizeof(int));
    for(i=0; i < len; i++) scanf("%d", &list[i]);
    
    merge_sort(list,0,len-1);
    
    for(i=0;i<len;i++)   
          printf("final_list: %d \n",list[i]);
    

    
}

/*
    void main()
{
    int len, *list, i;
    
    len = 10000;
    list = malloc(len * sizeof(int));
    for(i=0; i < len; i++)
    { 
    scanf("%d", &list[i]);
    }
    
    merge_sort(list,0,len-1);
    for(i=0;i<len;i++)   
          printf("%d \n",list[i]);
    
    
    }


*/

    
    
