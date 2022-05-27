# Praktikum1
#include <iostream>
using namespace std;

struct trainee_t
{
	int id;
    string nama;
    string keahlian;
    int umur;
};

int main()
{
	int umurMaksimalMenjadiTrainee = 24;
	int idKeahlianYangLebihDariSatu = 3;
	int a = 0;
	
	trainee_t trainee[] = {
		{1, "Kim Ujang", "Menyanyi", 21},
        {2, "Lee Jun", "Menari", 16},
        {3, "choi Agung", "Menyanyi dan Menulis lagu ", 19},
        {4, "Min Mino", "Rap", 25},
        {5, "Jeong Nana", "Membuat koreografi", 14},
	};
	
	
  	cout<<" "<<endl;
	for(int i = 0; i < 5; i++) {
        if(trainee[i].umur > umurMaksimalMenjadiTrainee) {
        	cout << "Peserta Trainee " <<trainee[i].nama <<  " tidak lulus seleksi\n";
            continue;
        }
        cout << "Peserta Trainee " << trainee[i].nama <<  " lulus seleksi\n";  
        
        while (trainee[i].id == idKeahlianYangLebihDariSatu){
  		cout << "   Peserta Trainee " << trainee[2].nama <<  " memiliki dua keahlian yang berbeda yaitu " << trainee[2].keahlian << endl;
  		a++;
      	break;
	  }
    }
    
    
  	
    
    
}
        
    	
			 
 
