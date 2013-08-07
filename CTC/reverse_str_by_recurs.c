void swap(char *str, int start, int end){
    char dump;
    if(start == end) return;

    if(end == start + 1)
    {
        dump = *(str + start);
        str[start] = start[end];
        *str + end = dump;
        }
    else{
        swap(str, start, floor(start + (end - start)/2) );
        swap(str, floor(start + (end - start)/2) + 1, end );

        }





void main()
{

char *str;
int i,j,len = 5;
str = malloc(sizeof(char));

scanf("%s", str);

for(i=0; i< len; i++ ){
    printf("%c", str[i]);
}

swap(str, 0, len);

for(i=0; i< len; i++ ){
    printf("%c", str[i]);
}

}   
