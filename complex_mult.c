#include<stdio.h>

typedef struct COMPLEXNUM{
  int real; // real number
  int i; // imaginary number
}ComplexNum;

ComplexNum complex_mult(ComplexNum, ComplexNum);

ComplexNum complex_mult(ComplexNum num1, ComplexNum num2){ // function to calculate complex number
  ComplexNum total;
  total.real = num1.real * num2.real - num1.i * num2.i;
  total.i = num1.real * num2.i + num1.i * num2.real;
  return total;
}

int main(){
  ComplexNum x, y, z; // can you think of better variable names lol
  int num1, num2, num3, num4;

  printf("Enter the first complex number in the form ai + b: "); // user input statements
  scanf("%di + %d", &num2, &num1);
  printf("Enter the second complex number in the form ai + b: ");
  scanf("%di + %d", &num4, &num3);

  x.real = num1;
  x.i = num2;
  y.real = num3;
  y.i = num4;
  z = complex_mult(x, y);

  printf("(%di + %d) * (%di + %d) = %di + %d",x.i, x.real, y.i, y.real, z.i, z.real); // final print statement

  return 0;
}

