#include<stdio.h>   
int no_main();  
  
void fun(){ 
  
    // calling function to print 
    no_main();  
    exit(0); 
} 
  
int no_main() 
{ 
    printf("printing wthout uisng main"); 
    return 0; 
} 
