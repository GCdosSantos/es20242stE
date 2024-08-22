#include <stdio.h>


double soma(double num1, double num2);
double sub(double num1, double num2);
double mult(double num1, double num2);
double div(double num1, double num2);

int main(){
	
	printf("o valor da soma e: %1.f \n", soma(2,2));
    printf("o valor da subtracao e: %1.f \n", sub(2,2));
    printf("o valor da multiplicacao e: %1.f \n", mult(2,2));
    printf("o valor da divisao e: %1.f \n", div(2,2));
	

return 0;	
}
double soma(double num1, double num2){
	return num1 + num2;
}
double sub(double num1, double num2){
	return num1 - num2;
}
double mult(double num1, double num2){
	return num1 * num2;
}
double div(double num1, double num2){
	return num1/num2;
}

