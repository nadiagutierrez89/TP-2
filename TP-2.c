/* TP#2: Reemplazar Tabulaciones, diagonales invertidas y nuevas lineas por su Secuencia de escape.
 * Autor: Nadia E. Gutierrez
 * Fecha: 19/04/2015 */

#include <stdio.h>

 int main(void) {
	int c;

	while ((c = getchar()) != EOF) {					/*Mientras no sea EOF (fin del archivo)*/
			if(c !='\n' && c != '\t' && c!= '\\'){		/*Si c no es una secuencia de escape, devuelvo c*/
				putchar(c);
			}
			else if(c == '\n') {						/*Si c es una secuencia de escape, lo devuelvo de manera que sea visible*/
				printf("\\") ;
				printf("n") ;
			}
			else if(c == '\t') {
				printf("\\") ;
				printf("tab") ;
			}
			else if(c == '\\') {
				printf("\\") ;
				printf("\\") ;
			}
	}
	return 0;
}
