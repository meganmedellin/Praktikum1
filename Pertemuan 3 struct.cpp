#include <iostream>

using namespace std;
 
struct kacamata{
    string merk;
    string jenisFrame;
    string jenisLensa;
    string warna;
    int harga;
    int totalHarga;
    int jmlh;
};

struct pembeli{
    string nama;
    string noHp;
    
};
 
int main(){
	int totalPendapatan;
	pembeli pembeli1,pembeli2, pembeli3, pembeli4,pembeli5;
    kacamata kcmt1, kcmt2, kcmt3, kcmt4, kcmt5;
 
    kcmt1.merk = "Chanel";
    kcmt1.jenisFrame ="Wayfayer";
    kcmt1.jenisLensa = "Blueray";
    kcmt1.warna = "Pink";
    kcmt1.harga = 6000000; 
     
    kcmt2.merk = "Versace";
    kcmt2.jenisFrame ="Aviator";
    kcmt2.jenisLensa = "photocromic";
    kcmt2.warna = "Merah";
    kcmt2.harga = 1750000;
    
    kcmt3.merk = "Gucci";
    kcmt3.jenisFrame ="Cat Eye";
    kcmt3.jenisLensa = "Kaca Biasa";
    kcmt3.warna = "Hitam";
    kcmt3.harga = 3500000;
    
    kcmt4.merk = "Emporio Armani";
    kcmt4.jenisFrame ="Oversized ";
    kcmt4.jenisLensa = "Anti UV";
    kcmt4.warna = "Emas";
    kcmt4.harga = 4300000;
    
    kcmt5.merk = "Calvin Klein";
    kcmt5.jenisFrame ="Bulat";
    kcmt5.jenisLensa = "Blueray";
    kcmt5.warna = "Silver";
    kcmt5.harga = 2800000;
    
    cout << "=======Data Pembeli Kacamata=======" << endl;
    cout << "Nama Pembeli    : "; cin >> pembeli1.nama;
    cout << "No Hp           : "; cin >> pembeli1.noHp;
    cout << "Jumlah Kacamata : "; cin >> kcmt1.jmlh;
    cout << "Merk            : " << kcmt1.merk << endl;
    cout << "Jenis Frame     : " << kcmt1.jenisFrame << endl;
    cout << "Jenis Lensa     : " << kcmt1.jenisLensa << endl;
    cout << "Warna           : " << kcmt1.warna << endl;
    cout << "Harga           : " << kcmt1.harga << endl;
    kcmt1.totalHarga = kcmt1.harga*kcmt1.jmlh;
    cout << "Total harga     : " << kcmt1.totalHarga <<endl;
    cout << endl;
    
    
    cout << "=======Data Pembeli Kacamata=======" << endl;
    cout << "Nama Pembeli    : "; cin >> pembeli2.nama;
    cout << "No Hp           : "; cin >> pembeli2.noHp;
    cout << "Jumlah Kacamata : "; cin >> kcmt2.jmlh;
    cout << "Merk            : " << kcmt2.merk << endl;
    cout << "Jenis Frame     : " << kcmt2.jenisFrame << endl;
    cout << "Jenis Lensa     : " << kcmt2.jenisLensa << endl;
    cout << "Warna           : " << kcmt2.warna << endl;
    cout << "Harga           : " << kcmt2.harga << endl;
    kcmt2.totalHarga = kcmt2.harga*kcmt2.jmlh;
    cout << "Total harga     : " << kcmt2.totalHarga <<endl;
    cout << endl;
    
    
    cout << "=======Data Pembeli Kacamata=======" << endl;
    cout << "Nama Pembeli    : "; cin >> pembeli3.nama;
    cout << "No Hp           : "; cin >> pembeli3.noHp;
    cout << "Jumlah Kacamata : "; cin >> kcmt3.jmlh;
    cout << "Merk            : " << kcmt3.merk << endl;
    cout << "Jenis Frame     : " << kcmt3.jenisFrame << endl;
    cout << "Jenis Lensa     : " << kcmt3.jenisLensa << endl;
    cout << "Warna           : " << kcmt3.warna << endl;
    cout << "Harga           : " << kcmt3.harga << endl;
    kcmt3.totalHarga = kcmt3.harga*kcmt3.jmlh;
    cout << "Total harga     : " << kcmt3.totalHarga <<endl;
    cout << endl;
    
    cout << "=======Data Pembeli Kacamata=======" << endl;
    cout << "Nama Pembeli    : "; cin >> pembeli4.nama;
    cout << "No Hp           : "; cin >> pembeli4.noHp;
    cout << "Jumlah Kacamata : "; cin >> kcmt4.jmlh;
    cout << "Merk            : " << kcmt4.merk << endl;
    cout << "Jenis Frame     : " << kcmt4.jenisFrame << endl;
    cout << "Jenis Lensa     : " << kcmt4.jenisLensa << endl;
    cout << "Warna           : " << kcmt4.warna << endl;
    cout << "Harga           : " << kcmt4.harga << endl;
    kcmt4.totalHarga = kcmt4.harga*kcmt4.jmlh;
    cout << "Total harga     : " << kcmt4.totalHarga <<endl;
    cout << endl;
    
    
    cout << "=======Data Pembeli Kacamata=======" << endl;
    cout << "Nama Pembeli    : "; cin >> pembeli5.nama;
    cout << "No Hp           : "; cin >> pembeli5.noHp;
    cout << "Jumlah Kacamata : "; cin >> kcmt5.jmlh;
    cout << "Merk            : " << kcmt5.merk << endl;
    cout << "Jenis Frame     : " << kcmt5.jenisFrame << endl;
    cout << "Jenis Lensa     : " << kcmt5.jenisLensa << endl;
    cout << "Warna           : " << kcmt5.warna << endl;
    cout << "Harga           : " << kcmt5.harga << endl;
    kcmt5.totalHarga = kcmt5.harga*kcmt5.jmlh;
    cout << "Total harga     : " << kcmt5.totalHarga <<endl;
    cout << endl;
	
    cout << "==============================================================" << endl;
    totalPendapatan = kcmt1.totalHarga + kcmt2.totalHarga + kcmt3.totalHarga + kcmt4.totalHarga + kcmt5.totalHarga;
    cout << "Total Pendapatan = " << totalPendapatan << endl;
    
    
      
    return 0;
}
