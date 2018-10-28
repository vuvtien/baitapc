#include<stdio.h>
#include<conio.h>
#include<string.h>
void Nhapmang(int A[100],int n){
	for(int i=0;i<n;i++){
		printf("Nhap A[%d]: ",i);
		scanf("%d",&A[i]);
	}
}
void Xuatmang(int A[100],int n){
	for(int i=0;i<n;i++){
		printf("A[%d]=%d ",i,A[i]);
	}
}
int Tinhgt(int n){
	int S=1;
	for(int i=1;i<=n;i++){
		S=S*i;	
	}
	return S;
}
int Tonggt(int A[100],int n){
	int T=0;
	for(int i=0;i<n;i++){
		T=T+Tinhgt(A[i]);
		
	}
	return T;
}
int main(){
	int A[100];
	int n;
	printf("Nhap n: ");
	scanf("%d",&n);
	Nhapmang(A,n);
	Xuatmang(A,n);
	printf("\nTong giai thua = %d",Tonggt(A,n));
}
