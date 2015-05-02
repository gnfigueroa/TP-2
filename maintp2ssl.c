/* Tp-2 ejercicio 1-10 SSL
Gabriel Nicolas Figueroa
01/05/2015
*/

#include <stdio.h>

int main(void){
int c;
	
while((c = getchar()) != EOF){
         if(c == '\t')
              printf("\\t");		
         else 
              if(c == '\\')
                   printf("\\\\");
              else 
                   if(c == '\b')
                        printf("\\b");
                   else
                       if(c == '\n')
                            printf("\\n");
                       else
                           printf("%c", c);
}
return 0;              
}
