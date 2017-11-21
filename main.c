//barco de norte sur, este y oeste 

#include<stdio.h>
#include<stdlib.h>

void Bienvenida();

void Navegaralnorte(int *x,int *y);

void imprimirposicion(int x, int y);

void Bienvenida(){
	printf ("Bienvenido al barco\n");
	
}

void Navegaralnorte(int *x, int *y){
	printf("Navegar al Norte!\n");
	*x=*x+1;
	*y+=10;
	
}
void Navegaralsur(int *x, int *y){
	printf("Navegar al Sur!\n");
	*x=*x;
	*y-=20;
	
}
void Navegaraleste(int *x, int *y){
	printf("Navegar al Este!\n");
	*x=*x-11;
	*y+=9;
	
}
void Navegaraloeste(int *x, int *y){
	printf("Navegar al Oeste!\n");
	*x=*x+20;
	*y+=0;
	
}

void imprimirposicion(int x, int y){
	printf ("La posicion acutual del barco es: %d, %d\n", x, y);
}

int main(){
	int x=0;
	int y=0;
	
	Bienvenida();
	imprimirposicion(x, y);
	 Navegaralnorte(&x,&y);
	 imprimirposicion(x,y);
	 printf("El valor de X es: %d \n", x);
    printf("La direccion de X y Y es: %p, %p \n\n", &x, &y);
    
	Navegaralsur(&x, &y);
	imprimirposicion(x,y);
	printf("\n");
	Navegaraleste(&x,&y);
	imprimirposicion(x,y);
	printf("\n");
	Navegaraloeste(&x,&y);
	imprimirposicion(x,y);
	
	return 0;
}
