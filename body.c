#include "header.h"

void ListMenu() 
{
    printf("\nMenu Utama\n");
    printf("1. Tambahkan Kota\n");
    printf("2. Tambahkan Nama\n");
    printf("3. Hapus Kota\n");
    printf("4. Hapus Nama\n");
    printf("5. Tampilkan data\n");
    printf("6. Cari kota\n");
    printf("0. Keluar\n");
}

void InputMenu(int *inputan) 
{
    printf("Masukan pilihan anda : ");
    scanf("%d", &(*inputan));
}

/*----------- Tambah ----------*/

void tambahKota(AddressKt *FirstKt)
{
  Infotype tempName = (Infotype) malloc(58*sizeof(char));
  AddressKt tempNode = (AddressKt) malloc(sizeof(Kota));
  AddressKt trvsl = (AddressKt) malloc(sizeof(Kota));

  scanf(" %[^\n]", tempName);

  tempNode->nm_kt = tempName;
  tempNode->next = Nil;
  tempNode->down = Nil;

  trvsl = (*FirstKt);
  if(trvsl == Nil)
  {
    (*FirstKt) = tempNode;
  } else{
    while(trvsl->down!=Nil)
    {
      trvsl=trvsl->down;
    }
    trvsl->down = tempNode;
  }
}

void tambahNama(AddressKt *Dapen)
{
  
}