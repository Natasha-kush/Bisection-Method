#include<stdio.h>
#include<math.h>
#include<math.h>
float f(float);
void main()
{ 
int i = 0 ;
float x1, x2, x3, f1, f2, f3, epsilon;
clrscr();
printf("\nEnter two initial approximations x1, x2: ");
 scanf("%f %f", &x1, &x2);
printf("\nEnter a very small number epsilon: ");
scanf("%f", &epsilon);
f1 = f(x1); 
f2 = f(x2);
printf("\nf(%.2f)=%9f,f(%.2f)=%9f',x1,F1,x2,f2");
if(f1 * f2 > 0 ) {
printf("\nInitial approximations x1 =%f , x 2=%f are not proper.",x1, x2);
exit(0);
}
 do{
     x3 =(x1 + x2)/2;
      i++;
     f3 =f(x3);
printf("\nNext approximation after %2d iteration is %f, f(x) =%9f', i, X3, f3");
if(f1 * f3 < 0 ) {
     x2 =x3;
     f2=f3;
}else{
 x1=x3 ;
f1=f3 ;
}
} while((fabs(13)> epsilon) && (f3!= 0) ) ; 
/* Using relative error
while((fabs(( x2 -x1 )/ x2) > epsilon) && (f3! = 0) ;
*/
printf("\nRoot=%.4f", x3); 
getch();
}
float f(float x){
return (x * x * x -x -4);
}