#include<iostream>
using namespace std;

void Judul1(){
cout << "\n\t\t\t\tLAPORAN PENDAPATAN FOTO COPY SUBUR" << endl;
}
void Garis(){
    cout << "------------------------------------------------------------------------------------------------------" << 
endl;
}
void Judul2(string tanggal){
cout << "\t\t\t\t Tanggal : " << tanggal << endl << endl;
Garis();
cout << "\tNo" << "\tNama" << "\t Jumlah" << "\t Biaya Rp." << "\t Total Rp." << "\t Diskon Rp." << "\t Bayar Rp." << endl;
Garis();
}
float persentase_diskon (int jumlahlembar){
float pd;
if (jumlahlembar >= 200)
{
pd = 0.1;
}else
{
pd = 0;
}
return pd;
}
void Judul3(string nama[], int jumlahlembar[], int biaya[]){
int k = 0, no = 1;
int totalbiaya = 0;
int diskon = 0;
int bayar = 0;
while (k < 4)
{
float pd = persentase_diskon(jumlahlembar[k]);
totalbiaya = jumlahlembar[k] * biaya[k];
diskon = totalbiaya * pd;
bayar = totalbiaya - diskon;
cout << "\n\t" << no << "\t" << nama[k] << "\t\t" << jumlahlembar[k] << "\t\t" << 
biaya[k] << "\t\t" << totalbiaya << "\t\t" << diskon << "\t\t" << bayar << endl;
no++;
k++;
}
}
int main(int argc, char const *argv[]){
string tanggal = "1 Agustus 2020";
string nama[] = {"M.Rohid", "Rahman", "Among", "Khalid"};
int jumlahlembar[] = {300, 50, 100, 250};
int biaya[] = {200, 200, 200, 200};

Judul1();
Judul2(tanggal);
Judul3(nama, jumlahlembar, biaya);
getchar();
return 0;
}