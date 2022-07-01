#include <iostream>
#include <conio.h>
#include <stdlib.h>
#include <windows.h>
#include <time.h>
using namespace std;

#define KEY_UP 72
#define KEY_DOWN 80
#define KEY_LEFT 75
#define KEY_RIGHT 77
#define KEY_ESC 88

void setcolor(unsigned short color)
{
    HANDLE hCon = GetStdHandle(STD_OUTPUT_HANDLE);

    SetConsoleTextAttribute(hCon, color);
}

struct karakter {
	int x;
	int y;
	string nama;
	int nyawa;
	int telur;
    
};


struct naga {
	string nama;
	int power;
	int telur;
	int hp;
	int attack;
};

const int panjangPeta = 20; // x
const int lebarPeta = 16; // y
    
int posisiKarakterY = 15;
int posisiKarakterX = 10;

int peta[lebarPeta][panjangPeta] = {
    {6,9,6,6,6,9,6,6,6,6,9,6,6,6,9,6,6,6,9,6,},
   	{4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
    {4,4,4,7,7,7,4,5,0,3,3,4,5,4,7,7,7,4,4,4},
   	{8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
    {4,4,4,4,4,4,3,2,2,2,2,2,2,3,4,4,4,4,4,4},
   	{4,4,4,4,4,4,1,1,1,1,1,1,1,1,4,4,4,4,4,4},
    {4,4,3,4,4,1,1,1,1,1,1,1,1,1,1,4,4,3,4,4},
   	{4,4,4,0,4,1,4,2,2,2,2,2,2,4,1,4,5,5,5,5},
    {8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8,8},
   	{7,7,7,7,4,4,4,5,5,4,4,5,5,4,4,4,7,7,7,7},
    {3,4,4,4,4,5,5,4,3,4,4,3,4,5,5,4,4,4,4,3},
   	{4,4,4,5,5,4,3,4,4,4,4,4,4,3,4,5,5,4,4,4},
    {4,4,5,4,3,4,4,4,4,5,5,4,4,4,4,3,4,5,4,4},
    {4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4,4},
   	{2,2,4,4,4,3,4,4,4,1,1,4,4,4,3,4,4,4,2,1},
    {1,2,5,4,4,4,4,4,4,1,1,4,4,4,4,4,4,5,2,2},
};
    
    // Varmintz
    /*
    0 = Karakter\n";
    1 = semak    (Pemain bisa lewat)
   	2 = genangan air   (Pemain tidak bisa lewat)
   	3 = telur        (Pemain bisa lewat)
   	4 = rumput       (Pemain bisa lewat)
    5 = Batu         (Pemain tidak bisa lewat)
    6 = ranjau        (Pemain tidak bisa lewat)
    7 = rumah        (Pemain tidak bisa lewat)
    8 = Trotoar      (Pemain bisa lewat/daerah rawan)
    9 = Finish       (Pemain bisa lewat)
    */
    
int main() {
    

    int randomTelur;
    cout << "o=======================================================o\n";
    cout << "o                        Varminz                        o\n";
    cout << "o-------------------------------------------------------o\n";
    cout << "o           Dapatkan Telur Sebanyak - banyaknya         o\n";
    cout << "o                Dengan mencuri telur Naga              o\n";
    cout << "o=======================================================o\n";
    _getch();

    int arrowKey = 0;
    int p,pilih;
    int random;
    char tekan;
    
    karakter k;
    k.nama = "Varminz";
    k.nyawa = 3;
    k.telur = 0;;
    
    naga n1;
    n1.nama = "Wyvern";
    n1.telur = 25;
	 
    naga n2;
    n2.nama = "Zmaj";
    n2.telur = 45;

    
    /*
    #define KEY_UP 72
    #define KEY_DOWN 80
    #define KEY_LEFT 75
    #define KEY_RIGHT 77
    #define KEY_ESC 88
    */
    
    while(1) {
        // Input Keyboard
        cout << "\nMasukan arrow key " << endl;
        cout << "Arrow key yang dimasukan : " << arrowKey << "\n";
        cout << "nyawa : "<<k.nyawa << endl;
    	cout << "Telur : "<<k.telur << endl;
    	cout << "XY    : ( "<<posisiKarakterX<<", "<<posisiKarakterY<<" )";
        arrowKey = getch();
        
        
        //clear screen
        system("cls");
        
        // Aturan menggerakkan karakter ke atas
        if (arrowKey == KEY_UP && (peta[posisiKarakterY - 1][posisiKarakterX] == 0 || peta[posisiKarakterY - 1][posisiKarakterX] == 1 || peta[posisiKarakterY - 1][posisiKarakterX] == 3 ||peta[posisiKarakterY - 1][posisiKarakterX] == 4 || peta[posisiKarakterY - 1][posisiKarakterX] == 6 ||peta[posisiKarakterY - 1][posisiKarakterX] == 8 || peta[posisiKarakterY - 1][posisiKarakterX] == 9) && posisiKarakterY >= 0){
            posisiKarakterY--;
        }

        // Aturan menggerakkan karakter ke bawah
        if (arrowKey == KEY_DOWN && (peta[posisiKarakterY + 1][posisiKarakterX] == 0 || peta[posisiKarakterY + 1][posisiKarakterX] == 1 || peta[posisiKarakterY + 1][posisiKarakterX] == 3 || peta[posisiKarakterY + 1][posisiKarakterX] == 4 || peta[posisiKarakterY + 1][posisiKarakterX] == 6 || peta[posisiKarakterY + 1][posisiKarakterX] == 8 || peta[posisiKarakterY + 1][posisiKarakterX] == 9) && posisiKarakterY < lebarPeta){
            posisiKarakterY++;
        }

        // Aturan menggerakkan karakter ke kiri
        if (arrowKey == KEY_LEFT && (peta[posisiKarakterY][posisiKarakterX - 1] == 0 || peta[posisiKarakterY][posisiKarakterX - 1] == 1 || peta[posisiKarakterY][posisiKarakterX - 1] == 3 || peta[posisiKarakterY][posisiKarakterX - 1] == 4 || peta[posisiKarakterY][posisiKarakterX - 1] == 6 || peta[posisiKarakterY][posisiKarakterX - 1] == 8 || peta[posisiKarakterY][posisiKarakterX - 1] == 9) && posisiKarakterX >= 0){
            posisiKarakterX--;
        }

        // Aturan menggerakkan karakter ke kanan
        if (arrowKey == KEY_RIGHT && (peta[posisiKarakterY][posisiKarakterX + 1] == 0 || peta[posisiKarakterY][posisiKarakterX + 1] == 1 || peta[posisiKarakterY][posisiKarakterX + 1] == 3 || peta[posisiKarakterY][posisiKarakterX + 1] == 4 || peta[posisiKarakterY][posisiKarakterX + 1] == 6 || peta[posisiKarakterY][posisiKarakterX + 1] == 8 || peta[posisiKarakterY][posisiKarakterX + 1] == 9) && posisiKarakterX < panjangPeta){
            posisiKarakterX++;
        }
        if (arrowKey == KEY_ESC) {
            exit(0);
        }
	
		// Render grafik
		/*
		Color      Background    Foreground
		---------------------------------------------
		Black            0           0
		Blue             1           1
		Green            2           2
		Cyan             3           3
		Red              4           4
		Magenta          5           5
		Brown            6           6
		White            7           7
		Gray             -           8
		Intense Blue     -           9
		Intense Green    -           10
		Intense Cyan     -           11
		Intense Red      -           12
		Intense Magenta  -           13
		Yellow           -           14
		Intense White    -           15
		*/
        for (int y = 0; y < lebarPeta; y++)
        {
            for (int x = 0; x < panjangPeta; x++)
            {
                if (posisiKarakterX == x && posisiKarakterY == y)
                {
                    setcolor(12);
                    cout << 'A' << " ";
                    setcolor(7);
                }
                else if (peta[y][x] == 1)
                {
                    setcolor(13);
                    cout << "% ";
                    setcolor(7);
                }
                else if (peta[y][x] == 2)
                {
                    setcolor(1);
                    cout << "~ ";
                    setcolor(7);
                }
                else if (peta[y][x] == 3)
                {
                    setcolor(6);
                    cout << "o " ;
                    setcolor(7);
                }
                else if (peta[y][x] == 4)
                {
                    setcolor(10);
                    cout << "_ ";
                    setcolor(7);
                }
                else if (peta[y][x] == 5)
                {
                    setcolor(8);
                    cout << "@ ";
                    setcolor(7);
                }
                else if (peta[y][x] == 6)
                {
                    setcolor(12);
                    cout << "# ";
                    setcolor(7);
                }
                else if (peta[y][x] == 7)
                {
                    setcolor(14);
                    cout << "^ ";
                    setcolor(7);
                }
                else if (peta[y][x] == 8)
                {
                    setcolor(11);
                    cout << "= ";
                    setcolor(7);
                }
                else if (peta[y][x] == 9)
                {
                    setcolor(15);
                    cout << "<>";
                    setcolor(7);
                }
                else if (peta[y][x] == 0)
                {
                	setcolor(3);
                	cout << "+ ";
                	setcolor(7);
				}
                else
                {
                    cout << peta[y][x] << " ";
                }
            }
            cout << "\n";
        }
        // Aturan tambah telur
      	if (peta[posisiKarakterY][posisiKarakterX] == 3){
        	k.telur += 10;
	        peta[posisiKarakterY][posisiKarakterX] = 4;
	        cout << "Selamat, " << k.nama << " kamu mendapat tambahan 10 telur" << endl;
	    }
	    
	    // Aturan tambah nyawa
	    if (peta[posisiKarakterY][posisiKarakterX] == 0){
        	k.nyawa += 2;
	        peta[posisiKarakterY][posisiKarakterX] = 4;
	        cout << "Selamat, " << k.nama << " nyawamu bertambah 2" << endl;
	    }
	    
	    // Aturan terkena jebakan
	    if (peta[posisiKarakterY][posisiKarakterX] == 6){
        	k.nyawa -= 1;
        	posisiKarakterX = 10;
			posisiKarakterY = 15;    
        cout << "Aduh, " << k.nama << " terkena jebakan, nyawamu berkurang -1 dan kembali ke posisi semula" << endl;
        cout << k.nama << "kembali ke posisi semula" << endl;
	    }
        
        if (peta[posisiKarakterY][posisiKarakterX] == 1){
        	int random;
        	srand(time(0));
        	random = rand() % 4;
            if (random == 1) 
            {
                cout << "Kamu bertemu " << n1.nama << "!\n";
                cout << "Apa yang akan dilakukan\n";
                cout << "1. Ambil Telurnya Lalu Kabur\n";
                cout << "2. kabur \n";
                cout << "Pilih: "; cin >> p;
                if (p == 1){
						k.telur += n1.telur;
						cout << "Selamat, " << k.nama << " kamu mendapat tambahan 25 telur" << endl;
					}  
				else if(p == 2){
					cout << "Kabur\n";
                    cout << "Tekan tombol apapun\n";
				}
            }
            else if(random == 2)
            {
                cout << "Kamu bertemu " << n2.nama << "!\n";
                cout << "AAmbil Telurnya Lalu Kabur\n";
                cout << "1. Ambil Telurnya Lalu Kabur\n";
                cout << "2. kabur \n";
                cout << "Pilih: "; cin >> p;
                if (p == 1){
						k.telur += n2.telur;
						cout << "Selamat, " << k.nama << " kamu mendapat tambahan 45 telur" << endl;
					}  
				else if (p == 2);{
					cout << "Kabur\n";
                    cout << "Tekan tombol apapun\n";
				}
            }
    
            // Aturan garis finish
            if (peta[posisiKarakterY][posisiKarakterX] == 9){
                cout << "\nSelamat, Kamu Menang!\n";
                break;
            }
            if (k.nyawa <= 0) {
                ending:
                cout << "\Sabar ya, Kamu kalah!\n";
            	break;
           }
        }
   } 
   getch();
}
    
    



	

