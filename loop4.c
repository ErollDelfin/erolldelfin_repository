#include <stdio.h>
#include <stdlib.h>

int main()
{
   int z,x,spc,rows,v,b=1;
   printf("Input number of rows : ");
   scanf("%d",&rows);
   spc=rows+4-1;
   for(z=1;z<=rows;z++)
   {
         for(v=spc;v>=1;v--)
            {
              printf(" ");
            }
	   for(x=1;x<=z;x++)
	   printf("%d ",b++);
	printf("\n");
    spc--;
   }
    return 0;
}


