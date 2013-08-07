//Check for duplicates

int main()
{

char *str;
int i=0;
int chek = 1;
int val=0;
int check[256];
str = malloc(20 * sizeof(char));
printf("%d", len(str));
scanf("%s",str);

for(i=0;i<sizeof(str);i++)
{
   val = (int)(str[i]);
   printf("%d", check[val]);
   if (check[val] == chek)

   {
     printf("dups");
     return(0);
   }

   else check[val] = 1;

}

printf('no dups');

return(0);

}
