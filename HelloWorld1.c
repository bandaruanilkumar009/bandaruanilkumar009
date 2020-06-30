#include<stdio.h> 
#include<stdlib.h>
 int main()
{
    int i;
    char  *ptr;
    ptr=calloc(10,10*sizeof(char));
    for(i=0;i<10;i++){
        printf("%d\n",i);
        scanf("%c",(ptr+i));
    }
    if(ptr!=NULL){
    for(i=0;i<10;i++){
        printf("allocated\n");
        printf("%c\n",*(ptr+i));
    }}
    else{printf("not llocated");}
return 0;
}