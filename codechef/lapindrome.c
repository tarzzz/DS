#include<stdio.h>

void print_status(char *list[])
{



void main() {

int i=0,t=0;
scanf("%d", &t);
char **list;

*list = malloc(t* sizeof(char));

for(i=0;i<t;i++){
scanf("%s", *list[i]);
}

for(i=0;i<t;i++){
print_status(*list[i]);
}

}


