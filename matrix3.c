#include<stdio.h>
main(){
	int a[10][10];
	int r,c,i,j,sum=0;
	printf("enter row size : ");
	scanf("%d",&r);
	printf("enter column size : ");
	scanf("%d",&c);
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("enter value [%d][%d]",i,j);
			scanf("%d",&a[i][j]);
		}
	}
	for (i=0;i<r;i++){
		for(j=0;j<c;j++){
			printf("%d",a[j][i]);
			if(i==j){
					sum +=a[i][j];
			}
			
		}
		printf("\n");
}
printf("sum = %d",r*c);
}
