#include <stdio.h>

#define LENGTH 10   
#define WIDTH  5
#define NEWLINE '\n'

int main()
{

    strTest();

    defineTest();

    constantTest();
   return 0;
}

void constantTest(){
   const int  LENGTH_1 = 10;
   const int  WIDTH_1  = 5;
   const char NEWLINE_1 = '\n';
   int area;  
   
   area = LENGTH_1 * WIDTH_1;
   printf("value of area : %d", area);
   printf("%c", NEWLINE_1);
}

void strTest(){
    printf("Hello\tWorld\n\n");
    
    printf("hello, dear\n\n");

    printf("hello, \
    dear\n\n");

    printf("hello, ", "d", "ear\n\n");
}

void defineTest(){

    int area;  
    
    area = LENGTH * WIDTH;
    printf("value of area : %d", area);
    printf("%c", NEWLINE);

}