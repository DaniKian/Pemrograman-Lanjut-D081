#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct data {
	char npm[20];
	char nama[20];
	char kelas[20];
};
data maks[50];
int a, b, c, d;

void inputdata() {
	printf("Pemasukan data hanya dilakukan sekali!!\n");
	printf("Masukkan Jumlah Data Yang Akan diinput : ");
	scanf("%i", &b);
	d = 0;
	for(c = 0; c < b; c++) {
		d = d+1;
		printf("\nData ke - %d\n", d);
		printf("NPM\t: ");
		scanf("%s", &maks[a].npm);
		printf("Nama\t: ");
		scanf("%s", &maks[a].nama);
		printf("Kelas\t: ");
		scanf("%s", &maks[a].kelas);
		a++;
	}
	printf("\n");
}

void tampildata() {
	int i, j;
	j = 0;
	for(i = 0; i < a; i++) {
		j = j + 1;
		printf("Data mahasiswa ke- : %d\n", j);

		printf("NPM\t: %s\n",maks[i].npm);
		printf("Nama\t: %s\n",maks[i].nama);
		printf("Kelas\t: %s\n",maks[i].kelas);
		printf("\n");
	}
}

void urutdarikecil_npm(data total []) {
 	int f;
 	int g;
 	data temp;
 	int min;
	for (f = 0; f < a; f++) {
 		min = f;
	 	for (g = f; g < a; g++) {
	 		if ((strcmp ((total + min)-> npm,(total + g) -> npm)) > 0) {
	 			min = g;
	 		}
	 		temp = total [f];
	 		total [f] = total [min];
	 		total [min] = temp;
	 	}
	}
}

void urutdaribesar_npm(data total []) {
 	int f;
 	int g;
 	data temp;
 	int min;
	for (f = 0; f < a; f++) {
 		min = f;
	 	for (g = f; g < a; g++) {
	 		if ((strcmp ((total + min)-> npm,(total + g) -> npm)) < 0) {
	 			min = g;
	 		}
	 		temp = total [f];
	 		total [f] = total [min];
	 		total [min] = temp;
	 	}
	}
}

void urutdariawal_nama(data total []) {
 	int f;
 	int g;
 	data temp;
 	int min;
	for (f = 0; f < a; f++) {
 		min = f;
	 	for (g = f; g < a; g++) {
	 		if ((strcmp ((total + min)-> nama,(total + g) -> nama)) > 0) {
	 			min = g;
	 		}
	 		temp = total [f];
	 		total [f] = total [min];
	 		total [min] = temp;
	 	}
	}
}

void urutdariakhir_nama(data total []) {
 	int f;
 	int g;
 	data temp;
 	int min;
	for (f = 0; f < a; f++) {
 		min = f;
	 	for (g = f; g < a; g++) {
	 		if ((strcmp ((total + min)-> nama,(total + g) -> nama)) < 0) {
	 			min = g;
	 		}
	 		temp = total [f];
	 		total [f] = total [min];
	 		total [min] = temp;
	 	}
	}
}

void urutdata() {
	int operasi;
	printf("\n");
	printf("Pilih Menu Dibawah Ini Untuk Menentukan Metode Pengurutan\n");
    printf("1. Urut ke bawah Berdasarkan NPM\n");
    printf("2. Urut ke atas Berdasarkan NPM\n");
    printf("3. Urut ke bawah Berdasarkan Nama\n");
    printf("4. Urut ke atas Berdasarkan Nama\n");
    printf("Masukian pilihan : ");
    scanf("%d", &operasi);
    switch(operasi){
	        case 1 :
			urutdarikecil_npm(maks);
	        printf("\nData Berhasil Diurutkan!\n\n");
	        break;
	        case 2 :
			urutdaribesar_npm(maks);
	        printf("\nData Telah Berhasil Diurutkan!\n\n");
	        break;
	        case 3 :
			urutdariawal_nama(maks);
	        printf("\nData Telah Berhasil Diurutkan!\n\n");
	        break;
	        case 4 :
			urutdariakhir_nama(maks);
	        printf("\nData Telah Berhasil Diurutkan!\n\n");
	        break;
	    }
}

int getoption(){
	int input;
	system ("cls");
	printf ("Program Mengurutkan Data Mahasiswa\n");
	printf ("================================\n");
	printf ("1. Input data mahasiswa\n");
	printf ("2. Urutkan data mahasiswa\n");
	printf ("3. Tampilkan data mahasiswa\n");
	printf ("4. Selesai\n");
	printf ("================================\n");
	printf ("Pilih (1-4) : ");
	scanf("%d",&input);
	return input;
}

int main(){
	
	int pilihan = getoption();
	char lanjut;
	
	while(pilihan != 4){
		switch(pilihan){
			case 1:
				inputdata();
			break;
			case 2:
				urutdata();
			break;
			case 3:
				tampildata();
			break;
			default:
				printf("Pilihan tidak ditemukan\n");
			break;
		}
		printf("Lanjutkan (y/n) : ");
		lanjutkan:
		scanf("%c",&lanjut);
		if ( (lanjut == 'y') | (lanjut == 'Y')){
			pilihan = getoption();		
		} else if ((lanjut == 'n') | (lanjut == 'N')){
			break;
		} else {
			goto lanjutkan;
		}
	}
	printf ("Program telah berakhir");
	return 0;
}
