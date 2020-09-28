#include <stdio.h>
#include <string.h>

struct Anggota {
	char nama [50];
	int BB ;
	int TB ;
};
typedef struct Anggota posyandu;


int main (){
	int k,i;
	double jumlahBB = 0, jumlahTB = 0, ratarataBB= 0, ratarataTB = 0;
	
	printf("Masukkan jumlah anggota: ");
	scanf("%d", &k);
	posyandu list[k];
	
	for(i = 1; i<= k; i++){
		printf ("=====DAFTAR RATA-RATA BB DAN TB POSYANDU REMAJA=====\n");
		printf ("Masukkan nama anda: \n");
		scanf (" %[^\n]%*c", &list[i].nama);
		printf ("Masukkan BB anda: \n");
		scanf (" %d", &list[i].BB);
		printf ("Masukkan TB anda:  \n");
		scanf (" %d", &list[i].TB);
	}
	
	for(i = 1; i<= k; i++){ 
		jumlahBB=list[i].BB+jumlahBB;
		jumlahTB=list[i].TB+jumlahTB;
	}
	ratarataBB = jumlahBB/k;
	ratarataTB = jumlahTB/k;
	
	printf("\nRata rata BB	: %lf", ratarataBB);
	printf("\nRata rata TB	: %lf", ratarataTB);
	
	
	
	return 0;
}
