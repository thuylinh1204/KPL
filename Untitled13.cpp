#include <stdio.h>
#include <string.h>
main(){  
   int i, j, N;
   char  DS[100][30], str[30]; 
   //Nhap DS sinh vi�n	
   printf("So sinh vien : ");      scanf("%d",&N);
	fflush(stdin);
   for(i=0;i < N;i++){
      printf("Ten sinh vien[%d]: ",i);	
      gets(DS[i]);
	 }
	 //So s�nh theo H?+d?m+t�n
	for(i = 0; i < N - 1; i ++)
	    for(j = i +1; j < N; j ++)
	      if(strcmp(DS[i],DS[j]) > 0){
	      	strcpy(str,DS[i]);
	      	strcpy(DS[i],DS[j]);
	      	strcpy(DS[j],str);
	      }
	//In danh s�ch d� s?p x?p
	printf("\nDS sinh vien vua nhap \n");
	for(i=0;i < N;i++)  
	   printf("%s\n",DS[i]);   
 }//main

