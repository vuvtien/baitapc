#include<stdio.h>
#include<conio.h>
main(){
	int somoi,socu;
	printf("nhap so dien cu: ");
	scanf("%d",&socu);
	printf("nhap so dien moi: ");
	scanf("%d",&somoi);
	int tt=somoi-socu;
	if(somoi>socu){
		int tiendien=0;
	    if(tt<50) tiendien=tt*1500;
	    else if(tt>=50&&tt<=100) tiendien=tt*2000-49*500;
	    else tiendien=tt*3000-51*1000-49*1500;
	    printf("tong tien dien = %d ",tiendien);
	}
	else printf("ban da nhap sai moi ban nhap lai: ");

}

