#include <stdio.h>
#include <stdlib.h>
#include <string.h>


float main(int count, char** array)
{
 
  float n1 = atof(array[1]);
  float n2 = atof(array[2]); 
  float n3 = atof(array[3]);
  float n4 = atof(array[4]);
  float prom = (n1 + n2 + n3 + n4)/(count);

		printf("El promedio es %f\n", prom);
  if (n1<n2 && n1<n3 && n1<n4)
     {
      printf("The smallest is %f\n", n1);
     }
	else if(n1>n2 && n1>n3 && n1>n4)
	   {
	   printf("The greatest is %f\n", n1);
	   }  
  if (n2<n1 && n2<n3 && n2<n4)
     {
     printf("The smallest is %f\n", n2);
     }
        else if(n2>n1 && n2>n3 && n2>n4)
              { 
		printf("The greatest is %f\n", n2);
	       }
if (n3<n1 && n3<n2 && n3<n4)
   {
   printf("The smallest is %f\n", n3);
   }
 	else if(n3>n1 && n3>n2 && n3>n4)
		{
		printf("The greatest is %f\n", n3);
    		}
if (n4<n1 && n4<n2 && n4<n3)
   {
   printf("The smallest is %f\n", n4);
   }
	else if(n4>n1 && n4>n2 && n4>n3)
	{
	printf("The greatest is %f\n", n4);
	} 	  
return 0;
}
