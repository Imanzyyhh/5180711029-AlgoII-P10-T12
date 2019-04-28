#include <iostream>
#include <stdlib.h>
#include <conio.h>
#include <stdio.h>
#include <windows.h>
#include <string.h>
using namespace std;
struct input
{
int nilai;
};
input batas[20];
input temp;
main(){

int cari,carii;
int jml;
int menu ,k,i;

pilihan:
cout<<" pilihan program"<<endl;
cout<<" 1. input"<<endl;
cout<<" 2. searching"<<endl;
cout<<" 3. sorting"<<endl;
cout<<" 4. Edit data"<<endl;
cout<<" 5. hapus"<<endl;
cout<<" masukan pilihan: ";cin>>menu;
if (menu==1){
        cout<<"masukan jumlah mahasiswa : ";cin>>jml;
for(i=0; i<jml; i++)

    {
    cout<<" nilai mahasiswa ke-"<<i+1<<" : ";cin>>batas[i].nilai;
    }
    goto pilihan    ;  }

else if(menu==2)
{
//pencarian buku
cout<<" Masukan nilai yang dicari: ";cin>>cari;
 for (i=0;i<jml;i++)
     {
         if (cari == batas[i].nilai )
            {
                carii = i;
                cout<<" Mahasiswa ke: "<<carii+1<<" dengan nilai tersebut";
            }
            else
             {cout<<" mahasiwa dengan nilai tersebut tiidak ditemukan "<<endl;}
     }




cout<<" tidak tersedia";
goto pilihan;}

else if (menu==3)
{
int x;
    for (i=0;i<jml;i++)
        {
            for (x=0;x<jml-1;x++)
                {
                    if (batas[x].nilai>batas[x+1].nilai)
                        {
                            temp.nilai = batas[x].nilai;
                            batas[x].nilai = batas[x+1].nilai;
                            batas[x+1].nilai = temp.nilai;

                        }
                }
        }

cout<<" SETELAH DATA DI SORTING: \n";
for (x=0;x<jml;x++)
    {
        cout<<" ========================================\n";

        cout<<" mahasiswa ke "<<x+1<<" :"<<batas[x].nilai<<endl;
    }
        cout<<" ========================================\n";

 goto pilihan;}

else if(menu==4)
{
int k,l;
cout<<"Masukan Data yang akan diedit : ";cin>>k;
l=k-1;
cout<<"nilai\t: ";cin>>batas[l].nilai;

goto pilihan;}

else if(menu==5)
{
int hapus,var;
cout<<"Hapus data ke-";cin>>hapus;
 var=hapus-1;
 for(i=var;i<jml;i++)
 {batas[i]=batas[i+1];}

for(i=0; i<jml; i++)

    {
    cout<<" nilai mahasiswa ke-"<<i+1<<" : "<<batas[i].nilai<<endl;
    }

goto pilihan;}

else {cout<<" masukan pilihan dengan benar\n";goto pilihan;}
}



