/*
 ============================================================================
 Name        : AIAI.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */
/*
	Faça um programa para imprimir:
	    1
	    1   2
	    1   2   3
	    .....
	    1   2   3   ...  n
	para um n informado pelo usuário. Use uma função que receba um valor n inteiro imprima até a n-ésima linha.
	*/
#include <stdio.h>
#include <stdlib.h>

int main(void) {


	  int n;
	  // s = 1;

	  printf(" DIGITE UM NÚMERO: ");

	  scanf(" %d", &n);
	  getchar();

	  void imprimir(int n);
	  imprimir(n);



	  return 0;
	}

	void imprimir(int n) {

	  int r, s;

	  for (s = 1; s < n + 2; s++) {
	    for (r = 1; r < s; r++) {
	      printf("%i ", r);
	    }
	    // s++;
	    printf("\n");
	  }
	}

	/*
	  int n;

	  printf("DIGITE UM NÚMERO: ");
	  scanf(" %d", &n);

	  for (int x = 1; x <= n; x++) {

	    for (int x = 1; x <= n; x++) {

	      printf("%d ", x);
	    }
	    printf("\n");
	  }
	*/

	/*

	#include <stdio.h>

	int main(void) {

	  int frist_digit = 1;
	  int second_digit = 1;
	  int n;

	  printf("DIGITE UM NÚMERO: ");
	  scanf("%d", &n);

	  for (int x = 1; x <= n; x++) {

	    for (int y; y < n; y++) {
	      if (y == 1) {
	        printf("1\n ");
	      }
	      printf("%d", frist_digit + second_digit);
	      printf("\n");
	    }
	  }

	  return 0;
	}

	*/

	/*

	// while (s < n + 2) {
	   for (s = 1; s < n + 2; s++) {
	     for (r = 1; r < s; r++) {
	       printf("%i ", r);
	     }
	     // s++;
	     printf("\n");
	   }

	 */

