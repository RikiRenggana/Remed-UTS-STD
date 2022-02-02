#include "SLL.h"


// Riki Renggana //
// IT4404 //
// 1303204024 //

void createList(List &L){
    L.First = NULL;
    L.Last = NULL;
}
infotype input_Player(int ID,string Nama,string Kontrak ){
    infotype player;
    player.ID = ID;
    player.Nama = Nama;
    player.Kontrak = Kontrak;
    return player;
}
address New_Player(infotype dataBaru){
    address P = new elmList;
    P->info.ID = dataBaru.ID;
    P->info.Nama = dataBaru.Nama;
    P->info.Kontrak = dataBaru.Kontrak;
    P->next = NULL;
    return P;
}
void insertLast(List &L,address P){

    if (L.First == NULL && L.Last == NULL){
        L.First = P;
        L.Last = P;
    }else{
        L.Last->next = P;
        L.Last = P;
    }
}
void Tampilkan_Data(List L){
    address P = L.First;
    while (P != NULL){
        cout<<P->info.ID<<" "<<P->info.Nama<<" "<<P->info.Kontrak<<" "<<endl;
        P = P->next;
    }
}
address Search_ID_Player(List L,int ID){
    address P = L.First;
    while (P != NULL){
        if (P->info.ID == ID){
            return P;
        }
        P = P->next;
    }
    return P;
}
void Update_Player(List &L,address P){
    string Nama;
    string Kontrak;

    cout<<"Nama Sebelumnya : "<<P->info.Nama<<endl;
    cout<<"Status Sebelumnya : "<<P->info.Kontrak<<endl;

    cout<<"Nama di ganti menjadi : ";
    cin>>Nama;

    cout<<"Kontrak di ganti menjadi : ";
    cin>>Kontrak;

    P->info.Nama = Nama;
    P->info.Kontrak = Kontrak;

    cout<<"Data Telah di ganti "<<endl;
    cout<<P->info.ID<<" "<<P->info.Nama<<" "<<P->info.Kontrak<<" "<<endl;
}
