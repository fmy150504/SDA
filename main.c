#include "header.h"

int main() {
  /*Deklarasi Variabel*/
  AddressKt Dapen;

  int menu = 0;

  /*Program*/
  /*Inisialisasi*/
  Dapen = Nil;

  while(true){ /*Menggunakan true agar tidak memakan banyak memori drod menggunakan variabel*/
    system("cls");
    PrintData(Dapen);
    listMenu();
    inputMenu(&menu);
    if(menu == 1) {         /*Menu Tambah Kota*/
        tambahKota(&Dapen);
    } else if (menu == 2) { /*Menu Tambah Nama*/
        tambahNama(&Dapen);
    } else if (menu == 3) { /*Menu Hapus Kota*/
        HapusKota(&Dapen);
    } else if (menu == 4) { /*Menu Hapus Nama*/
        HapusNama(&Dapen);
    } else if (menu == 5) { /*Menu Tampilkan*/
        PrintData(Dapen);
    } else if (menu == 6) { /*Menu Cai Kota*/
        SearchKota(Dapen);
    } else if(menu == 0) {
        printf("Terimakasih! :D");
        sleep(1.5);
        break;
    } else {
        printf("Silahkan pilih menu yang ada.\n");
        sleep(1.5);
    }
  }
  return 0;
}