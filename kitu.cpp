#include<stdio.h>
#include<conio.h>
#include<string.h>
int main(){
	char chuoi[50];
	printf(" Nhap chuoi  : ");
	scanf("%s",chuoi);
	int dem=0;
	for (int i=0;i<strlen(chuoi);i++){
		dem++;
   }  
		printf("Chuoi nhap co so ki tu la: %d",dem);
	
}
