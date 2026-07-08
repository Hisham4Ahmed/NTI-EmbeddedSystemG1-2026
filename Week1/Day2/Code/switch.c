#include <stdio.h>
int main() {
int M =0 ;
int N =0 ;
char operator ;
printf("M= ");
scanf("%d",&M);
printf("N= "); 
scanf("%d",&N);
printf("Enter the operator: ");
scanf("%c",&operator);
switch(operator){
    case '+': 
    printf("%d\n",M+N);
break ;
case '-':
 printf("%d\n",M-N);
break ;
case '*': 
printf("%d\n",M*N);
break ;
case '/':
 printf("%d\n",M%N);
break ;
}
return 0;    
}