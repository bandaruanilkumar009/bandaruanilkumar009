#include<stdio.h>
#include<stdlib.h>
int main(){
   int i=0,max_size,new_size;
   int *ptr;
   printf("enter the number of elements do you want\n");
   scanf("%d",&max_size);
   ptr=(int *) malloc (max_size * sizeof(int));
   printf("enter the elements here\n");
   for(i=0;i<max_size;i++)
   {
      scanf("%d",(ptr+i));
   }
   printf("your enterd numbers are below\n");
    for(i=0;i<max_size;i++)
   {
      printf("%d",*(ptr+i));
   }
   printf("enter the new size\n");
   scanf("%d",&new_size);
   ptr=(int*)realloc(ptr,(new_size * sizeof(int)));
   printf("enter the %d elements\n",new_size-max_size);
   for(i=max_size;i<new_size;i++)
   {
      scanf("%d",ptr+i);
   }
   
    for(i=0;i<new_size;i++)
   {
      printf("%d",*(ptr+i));
   }
}