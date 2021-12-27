#include <stdio.h>
#include <stdlib.h>

#define maksimal 50

typedef struct mahasiswa
{
    char npm[21];
    char nama[31];
    char kelas[31];
}data_mhs;

data_mhs mhs[maksimal];

void inputdata(){
	int a, b;
	printf("Data Dosen: ");
    scanf("%i", &b);
    printf("\n");

    for(a = 0; a < b; a++) {
        printf("Data Mahasiswa ke %i\n", a + 1);
        printf("\n");
        printf("NPM: "); fflush(stdin); gets(mhs[a].npm);
        printf("Nama: "); fflush(stdin); gets(mhs[a].nama);
        printf("Kelas: "); fflush(stdin); gets(mhs[a].kelas);
        printf("\n\n");
    }
}

void outputdata(){
	int a, b;
    printf("Data yang ditampilkan (tidak boleh lebih dari inputan) : ");
    scanf("%i", &b);
    printf("\n");

    for(a = 0; a < b; a++) {
        printf("Data Mahasiswa ke %i\n", a + 1);
        printf("\n");
        printf("NPM: %s\n", mhs[a].npm);
        printf("NAMA: %s\n", mhs[a].nama);
        printf("KELAS: %s\n", mhs[a].kelas);
        printf("\n\n");
    }
}

int main() {
    inputdata();
	outputdata();
    return 0;
}
