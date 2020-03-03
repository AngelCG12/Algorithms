#include <stdio.h>
int main()
{
 int i,a,count;
 printf("Prime numbers between 1 and 2000 are : \n");
 for (i=1;i<2000;i++)
 {
	 count=0;
		 for (a=1;a<=i;a++)
		 {
 			if (i%a==0)
 				count++;
 		 }
	 if (count==2)
		 printf("%d\t",i);
 }
 return 0;
}
