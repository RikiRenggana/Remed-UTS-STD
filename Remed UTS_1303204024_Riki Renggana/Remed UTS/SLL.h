#ifndef SLL_H_INCLUDED
#define SLL_H_INCLUDED

// Riki Renggana //
// IT4404 //
// 1303204024 //

#include <iostream>
using namespace std;

typedef struct elmList *address;
typedef struct Player infotype;

struct Player{
    int ID;
    string Nama;
    string Kontrak;
};

struct elmList{
    infotype info;
    address next;
};
struct List{
    address First;
    address Last;
};

void createList(List &L);
infotype input_Player(int ID,string Nama,string Kontrak );
address New_Player(infotype dataBaru);
void insertLast(List &L,address P);
void Tampilkan_Data(List L);
address Search_ID_Player(List L,int ID);
void Update_Player(List &L,address P);

#endif // SLL_H_INCLUDED
