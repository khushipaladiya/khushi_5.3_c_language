#include<stdio.h>
#include<conio.h>
void main(){
int A=22;
int B=33;
int C=44;
clrscr();
(A<B)
 ?((A<C)?printf("A is min..."):("C is min..."))
 :((B<C)?printf("B is min..."):("C is min..."));
getch();
}