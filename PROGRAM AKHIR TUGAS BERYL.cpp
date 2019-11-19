#include <iostream>
#include <conio.h> 
#include <string.h> 
#include <fstream>
using namespace std;
void garis(){
                cout<<" \t====================================================== \n";
        }
void space() {
				cout<<" "<<endl;
}
void cls(){
				system("cls");
}


 int main(){
				system("color a "); 
				awal:
                garis();
                cout<<" \t           SILAHKAN LOGIN TERLEBIH DAHULU \n";
                garis();
                cout<<endl;
                atas:
                	char U;
                	int M;
                	string user;
                	cout<<"Username:	"; cin>>user;
                	for(M=1;M<=3;M++)
					{
                		string pass="";
                		cout<<"Passworld:	";
                			U=_getch();
                			while(U != 13)
								{ pass.push_back(U);
								  cout<<'*';
								  U=_getch();
								}	
							 
							 //gemini30win@gmail.com
					 if (pass == "11706211")
					 	{
					 		cls();
					 		goto login;
						 }
					else 
						{
						cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
						}
					
					
					while (M>=3)
					{
   					cout << "Anda telah 3x memasukan Username & Password yang salah,hubungi pihak berweanng untuk fix";
   					getch();
   					return 0;
					}
					
					}
		login:
			int plh;
			garis();
			cout<<"		  Selamat Datang "<<user<<endl;
			cout<<"                  Anda akan masuk sebagai?"<<endl;
			garis();
			space();
			cout<<"	1.Karyawan(BETA)"<<endl;
			cout<<"	2.HRD"<<endl;
			space();
			cout<<" Pilihan anda ";cin>>plh;
		switch(plh)
			{
				case 1:
					cls();
					goto karyawan;
					break;
				case 2:
					cls();
					goto adm;
					break;
				default:
					cout<<"   Maaf untuk sementara pilihan ini belum tersedia"<<endl;
					space();
					space();
					space();
					space();
					goto login;
				
															/////////////////////////////////////////////////////////////////////////////////
															////////////////////////////KARYAWAN///////////////////////////////////////////
															/////////////////////////////////////////////////////////////////////////////////		
			}
		karyawan:
			{
			int log;
			garis();
			cout<<"		 Silahkan Masukan NIP anda"<<endl;
			garis();
			space();
			cout<<"NIP:     ";
			cin>>log;
			switch(log)
			{
				case 11706211:
					if(user=="budi")
					{
					cls();
					goto n1;
					break;
					}
					else{
						cout<<"MAAF anda tidak terdaftar dalam data(karyawan),atau anda salah memasukan NIS\n";
						goto karyawan;
					}
				case 11706222:
					if (user=="beryl"){
					cls();
					goto n1;
					break;
					}
				else{
						cout<<"MAAF anda tidak terdaftar dalam data(karyawan),atau anda salah memasukan NIS\n";
						goto karyawan;
					}
				default:
					space();
					space();
					cout<<"MAAF anda tidak terdaftar dalam data(karyawan),atau anda salah memasukan NIS\n";
					space();
					space();
					goto karyawan;
				
			}
		n1:
		int dat;
		garis();
		cout<<"			Selamat Datang ";cout<<user<<endl;
		garis();
		cout<<"Ada perlu apa?"<<endl;
		space();
		cout<<"1. Cek gaji"<<endl;
		cout<<"2. Cek rincian gaji"<<endl;
		cout<<"3. Data Diri";cin>>dat;
		
		return 0;
		}
		
		
												/////////////////////////////////////////////////////////////////////////////////////
												////////////////////////*****************HRD*****************////////////////////////
												/////////////////////////////////////////////////////////////////////////////////////
		adm:
		garis();
		cout<<"		Selamat datang di halaman admin"<<endl;
		garis();   
		cout<<"Masukan Passworld"<<endl;
			char s;
            int n;
                
                	for(n=1;n<=3;n++)
					{
                		string ps="";
                		cout<<"Passworld:    ";
                			s=_getch();
                			while(s != 13)
								{ ps.push_back(s);
								  cout<<'*';
								  s=_getch();
								}	
					 if (ps == "boss")
					 	{
					 		cls();
					 		goto admin;
						 }
					else 
						{
						cout << "\n\nMaaf Username & Password anda masukan salah.\n\n";
						}
					
					
					while (n>= 3)
					{
   					cout << "Anda telah 3x memasukan Username & Password yang salah.\n KEMBALI KE MENU";
   					goto login;
					}
				}
		admin:
			int pil;
			garis();
			cout<<"		Silahkan Pilih Opsi Yang Diinginkan"<<endl;
			garis();
			space();
			cout<<"1.input Gaji Karyawan\n2.Cek Daftar&Gaji Karyawan (Diperbaharui 11/12/2017) ";
			cin>>pil;
			switch(pil)
			{
			case 1:
				cls();
				goto input;
				break;
			case 2:
				cls();
				goto cek;
				break;
			}
		input:
		{
		int totjam,son,jam,tunj,pot,pen,jab,hadir,paj,total,mak,tkes,com,hut,kotor,jml,dll;
		char mrd;
		string name;
		garis();
		cout<<"Nama Karyawan          : ";cin>>name;
		space();
		cout<<"Pendidikan(1/2/3/4)    \n1.Sarjana\n2.Diploma\n3.SMA/SMP\n4.tidak sekolah         : ";cin>>pen;
		space();
		cout<<"Jabatan(1/2/3/4)       \n1.Manager\n2.Sekretaris\n3.Staff\n4.Pekerja Lapangan     : ";cin>>jab;
		space();
		cout<<"Jumlah Hadir(1 bulan)  : ";cin>>hadir;
		space();
		cout<<"Jam Kerja              : ";cin>>jam;
		space();
		garis();
		cout<<"              Tunjangan           \n";
		garis();
			cout<<"Makan                   : ";cin>>mak;
			cout<<"Kesehatan               : ";cin>>tkes;
			cout<<"Sudah berkeluarga?(Y/T) : ";cin>>mrd;
			if (mrd =='Y'|| mrd=='y'){
				cout<<"Jumlah Anak         : ";cin>>son;
				mrd=100000+(son*50000);
			}
			else
			{
			  mrd=0;
			}
			cout<<"Komunikasi             : ";cin>>com;	
		garis();
		cout<<"              Potongan            \n";
		garis();
			cout<<"Pajak(%)               : ";cin>>paj;
			cout<<"Hutang                 : ";cin>>hut;
			cout<<"Lainya                 : ";cin>>dll;
		switch(pen){
		case 1:
			pen=500000;
			break;
		case 2:
			pen=300000;
			break;
		case 3:
			pen=100000;
			break;
		case 4:
			pen=50000;
			break;
		default:
			pen=0;
			break;
		}
		switch(jab){
			case 1:
			jab=1000000;
			totjam=(hadir*jam*20000)+((jam-12)*5500);
			break;
		case 2:
			jab=500000;
			totjam=(hadir*jam*15000)+((jam-12)*4500);
			break;
		case 3:
			jab=250000;
			totjam=(hadir*jam*9000)+((jam-12)*2000);
			break;
		case 4:
			jab=150000;
			totjam=(hadir*jam*6000)+((jam-12)*1000);
			break;
		default:
			jab=0;
			cout<<">>>>>>>Error 404<<<<<<<<(didnt support this choose)";
			goto awal;
			break;
		}
		tunj=mak+tkes+com+mrd;
		paj=(pen+jab+totjam+tunj-pot)*paj/100;
		pot=paj+hut+dll;
		total=(pen+jab+totjam+tunj-pot);
		kotor=pen+jab+totjam;
		cout<<"Gaji(bersih) yang diterima oleh "<<name<<" adalah : Rp."<<total;
		cout<<"Gaji Kotor : "<<kotor;
//////////////////////////////////////////////////////////////////////////////////////////////////////////
if(name=="budi")
{			
ofstream myfile ("budi.txt");
 if (myfile.is_open())
 {
     myfile<<name<<endl;
     myfile<<"total gajinya "<<total<<endl;
	 myfile<<"gaji kotornya "<<kotor<<endl;
	 myfile<<"rincian\nBonus pendidikan "<<pen<<endl;
	 myfile<<"Bonus Jabatan "<<jab<<endl;
	 myfile<<"Total Jamkerja "<<totjam<<endl;
	 myfile<<"Total Tunjangan "<<tunj<<endl;
	 myfile<<"Potongan "<<pot; 
 } 
 else
 {
  cout << "Unable to open file";
 }
  myfile.close();
 return 0;
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////
//////////////////////////////////////////////////////////////////////////////////////////////////////////
if(name=="beryl")
{			
ofstream myfile ("beryl.txt");
 if (myfile.is_open())
 {
     myfile<<name<<endl;
     myfile<<"total gajinya "<<total<<endl;
	 myfile<<"gaji kotornya "<<kotor<<endl;
	 myfile<<"rincian\nBonus pendidikan "<<pen<<endl;
	 myfile<<"Bonus Jabatan "<<jab<<endl;
	 myfile<<"Total Jamkerja "<<totjam<<endl;
	 myfile<<"Total Tunjangan "<<tunj<<endl;
	 myfile<<"Potongan "<<pot; 
 } 
 else
 {
  cout << "Unable to open file";
 }
  myfile.close();
 return 0;
		}
		////////////////////////////////////////////////////////////////////////////////////////////////////////

}
		cek:
			int choice;
			garis();
			space();
			garis();
			cout<<"List karyawan (11/2017)\n1.budi\n2.beryl";
			cin>>choice;
			switch(choice){
				case 1:
				cls();
				goto beryl;
				break;
				case 2:
				cls();
				goto beryl;
				break;
			beryl:
				ifstream myfile("beryl.txt");
				char sv_text;
				if (myfile.is_open())
				{
					while (!myfile.eof())
              {
                     myfile.get(sv_text);
                     cout<<sv_text;
              }
              myfile.close();
				}
		
			}
		


		
				
	}
					

                
