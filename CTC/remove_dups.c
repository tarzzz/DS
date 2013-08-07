// works partially
#include<stdio.h>
int main()
{

char str[5];
int i,j,len = 5;

scanf("%s", str);

for(i=0; i< len - 1; i++ ){
    printf("%c", str[i]);
}

for(i=0; i <= len - 1; i++ ){
    printf("At i = %d, str = %s \n and len= %d", i, str, len);
    updated_len = 
    for(j=0;j < len;j++){


        if(str[j] == str[i])
        {
           if(j == len - 2)
          { printf("end detected at j = %d\n", j);
            str[j] = str[j + 1];
            str[j + 1] ='\0';
           // len = len - 1;
           }
            else{
            printf("dup detected at j= %d\n", j);
            str[j] = str[j + 1];
             }
        }
    }
}

printf("\n %s", str);
return(0);

}
