#include <iostream>
#include <string>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct data {
	char npm[20];
	char nama[20];
	char kelas[20];
};
data maks[50];
int a, b, c, d;


void tambahdata() {
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
		//Minimal 6 char Maksimal 13 Char
		printf("NPM\t: %s\n",maks[i].npm);
		printf("Nama\t: %s\n",maks[i].nama);
		printf("Kelas\t: %s\n",maks[i].kelas);
		printf("\n");
	}
}

void ubahdata() {
	int a;
	printf("Masukan Data yang akan diedit : ");
	scanf("%i", &a);
	a = a - 1;
	printf("Data Mahasiswa ke %i\n", a + 1);
	printf("NPM\t: ");
	scanf("%s", &maks[a].npm);
	printf("Nama\t: ");
	scanf("%s", &maks[a].nama);
	printf("Kelas\t: ");
	scanf("%s", &maks[a].kelas);
}

void hapusdata() {
	int i, x, y;
	printf("Masukkan Nomor Data Yang Ingin Dihapus : ");
	scanf("%i", &x);
	y = x-1;
	a--;
	for(i = y; i < a; i++) {
		maks[i] = maks[i+1];
	}
	printf("\n\nData ke - %d Telah Terhapus!\n", x);
}

int getoption(){
	int input;
	system ("cls");
	printf ("Program Manajemen Data Mahasiswa\n");
	printf ("================================\n");
	printf ("1. Tambah data mahasiswa\n");
	printf ("2. Tampilkan data mahasiswa\n");
	printf ("3. Ubah data mahasiswa\n");
	printf ("4. Hapus data mahasiswa\n");
	printf ("5. Selesai\n");
	printf ("================================\n");
	printf ("Pilih (1-5) : ");
	scanf("%d",&input);
	return input;
}

int main(){
	
	int pilihan = getoption();
	char lanjut;
	
	//enum option{CREATE = 1, READ, UPDATE, DELETE, FINISH};
	
	while(pilihan != 5){
		switch(pilihan){
			case 1:
				printf("Menambah Data Mahasiswa\n");
				tambahdata();
			break;
			case 2:
				printf("Tampilkan Data Mahasiswa\n");
				tampildata();
			break;
			case 3:
				printf("Ubah Data Mahasiswa\n");
				ubahdata();
			break;
			case 4:
				printf("Hapus Data Mahasiswa\n");
				hapusdata();
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
