#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>
#define Nil NULL 

typedef char Infotype;

typedef struct warga *AddressWrg;
typedef struct warga {
    Infotype nm_wrg;
    AddressWrg next;
    AddressWrg prev;
}Warga;

typedef struct kota *AddressKt;
typedef struct kota {
    Infotype nm_kt;
    AddressWrg next;
    AddressKt down;
}Kota;

void ListMenu();
void InputMenu(int *inputan);

void tambahKota(AddressKt *FirstKt);
void tambahNama(AddressKt *Dapen);