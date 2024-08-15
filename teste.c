#include <stdio.h>

/*int par_impar(int num){
	return (num % 3);

}*/
int divisivel(int num, int div){
	if(num % div == 0){
		return 1;
	}else{
		return 0;
	}
	
}
int main(){
   int val1, val2;
   
   printf("DIGITE DOIS VALORES PARA VERIFICAR A DIVISAO: \n");
   scanf("%d%d", &val1, &val2);
   
   if(divisivel(val1, val2)){
   	printf("%d E DIVISIVEL POR %d", val1, val2);
   }else{
   	printf("%d NAO E DIVISIVEL POR %d", val1, val2);
   }


	return 0;
}

