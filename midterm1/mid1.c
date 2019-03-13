/*
 * mid1.c
 *
 *  Created on: Mar 11, 2019
 *      Author: jianchaosun
 */


#include <stdio.h>

int main(){
	int len;
	printf("enter a number");
	fflush(stdout);
	scanf("%d",&len);
	int x[len];
	printf("    ");
	for(int i=0;i<len;i++){
		x[i] = i+1;
		printf("%d     ",i+1);

	}
	printf("\n");
	int y[len][len];
	printf("%d   ",1);

	for(int i =0;i< len;i++){
		for(int j=0;j<len;j++){
			y[i][j]= x[i]*x[j];
            if(y[i][j]<10){
			printf("%d     ",y[i][j]);}
            else if(y[i][j]<100&&y[i][j]>=10){
            	printf("%d    ",y[i][j]);
            }else {
            	printf("%d    ",y[i][j]);
            }
		}
		if(i<=10){
		printf("\n%d   ",i+2);}
	}

}
