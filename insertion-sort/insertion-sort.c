
//Insertion sort test script : Ascending
// Worst case time : n**2
// avg: nlogn
//in place, hence memory required == n

void sort(long int list[long int len],long len)
    {
		long int i=0,j=0;
		long int temp, insertion_point;
		for(i=1;i<len;i++)
		{   
            insertion_point = i;
			temp = list[i];
			for(j=i-1;j >=0;j--)
            {
                if(list[j] > temp)
                {
                  insertion_point = j;
                  list[j+1] = list[j];
                  
                 } 
                  
            }
            list[insertion_point] = temp;  
		  }
       for(i=0;i<len;i++)   
       printf("%ld \n",list[i]);
    }    	
				
			
		

/*
void main()
{
    long int len, *list, i;
    
    printf("Enter number of elements to be sorted:\n");
    scanf("%ld",&len);
    printf("enter numbers: \n");
    list = malloc(len * sizeof(long int));
    for(i=0; i < len; i++)
    { 
    scanf("%ld", &list[i]);
    }
    
    sort(list,len);
    
    
    }

*/
// This one is for a large number testing .. len=1000

void main()
{
    long int len, *list, i;
    
    len = 100000;
    list = malloc(len * sizeof(long int));
    for(i=0; i < len; i++)
    { 
    scanf("%ld", &list[i]);
    }
    
    sort(list,len);
    
    
    }


