#include <iostream>
#include <conio.h>
#include <stdlib.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77

int main() {
    // Varmintz
    /*
    0 = Karakter\n";
    1 = jalan batu   (Pemain bisa lewat)
   	2 = pagar daun   (Pemain tidak bisa lewat)
   	3 = pagar kayu   (Pemain tidak bisa lewat)
   	4 = rumput       (Pemain bisa lewat)
    5 = Batu         (Pemain tidak bisa lewat)
    6 = pohon        (Pemain tidak bisa lewat)
    7 = rumah        (Pemain tidak bisa lewat)
    8 = Trotoar      (Pemain bisa lewat/daerah rawan)
    9 = Finish       (Pemain bisa lewat)
    */
    
    int panjangPeta = 20; // x
    int lebarPeta = 16; // y
    
    int posisiKarakterY = 15;
    int posisiKarakterX = 10;
    
    int persenMunculOrang;
    int randomTelur;
    
    cout << "Karakter ada di y:" << posisiKarakterY << ", x:" << posisiKarakterX << "\n";
  
    
    int peta[lebarPeta][panjangPeta] = {
        {4,9,4,4,4,9,4,4,4,4,9,4,4,4,9,4,4,4,9,4},
   		{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
        {4,4,4,7,7,7,4,5,4,4,4,4,5,4,7,7,7,4,4,4},
   		{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
        {4,4,4,4,4,4,4,2,2,2,2,2,2,4,4,4,4,4,4,4},
   		{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
        {6,6,6,4,4,1,1,1,1,1,1,1,1,1,1,4,4,4,4,4},
   		{4,4,4,4,4,1,4,2,2,2,2,2,2,4,1,4,5,5,5,5},
        {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
   		{7,7,7,4,4,4,4,1,4,7,7,7,4,4,4,4,7,7,7,7},
        {6,6,6,6,6,4,4,1,4,4,4,4,4,4,4,4,4,4,4,4},
   		{1,1,1,1,1,1,1,1,4,4,4,3,3,3,3,3,4,4,4,4},
        {1,4,5,4,1,3,3,3,4,4,4,4,4,4,4,4,4,4,4,4},
        {1,1,1,1,1,1,1,1,1,1,1,4,4,4,5,5,5,4,4,4},
   		{4,4,4,4,4,4,4,4,4,4,1,4,4,4,4,4,4,4,4,4},
        {1,1,1,1,6,6,6,4,4,4,1,4,4,6,6,6,1,1,1,1},
    };
    
    
    int arrowKey = 0;
    
    /*
    #define KEY_UP 72
    #define KEY_DOWN 80
    #define KEY_LEFT 75
    #define KEY_RIGHT 77
    */
    
    while(1) {
        // Input Keyboard
        cout << "\nMasukan arrow key ";
        cin >> arrowKey;
        cout << "Arrow key yang dimasukan " << arrowKey << "\n";
        
        // Aturan menggerakkan karakter ke atas
                // Aturan menggerakkan karakter ke atas
        if (arrowKey == KEY_UP && (peta[posisiKarakterY - 1][posisiKarakterX] == 1 || peta[posisiKarakterY - 1][posisiKarakterX] == 4 || peta[posisiKarakterY - 1][posisiKarakterX] == 8 || peta[posisiKarakterY - 1][posisiKarakterX] == 9) && posisiKarakterY >= 0){
            // Gerakkan karakter ke atas
            posisiKarakterY = posisiKarakterY - 1;
        }

        // Aturan menggerakkan karakter ke bawah
        if (arrowKey == KEY_DOWN && (peta[posisiKarakterY + 1][posisiKarakterX] == 1 || peta[posisiKarakterY + 1][posisiKarakterX] == 4 || peta[posisiKarakterY + 1][posisiKarakterX] == 8 || peta[posisiKarakterY + 1][posisiKarakterX] == 9) && posisiKarakterY < lebarPeta){
            // Gerakkan karakter ke bawah
            posisiKarakterY = posisiKarakterY + 1;
        }

        // Aturan menggerakkan karakter ke kiri
        if (arrowKey == KEY_LEFT && (peta[posisiKarakterY][posisiKarakterX - 1] == 1 || peta[posisiKarakterY][posisiKarakterX - 1] == 4 || peta[posisiKarakterY][posisiKarakterX - 1] == 8 || peta[posisiKarakterY][posisiKarakterX - 1] == 9) && posisiKarakterX >= 0){
            // Gerakkan karakter ke kiri
            posisiKarakterX = posisiKarakterX - 1;
        }

        // Aturan menggerakkan karakter ke kanan
        if (arrowKey == KEY_RIGHT && (peta[posisiKarakterY][posisiKarakterX + 1] == 1 || peta[posisiKarakterY][posisiKarakterX + 1] == 4 || peta[posisiKarakterY][posisiKarakterX + 1] == 8 || peta[posisiKarakterY][posisiKarakterX + 1] == 9) && posisiKarakterX < panjangPeta){
            // Gerakkan karakter ke kanan
            posisiKarakterX = posisiKarakterX + 1;
        }
        
        // Render grafik
        for(int y=0; y<lebarPeta; y++) {
            for(int x=0; x<panjangPeta; x++) {
                
                if(posisiKarakterX == x && posisiKarakterY == y) {
                    cout << 0 << " ";
                } else {
                    cout << peta[y][x] << " ";
                }
            }
            cout << "\n";
        }
        
        if(peta[posisiKarakterX][posisiKarakterY] == 1){
            if (randomTelur == 1) {
                cout << "Anda Mendapat Telur" << endl;
            }
            
            randomTelur = 0;
        	
        }
		else if (peta[posisiKarakterY][posisiKarakterX] == 4 || peta[posisiKarakterY][posisiKarakterX] == 8){
            cout << "Hati - hati muncul orang!\n";
            persenMunculOrang = persenMunculOrang * rand() % 20;
            if (persenMunculOrang == 1)
            {
                cout << "Bertabrakan dengan orang, Anda Kalah\n";
                break;
            }
            persenMunculOrang = 0;
        }
        
        // Aturan garis finish
        if (peta[posisiKarakterY][posisiKarakterX] == 9){
            cout << "\nSelamat, Anda Menang!\n";
            break;
        }
    }
     
    
    return 0;
}
