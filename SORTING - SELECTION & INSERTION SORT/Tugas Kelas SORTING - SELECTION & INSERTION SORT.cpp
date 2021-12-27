#include <stdio.h>

int data[6] = {32, 75, 69, 58, 21, 40};

void showdata(){
	int i, j;
	printf("Data yang akan diurutkan :\n");
	for(i = 0; i < 6; i++){
    printf("%d ", data[i]);
	}
}

int ascsort(){
  int i, j, indeks, temp;
  for(i = 0; i < 5; i++){
    indeks = i;
    for (j = i + 1; j < 6; j++){
      if(data[indeks] > data[j]){
        indeks = j;
      }
    }
      temp = data[i];
      data[i] = data[indeks];
      data[indeks] = temp;
  }
  printf("Hasil pengurutan ascending :\n");
  for(i = 0; i < 6; i++){
    printf("%d ", data[i]);
  }
}

int dessort(){
  int i, j, indeks, temp;
  for(i = 0; i < 5; i++){
    indeks = i;
    for (j = i + 1; j < 6; j++){
      if(data[indeks] < data[j]){
        indeks = j;
      }
    }
      temp = data[i];
      data[i] = data[indeks];
      data[indeks] = temp;
  }
  printf("Hasil pengurutan descending :\n");
  for(i = 0; i < 6; i++){
    printf("%d ", data[i]);
  }
}

int main(){
	showdata();
	printf("\n");
	ascsort();
	printf("\n");
	dessort();
}
