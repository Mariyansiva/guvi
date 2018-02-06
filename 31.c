#include  <stdio.h>                                         
   int main( )                                                     
   {                                                           
       char i[81]={"hello world"}, ch;                              
       int   c=0;                                                                                                      
       do                                                      
       {                                                       
           ch = getchar();                              
          i[c]   = ch;                              
           c++;                                                
       }                                                       
       while(ch != '\n');                                
       c = c - 1;                                                                             
       printf("enter the value%d",c);
return 0;                             
   }                                                           
