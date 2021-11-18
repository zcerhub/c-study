#include <stdio.h>
 
int main ()
{

    // ifExpression();
 
 
    // ifElseExpression();

    // ifElseIfElseExpression();

    // switchExpression();

    tenaryOperator();

   return 0;
}

void tenaryOperator(){
        int num;
 
    printf("输入一个数字 : ");
    scanf("%d",&num);
 
    (num%2==0)?printf("偶数"):printf("奇数");
}

void switchExpression(){
       /* 局部变量定义 */
   char grade = 'B';
 
   switch(grade)
   {
   case 'A' :
      printf("很棒！\n" );
      break;
   case 'B' :
   case 'C' :
      printf("做得好\n" );
      break;
   case 'D' :
      printf("您通过了\n" );
      break;
   case 'F' :
      printf("最好再试一下\n" );
      break;
   default :
      printf("无效的成绩\n" );
   }
   printf("您的成绩是 %c\n", grade );
}

void ifElseIfElseExpression(){
       /* 局部变量定义 */
   int a = 100;
 
   /* 检查布尔条件 */
   if( a == 10 )
   {
       /* 如果 if 条件为真，则输出下面的语句 */
       printf("a 的值是 10\n" );
   }
   else if( a == 20 )
   {
       /* 如果 else if 条件为真，则输出下面的语句 */
       printf("a 的值是 20\n" );
   }
   else if( a == 30 )
   {
       /* 如果 else if 条件为真，则输出下面的语句 */
       printf("a 的值是 30\n" );
   }
   else
   {
       /* 如果上面条件都不为真，则输出下面的语句 */
       printf("没有匹配的值\n" );
   }
   printf("a 的准确值是 %d\n", a );
}

void ifElseExpression(){
       /* 局部变量定义 */
   int a = 100;
 
   /* 检查布尔条件 */
   if( a < 20 )
   {
       /* 如果条件为真，则输出下面的语句 */
       printf("a 小于 20\n" );
   }
   else
   {
       /* 如果条件为假，则输出下面的语句 */
       printf("a 大于 20\n" );
   }
   printf("a 的值是 %d\n", a);
}


void ifExpression(){
       /* 局部变量定义 */
   int a = 10;
 
   /* 使用 if 语句检查布尔条件 */
   if( a < 20 )
   {
       /* 如果条件为真，则输出下面的语句 */
       printf("a 小于 20\n" );
   }
   printf("a 的值是 %d\n", a);
}