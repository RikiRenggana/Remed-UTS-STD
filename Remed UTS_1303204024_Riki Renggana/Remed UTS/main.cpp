#include "SLL.h"

// Riki Renggana //
// IT4404 //
// 1303204024 //
int main(){
    List L;
    infotype Temp_player;
    address Temp_new;
    address Search_player;

    createList(L);
    Temp_player = input_Player(1,"Ronaldo","Tetap");
    Temp_new = New_Player(Temp_player);
    insertLast(L,Temp_new);

    Temp_player = input_Player(2,"Alves","Kontrak");
    Temp_new = New_Player(Temp_player);
    insertLast(L,Temp_new);

    Temp_player = input_Player(3,"Puyol","Tetap");
    Temp_new = New_Player(Temp_player);
    insertLast(L,Temp_new);

    Temp_player = input_Player(4,"Rodrigo","Kontrak");
    Temp_new = New_Player(Temp_player);
    insertLast(L,Temp_new);

    Tampilkan_Data(L);

    Search_player = Search_ID_Player(L,2);
    Update_Player(L,Search_player);
    return 0;
}
