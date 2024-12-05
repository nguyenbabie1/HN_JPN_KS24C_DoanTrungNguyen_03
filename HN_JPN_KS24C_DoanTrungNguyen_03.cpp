#include <stdio.h>

int main(){
int size,chonfine,addindex;
int arr[50];
do{
		printf("              ---MENU---     \n");
	printf("1. Nhap so phan tu va gia tri cho mang:\n");
	printf("2. In ra gia tri cac phan tu trong mang:\n");
	printf("3. Dem so luong cac so nguyen to trong mang:\n");
	printf("4. Tim gia tri nho thu hai trong mang:\n ");
	printf("5. Them mot phan tu vao vi tri ngau nhien trong mang:\n");
	printf("6. Xoa phan tu tai mot vi tri cu the:\n");
	printf("7. Sap xep mang theo thu tu giam dan:\n");
	printf("8. Cho nguoi dung nhap vao mot phan tu va tim kiem phan tu:\n");
	printf("9. Xoa toan bo phan tu trung lap trong mang va hien thi toan bo phan tu co trong mang:\n");
	printf("10. Dao nguoc thu tu cua cac phan tu co trong mang:");
	printf("11. Thoat\n");
	
	
	printf("\nLua chon cua ban : ");
	scanf("%d",&chonfine);
	
	switch(chonfine){
		case 1:
			printf("Ban muon nhap mang chua bao nhieu phan tu : ");
			scanf("%d",&size);
			for(int i=0;i<size;i++){
				printf("Moi ban nhap phan tu [%d] : ",i);
				scanf("%d",&arr[i]);
			}
			break;
		case 2:
			if(size>0){
				printf("Gia tri cac phan tu trong mang : ");
				for(int i=0;i<size;i++){
					printf("arr[%d]=%d, ",i,arr[i]);
				}
				printf("\n");
			}else{
				printf("Khong ton tai mang !!!");
			}
			printf("\n");
			break;
		case 3:
			int checknumber;
			if(size>0){
				printf(" So nguyen to co trong mang la : ");
				for(int i=0;i<size;i++){
					if(arr[i]==2){
						printf("%3d",arr[i]);	
					}
					for(int j=2;j*j<arr[i];j++){
						if(arr[i]%j!=0){
							printf("%3d",arr[i]);
							break;
						}
					}
				}
				}else{
					printf("Khong ton tai mang !!!");
				}
			break;	
		case 4:
			if(size>0){
				printf("Gia tri nho thu hai trong mang : ");
				int i;
				for(i=0;i<size-1;i++){
					for(int j=0;j<size-i-1;j++){
						if(arr[j]>arr[j+1]){
							int temp=arr[j];
							arr[j]=arr[j+1];
							arr[j+1]=temp;
						}
					}
					printf("%d",arr[i]);
					break;	
				}
			}else{
				printf("Khong ton tai mang !!!");
			}
			printf("\n");
			break;
		case 5:
			if(size>0){
				int num1;
				
				printf("Ban muon them phan tu moi vao vi tri nao : ");
				scanf("%d",&addindex);
				printf("Ban muon them gia tri nao : ");
				scanf("%d",&num1);
				for(int i=size;i>addindex;i--){
					arr[i]=arr[i-1];
				}
				arr[addindex]=num1;
				for(int i=0;i<size+1;i++){
					printf("%3d",arr[i]);
				}
			}else{
				printf("Khong ton tai mang !!!");
			}
			printf("\n");
				
			break;
		case 6:
			if(size>0){
				printf("Ban muon xoa phan tu o vi tri nao : ");
				scanf("%d",&addindex);
				for(int i=addindex;i<size;i++){
					arr[i]=arr[i+1];
				}
				for(int i=0;i<size-1;i++){
					printf("%3d",arr[i]);
				}
			}else{
				printf("Khong ton tai mang !!!");
			}
			printf("\n");
			break;

		case 11:
			printf("Thoat");
			break;	
	}
}while(chonfine!=11);
return 0;
}
