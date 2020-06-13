#include<iostream>
#include<iomanip>
#include<conio.h>
#include<fstream>
#include<windows.h>
using namespace std;



struct bni{ 
string pinn,norekk;
string nama,tarik,menu,pin,pinbaru,pinbaru2,norek,nasabah;
string meter,tujuan,noreklain,pembayaran,telkomsel,menupembayaran,vtelkomsel,pilih,ulang,axis;
int pilihh,jumlah,uang,saldo;
}atm;
int transaksi(int a,int b)
{
    atm.saldo=a-b;
	cout<<"\t\t\t\t\t   Transaksi berhasil"<<endl;
	cout<<"\t\t\t\t\tsisa saldo anda Rp : "<<atm.saldo<<endl;
	return atm.saldo;
}
int transaksi2(int a,int b)
{
    atm.saldo=a-b;
	cout<<"\t\t\t\t\t   sucsesful transaction"<<endl;
	cout<<"\t\t\t\t  The rest of your balance Rp : "<<atm.saldo<<endl;
	return atm.saldo;
}
void aksesfile()
{
	ifstream ifile;
	string notepde;
	int s;
	ifile.open("fileprojectatm.txt");
		getline(ifile,notepde);
		s = atoi(notepde.c_str());
			atm.saldo=s;
		getline(ifile,notepde);
			atm.norekk=notepde;
		getline(ifile,notepde);
			atm.pinn=notepde;
	ifile.close();
}
void aksesout()
{
	ofstream ofile;
	ofile.open("fileprojectatm.txt");
	ofile<<atm.saldo<<endl;
	ofile<<atm.norekk<<endl;
	ofile<<atm.pinn<<endl;
	ofile.close();
}
void kepala()
{
	cout<<"\t\t\t\t\t         BNI ATM"<<endl;
	cout<<"\t\t\t=========================================================="<<endl<<endl;
}
void awal()
{   cout<<endl<<endl;
	cout<<"\t\t\t\t\tSelamat datang di ATM BNI"<<endl;
	cout<<"\t\t\t\t\t  (WELCOME in BNI ATM)"<<endl;
	cout<<"\t\t\t=========================================================="<<endl;
}
void menunggu()
{
	cout<<endl<<endl;
	cout<<"\t\t\t\t    Nikmati Kemudahan Bertransaksi"<<endl;
	cout<<"\t\t\t\t   Pembayaran, Pembelian, Transfer"<<endl;
	cout<<"\t\t\t\t  Jaringan Link, ATM Bersama, Prima"<<endl;
	cout<<"\t\t\t\t   Melalui BNI ATM, BNI SMS Banking"<<endl;
	cout<<"\t\t\t\t      Dan BNI Internet Banking"<<endl;
	cout<<endl;
				
	cout<<"\t\t\t\t     Untuk Kemudahan Dan Keamanan"<<endl;
	cout<<"\t\t\t\t        Belanja Online Anda"<<endl;
	cout<<"\t\t\t\t      Gunakan BNI Debit Online"<<endl;
	cout<<endl;
				
	cout<<"\t\t\t\t     Untuk Informasi Lebih Lanjut"<<endl;
	cout<<"\t\t\t\t       Hubungi BNI Call 1500046"<<endl;
	cout<<"\t\t\t\t       Atau 68888 Melalu Ponsel"<<endl;
}

void menunggu2()
{
	cout<<endl<<endl;
	cout<<"\t\t\t\t enjoy the convenience of trnsaction"<<endl;
	cout<<"\t\t\t\t      payment,purchase,transferr"<<endl;
	cout<<"\t\t\t\t   Nework link, ATM Bersama, Prima"<<endl;
	cout<<"\t\t\t\t   Trough BNI ATM, BNI SMS Banking"<<endl;
	cout<<"\t\t\t\t      And BNI Internet Banking"<<endl;
	cout<<endl;
				
	cout<<"\t\t\t\t    for convenience and security"<<endl;
	cout<<"\t\t\t\t        Your online shoping"<<endl;
	cout<<"\t\t\t\t       Use  BNI Debit Online"<<endl;
	cout<<endl;
				
	cout<<"\t\t\t\t       For more information "<<endl;
	cout<<"\t\t\t\t     contact BNI Call 1500046"<<endl;
	cout<<"\t\t\t\t      or 68888 via cellphone"<<endl;
}
void menuutama()
{
	menupenarikan:
		cout<<endl;
		cout<<"\t\t\t                   Menu Penarikan Cepat"<<endl;
		cout<<"\t\t\t              Silahkan Pilih Jumlah Penarikan"<<endl;
		cout<<"\t\t\t        (Pilih 'Menu Lain' Jika Ingin Cetak RECEIPT)"<<endl;
		cout<<"\t\t\t=========================================================="<<endl;
		cout<<"\t\t\t1<== Rp.300.000";		cout<<"\t\t\t         Rp.1.200.000 ==>4"<<endl<<endl;	
		cout<<"\t\t\t2<== Rp.500.000";		cout<<"\t\t\tPenarikan Jumlah Lain ==>5"<<endl<<endl;
		cout<<"\t\t\t3<== Rp.1.000.000";	cout<<"\t\t         Menu Lainnya ==>6"<<endl<<endl;
		cout<<"\t\t\tMasukkan Pilihan Anda = "; cin>>atm.pilihh;
		system("cls");
		atm.ulang ="9";
		switch(atm.pilihh)
		{
		case 1:
			cout<<endl<<endl;;
			kepala();
			cout<<"\t\t\t\t\t  1. Rekening Tabungan"<<endl;
			cout<<"\t\t\t\t\t  2. Menu Sebelumnya"<<endl<<endl;
			cout<<"\t\t\t\t\t  Masukkan Pilihan Anda = "; cin>>atm.pilih;
			system("cls");
			if(atm.pilih=="1")
			{
				menunggu();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi(atm.saldo,300000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
				atm.ulang ="9";
			}
			else
			{
				system("cls");
				atm.ulang ="9";
			}
			break;
		case 2:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t\t  1. Rekening Tabungan"<<endl;
			cout<<"\t\t\t\t\t  2. Menu Sebelumnya"<<endl<<endl;
			cout<<"\t\t\t\t\t  Masukkan Pilihan Anda = "; cin>>atm.pilih;
			system("cls");
			if(atm.pilih=="1")
			{
				menunggu();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi(atm.saldo,500000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
			}
			else
			{
				system("cls");
				atm.ulang ="9";
			}
			break;
		case 3:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t\t  1. Rekening Tabungan"<<endl;
			cout<<"\t\t\t\t\t  2. Menu Sebelumnya"<<endl<<endl;
			cout<<"\t\t\t\t\t  Masukkan Pilihan Anda = "; cin>>atm.pilih;
			system("cls");
			if(atm.pilih=="1")
			{
				menunggu();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi(atm.saldo,1000000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
			}
			else
			{
				system("cls");
			}
			break;
		case 4:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t\t  1. Rekening Tabungan"<<endl;
			cout<<"\t\t\t\t\t  2. Menu Sebelumnya"<<endl<<endl;
			cout<<"\t\t\t\t\t  Masukkan Pilihan Anda = "; cin>>atm.pilih;
			system("cls");
		if(atm.pilih=="1")
			{
				menunggu();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi(atm.saldo,1200000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
			}
			else
			{
				system("cls");
				atm.ulang ="9";
			}
			break;
		case 5:
			penarikan:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t    Masukkan Jumlah Penarikan Tunai"<<endl;
			cout<<"\t\t\t\t          Yang Anda Inginkan      "<<endl;
			cout<<"\t\t\t\t      (Dalam Kelipatan Rp.100.000)"<<endl;
			cout<<"\t\t\t\t         Maksimum Rp 2.000.000 "<<endl;
			cout<<"\t\t\t\t   Masukkan Jumlah Penarikan Uang Anda \n\t\t\t\t=>Rp.";cin>>atm.uang;
			if(atm.uang%100000==0&&atm.uang<2000001)
				{
				cout<<"\t\t\t\t   1.Tekan Jika Benar "<<endl;
				cout<<"\t\t\t\t   2.Tekan Untuk Pembatalan"<<endl<<endl;
				cout<<"\t\t\t\t   Masukkan Pilihan Anda = "; cin>>atm.pilih;
				system("cls");
				atm.ulang ="9";
					if(atm.pilih=="1")
					{
						menunggu();
						system("pause");
						system("cls");
						cout<<endl<<endl;
						kepala();
						transaksi(atm.saldo,atm.uang);
						system("pause");
						system("cls");
						atm.ulang ="9";
					}
					else if(atm.pilih=="2")
					{
						system("cls");
						atm.ulang ="9";
					}
				}
			else
			{
				system("cls");
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t   jumlah uang yang anda masukan salah"<<endl;
				cout<<"\t\t\t\t   1.Tekan untuk kembali"<<endl;
				cout<<"\t\t\t\t   2.Tekan untuk keluar"<<endl;
				cout<<"\t\t\t\t   Masukkan Pilihan Anda = "; cin>>atm.pilih;
				system("cls");
				atm.ulang ="9";
					if(atm.pilih=="1")
					{
						system("cls");
						goto penarikan;
					}
					else if(atm.pilih=="2")
					{
						system("cls");
						atm.ulang ="9";
					}
			}
			break;
		case 6:
			menulain:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t  Pilih Transaksi Yang Anda Inginkan"<<endl<<endl;
			cout<<"\t\t\t1 <== Ganti Pin";		cout<<"\t\t\t          Pembayaran ==> 3"<<endl<<endl;
			cout<<"\t\t\t2 <== Transfer";		cout<<"\t\t\t     Informasi Saldo ==> 4"<<endl<<endl;
			cout<<"\t\t\t5 <== Menu Seblumnya";  cout<<"\t\t\t             ==> 6"<<endl<<endl;
			cout<<"\t\t\tMasukkan Pilihan Anda : ";cin>>atm.menu;
			system("cls");
			atm.ulang ="9";
			if(atm.menu=="1")//ganti pin
				{
					menupin:
					cout<<endl<<endl;
					kepala();
					cout<<"\t\t\t\tMasukan pin baru(6 digit) : ";
					cin>>atm.pinbaru;
					system ("cls");
					cout<<endl<<endl;
					kepala();
					cout<<"\t\t\t\tMasukan lagi pin baru anda : ";
					cin>>atm.pinbaru2;
					system("cls");
						if(atm.pinbaru==atm.pinbaru2&&atm.pinbaru>="0"&&atm.pinbaru<="9"&&atm.pinbaru.length()==6)
						{
							atm.pinn=atm.pinbaru2;
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t\t\t  Ganti PIn berhasil "<<endl;
							atm.ulang ="9";
							
						}
						else
						{
							system("cls");
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t\t          pin tidak sesuai atau"<<endl;
							cout<<"\t\t\t\t   jumlah digit yang anda masukan salah"<<endl;
							cout<<"\t\t\t\t   1.Tekan untuk kembali"<<endl;
							cout<<"\t\t\t\t   2.Tekan untuk keluar"<<endl;
							cout<<"\t\t\t\t   Masukkan Pilihan Anda = "; cin>>atm.pilih;
							system("cls");
							atm.ulang ="9";
								if(atm.pilih=="1")
								{
									system("cls");
									goto menupin;
								}
								else if(atm.pilih=="2")
								{
									system("cls");
									atm.ulang ="9";
								}
										
						}
					
				}
			else if(atm.menu=="2")//transfer
			{
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t\t\tTRANSFER"<<endl;
				cout<<endl;
				cout<<"\t\t\t\tPilih Tujuan Transfer Yang Anda Inginkan"<<endl;
				cout<<"\t\t\t\t1. Ke Rekening BNI "<<endl;
				cout<<"\t\t\t\t2. Ke Rek. BANK Lain"<<endl;
				cout<<"\t\t\t\t3. menu sebelumnya"<<endl;
				cout<<"\t\t\t\tMasukkan Pilihan Anda = "; cin>>atm.pilih;
				system("cls");
				atm.ulang ="9";
					if(atm.pilih=="1")
					{   masuknorek:
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t\t Silahkan Masukkan Nomor"<<endl;
						cout<<"\t\t\t\t     Rekening Tujuan Pemindah bukuan"<<endl;
						cout<<"\t\t\t\t\tMasukkan No Rekening Tujuan \n\t\t\t\t=> ";cin>>atm.tujuan;
						cout<<"\t\t\t\t1.Tekan Jika Benar"<<endl;
						cout<<"\t\t\t\t2.Tekan Untuk Pembatalan"<<endl;
						cout<<"\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
						system("cls");
						atm.ulang ="9";
						
							if(atm.pilih=="1")
							{
								if(atm.tujuan=="0123456789")
								{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\tMasukkan Jumlah Uang Yang Akan"<<endl;
								cout<<"\t\t\t\t\t      Dipindah bukukan"<<endl;
								cout<<"\t\t\t\t\t=>Rp."; cin>>atm.jumlah;
								cout<<"\t\t\t\t\t1. Tekan Jika Benar"<<endl;
								cout<<"\t\t\t\t\t2. Tekan untuk pembatalan"<<endl;
								cout<<"\t\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
								system("cls");
								atm.ulang ="9";
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									cout<<"\t\t\t\tAnda akan mentransfer ke Nomer :"<<atm.tujuan<<endl;
									cout<<"\t\t\t\tAtas Nama                      :farisqi "<<endl;
									cout<<"\t\t\t\tsenilai :  Rp "<<atm.jumlah<<endl;
						   			cout<<"\t\t\t\t1. Transfer"<<endl;
		                   			cout<<"\t\t\t\t2. Tekan untuk pembatalan batal"<<endl;
			                		cout<<"\t\t\t\t3. kembali ke menu utama"<<endl;
			                		cout<<"\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
			                		system("cls");
			                		atm.ulang ="9";
			                			if(atm.pilih=="1")
										{
			                				if(atm.jumlah<atm.saldo)
			                				{
			                					menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,300000);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else if(atm.jumlah>atm.saldo)
											{
												cout<<endl<<endl;
												kepala();
												cout<<"\t\t\t\t\tmaaf Saldo anda Tidak cukup"<<endl;
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang ="9";
											}
										}
										else if(atm.pilih=="2")
										{
											system("cls");
											atm.ulang ="9";
										}
										else if(atm.pilih=="3")
										{
											goto menupenarikan;	
										}
										else
										{
										system("cls");
										atm.ulang ="9";
										}
									}
									else if(atm.pilih=="2")
									{
									system("cls");
									atm.ulang ="9";
									}
									else if(atm.pilih=="3")
									{
									system("cls");
									goto menupenarikan;
									}
									else
									{
									system("cls");
									atm.ulang ="9";
									}
							}
							else
							{
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t   mohon maaf nomer rekening yang anda masukan salah\n\t\t\t\ttekan enter untuk melnjutkan"<<endl;
							system("pause");
							system("cls");						
							goto masuknorek;
							}
						}
						else
						{
						system("cls");
						atm.ulang ="9";
						}
					}
					else if(atm.pilih=="2")
					{
					lanjutkan:
					cout<<endl<<endl;
					kepala();
					cout<<"\t\t\t\t1.lanjutkan"<<endl;
					cout<<"\t\t\t\t2.lihat kode bank"<<endl;
					cout<<"\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
					system("cls");
					atm.ulang="9";
					if(atm.pilih=="1")
						{
							masuknorekk:
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t\tMasukkan Kode Bank Dan"<<endl;
						cout<<"\t\t\t\t\tNomor Rekening Tujuan"<<endl;
						cout<<"\t\t\t\t\t(No.Kode BNK Diikuti Oleh"<<endl;
						cout<<"\t\t\t\t   No.Rek.Tujuan, CTH. 0010032732123)"<<endl;
						cout<<"\t\t\t\t=> ";cin>>atm.noreklain;
						cout<<"\t\t\t\t1. Tekan Jika Benar"<<endl;
						cout<<"\t\t\t\t2. Tekan untuk pembatalan"<<endl<<endl;
						cout<<"\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
						system("cls");
						atm.ulang="9";
						
						if(atm.pilih=="1")
						{
							if(atm.tujuan=="00223456789"||atm.tujuan=="00823456789"||atm.tujuan=="44123456789"||atm.tujuan=="01423456789")
							{
								
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\tMasukkan Jumlah Uang Yang Akan"<<endl;
								cout<<"\t\t\t\t\t      Dipindah bukukan"<<endl;
								cout<<"\t\t\t\t\t=>Rp."; cin>>atm.jumlah;
								cout<<"\t\t\t\t\t1. Tekan Jika Benar"<<endl;
								cout<<"\t\t\t\t\t2. Tekan untuk pembatalan"<<endl;
								cout<<"\t\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
								system("cls");
								atm.ulang ="9";
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									cout<<"\t\t\t\tAnda akan mentransfer ke Nomer :"<<atm.noreklain<<endl;
									cout<<"\t\t\t\tAtas Nama                      :aliando "<<endl;
									cout<<"\t\t\t\tsenilai :  Rp "<<atm.jumlah<<endl;
						   			cout<<"\t\t\t\t1. Transfer"<<endl;
		                   			cout<<"\t\t\t\t2. Tekan untuk pembatalan batal"<<endl;
			                		cout<<"\t\t\t\t3. kembali ke menu utama"<<endl;
			                		cout<<"\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
			                		system("cls");
			                		atm.ulang ="9";
			                			if(atm.pilih=="1")
										{
			                				if(atm.jumlah<atm.saldo)
			                				{
			                					menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,300000);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else if(atm.jumlah>atm.saldo)
											{
												cout<<endl<<endl;
												kepala();
												cout<<"\t\t\t\t\tmaaf Saldo anda Tidak cukup"<<endl;
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang ="9";
											}
										}
										else if(atm.pilih=="2")
										{
											system("cls");
											atm.ulang ="9";
										}
										else if(atm.pilih=="3")
										{
											goto menupenarikan;	
										}
										else
										{
										system("cls");
										atm.ulang ="9";
										}
									}
									else if(atm.pilih=="2")
									{
									system("cls");
									atm.ulang ="9";
									}
									else if(atm.pilih=="3")
									{
									system("cls");
									goto menupenarikan;
									}
									else
									{
									system("cls");
									atm.ulang ="9";
									}
								}
								else
								{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t   mohon maaf nomer rekening yang anda masukan salah\n\t\t\t\ttekan enter untuk melnjutkan"<<endl;
								system("pause");
								system("cls");						
								goto masuknorekk;
								}
							}
							else if(atm.pilih=="2")
							{
							system("cls");
							atm.ulang ="9";
							}
						}
						else if(atm.pilih=="2")
						{
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t\t1. 002 = BRI"<<endl;
							cout<<"\t\t\t\t2. 008 = MANDIRI"<<endl;
							cout<<"\t\t\t\t3. 441 = BUKOPIN"<<endl;
							cout<<"\t\t\t\t4. 014 = BCA"<<endl;
							cout<<"\t\t\t\t1.Lanjukan"<<endl;
							cout<<"\t\t\t\t2.keluar"<<endl;
							cout<<"\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
							system("cls");
							if(atm.pilih=="1")
							{
							 goto lanjutkan;
							}
							else
							{
							system("cls");
							atm.ulang ="9";
							}
						}
					}
					else if(atm.pilih=="3")
					{
						system("cls");
						goto menulain;
					}
					else
					{
						system("cls");
						atm.ulang ="9";
					}
						
						
			}
			else if(atm.menu=="3")//pembayaran
			{
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t\t\tPEMBAYARAN"<<endl;
				cout<<"\t\t\t\tPilih Transaksi Yang Anda Inginkan"<<endl;
				cout<<"\t\t\t\t1. Telpon/HP"<<endl;
				cout<<"\t\t\t\t2. Token listrik"<<endl;
				cout<<"\t\t\t\tMasukkan Pilihan Anda = "; cin>>atm.pilih;
				system("cls");
					if(atm.pilih=="1")//pulsa hp
					{
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t\t   Silahkan Pilih Jenis"<<endl;
						cout<<"\t\t\t\t\t     Pembayaran Telpon"<<endl;
						cout<<"\t\t\t\t1. Telkomsel"<<endl;
						cout<<"\t\t\t\t2. XL/AXIS"<<endl;
						cout<<"\t\t\t\tMasukkan Pilihan Anda = "; cin>>atm.pilih;
						system("cls");
							if(atm.pilih=="1")//telkomsel
							{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\t    Silahkan Masukkan"<<endl;
								cout<<"\t\t\t\t      Masukkan nomer Telkomsel Anda"<<endl;
								cout<<"\t\t\t\t      =>";cin>>atm.telkomsel;
								cout<<endl;
								cout<<"\t\t\t\t      1. Tekan Jika Benar"<<endl;
								cout<<"\t\t\t\t      2. Tekan untuk batal"<<endl;
								cout<<"\t\t\t\t      Masukkan Pilihan Anda"; cin>>atm.pilih;
								system("cls");
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									int satu=25000,dua=50000,tiga=100000,admin=2000;
									cout<<"\t\t\t\t  Silahkan Pilih Nominal Pulsa"<<endl;
									cout<<"\t\t\t\t     Voucer Telkomsel Anda"<<endl;
									cout<<"\t\t\t\t Nilai Pulsa Sudah Termasuk PPN"<<endl;
									cout<<"\t\t\t\t 1. Rp.25.000"<<endl;
									cout<<"\t\t\t\t 2. Rp.50.000"<<endl;
									cout<<"\t\t\t\t 3. Rp,100.000"<<endl;
									cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
									system("cls");
										if(atm.pilih=="1")
										{
											cout<<endl<<endl;
											kepala();
											int total=0;
											total+=satu;
											total+=admin;
											cout<<"\t\t\t Nomor      = "<<atm.telkomsel<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<satu<<endl;
											cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
											cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.bayar"<<endl;
											cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
											cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else if(atm.pilih=="2")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=dua;
											total+=admin;
											cout<<"\t\t\t Nomor      = "<<atm.telkomsel<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<dua<<endl;
											cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
											cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.bayar"<<endl;
											cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
											cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										if(atm.pilih=="3")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=tiga;
											total+=admin;
											cout<<"\t\t\t Nomor      = "<<atm.telkomsel<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<tiga<<endl;
											cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
											cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.bayar"<<endl;
											cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
											cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else
										{
											system("cls");
											atm.ulang ="9";
										}			
									}
									else
									{
										system("cls");
										atm.ulang="9";
									}
									
	               			}
	               			else if(atm.pilih=="2")//axis
							{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\t    Silahkan Masukkan"<<endl;
								cout<<"\t\t\t\t      Masukkan nomer axis Anda"<<endl;
								cout<<"\t\t\t\t      =>";cin>>atm.axis;
								cout<<endl;
								cout<<"\t\t\t\t      1. Tekan Jika Benar"<<endl;
								cout<<"\t\t\t\t      2. Tekan untuk batal"<<endl;
								cout<<"\t\t\t\t      Masukkan Pilihan Anda"; cin>>atm.pilih;
								system("cls");
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									int satu=40000,dua=60000,tiga=100000,admin=2000;
									cout<<"\t\t\t\t  Silahkan Pilih Nominal Pulsa"<<endl;
									cout<<"\t\t\t\t     Voucer axis Anda"<<endl;
									cout<<"\t\t\t\t Nilai Pulsa Sudah Termasuk PPN"<<endl;
									cout<<"\t\t\t\t 1. Rp.40.000"<<endl;
									cout<<"\t\t\t\t 2. Rp.60.000"<<endl;
									cout<<"\t\t\t\t 3. Rp,100.000"<<endl;
									cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
									system("cls");
										if(atm.pilih=="1")
										{
											cout<<endl<<endl;
											kepala();
											int total=0;
											total+=satu;
											total+=admin;
											cout<<"\t\t\t Nomor      = "<<atm.axis<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<satu<<endl;
											cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
											cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.bayar"<<endl;
											cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
											cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else if(atm.pilih=="2")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=dua;
											total+=admin;
											cout<<"\t\t\t Nomor      = "<<atm.axis<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<dua<<endl;
											cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
											cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.bayar"<<endl;
											cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
											cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										if(atm.pilih=="3")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=tiga;
											total+=admin;
											cout<<"\t\t\t Nomor      = "<<atm.axis<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<tiga<<endl;
											cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
											cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.bayar"<<endl;
											cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
											cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else
										{
											system("cls");
											atm.ulang ="9";
										}			
									}
									else
									{
										system("cls");
										atm.ulang="9";
									}
							}
							else
							{
								system("cls");
								atm.ulang="9";
							}
					}
					else if(atm.pilih=="2")//token listrik
					{
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t\t    Silahkan Masukkan"<<endl;
						cout<<"\t\t\t\t      Masukkan Nomer Meter Anda"<<endl;
						cout<<"\t\t\t\t      =>";cin>>atm.meter;
						cout<<endl;
						cout<<"\t\t\t\t      1. Tekan Jika Benar"<<endl;
						cout<<"\t\t\t\t      2. Tekan untuk batal"<<endl;
						cout<<"\t\t\t\t      Masukkan Pilihan Anda "; cin>>atm.pilih;
						system("cls");
							if(atm.pilih=="1")
							{
								kepala();
								cout<<"\t\t\t No. Meter = "<<atm.meter<<endl;
								cout<<"\t\t\t Nama      = Taqy Malik"<<endl;
								cout<<"\t\t\t Tarif/Daya= R1 /  1300VA"<<endl;
								cout<<"\t\t\t 1. Pilih Nominal "<<endl;
								cout<<"\t\t\t 2. Untuk Menu Sebelumnya"<<endl;
								cout<<"\t\t\t  Masukkan Pilihan Anda "; cin>>atm.pilih;
								system("cls");
								if(atm.pilih=="1")
								{
									cout<<endl<<endl;
									kepala();
									int satu=25000,dua=50000,tiga=100000,admin=3000;
									cout<<"\t\t\t\t  Silahkan Pilih Nominal Token"<<endl;
									cout<<"\t\t\t\t     Yang Anda Inginkan"<<endl;
									cout<<"\t\t\t\t Nilai Pulsa Sudah Termasuk PPN"<<endl;
									cout<<"\t\t\t\t 1. Rp.25.000"<<endl;
									cout<<"\t\t\t\t 2. Rp.50.000"<<endl;
									cout<<"\t\t\t\t 3. Rp,100.000"<<endl;
									cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
									system("cls");
									if(atm.pilih=="1")
									{
										cout<<endl<<endl;
										kepala();
										int total=0;
										total+=satu;
										total+=admin;
										cout<<"\t\t\t No. Meter  = "<<atm.meter<<endl;
										cout<<"\t\t\t Nama       = Taqy Malik"<<endl;
										cout<<"\t\t\t Tarif/Daya = R1 /  1300VA"<<endl;
										cout<<"\t\t\t Nominal    = Rp. "<<satu<<endl;
										cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
										cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
										cout<<"\t\t\t\t 1.bayar"<<endl;
										cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
										cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
										system("cls");
										if(atm.pilih=="1")
										{
											menunggu();
											system("pause");
											system("cls");
											cout<<endl<<endl;
											kepala();
											transaksi(atm.saldo,total);
											system("pause");
											system("cls");
											atm.ulang ="9";
										}
										else
										{
											system("cls");
											atm.ulang="9";
										}				
									}
									else if(atm.pilih=="2")
									{
										cout<<endl<<endl;
										kepala();
										int total=0;
										total+=dua;
										total+=admin;
										cout<<"\t\t\t No. Meter  = "<<atm.meter<<endl;
										cout<<"\t\t\t Nama       = Taqy Malik"<<endl;
										cout<<"\t\t\t Tarif/Daya = R1 /  1300VA"<<endl;
										cout<<"\t\t\t Nominal    = Rp. "<<dua<<endl;
										cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
										cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
										cout<<"\t\t\t\t 1.bayar"<<endl;
										cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
										cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
										system("cls");
										if(atm.pilih=="1")
										{
											menunggu();
											system("pause");
											system("cls");
											cout<<endl<<endl;
											kepala();
											transaksi(atm.saldo,total);
											system("pause");
											system("cls");
											atm.ulang ="9";
										}
										else
										{
											system("cls");
											atm.ulang="9";
										}				
									}
									if(atm.pilih=="3")
									{
										cout<<endl<<endl;
										kepala();
										int total=0;
										total+=tiga;
										total+=admin;
										cout<<"\t\t\t No. Meter  = "<<atm.meter<<endl;
										cout<<"\t\t\t Nama       = Taqy Malik"<<endl;
										cout<<"\t\t\t Tarif/Daya = R1 /  1300VA"<<endl;
										cout<<"\t\t\t Nominal    = Rp. "<<tiga<<endl;
										cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
										cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
										cout<<"\t\t\t\t 1.bayar"<<endl;
										cout<<"\t\t\t\t 2.tekan untuk batal"<<endl;
										cout<<"\t\t\t\t Masukkan Pilihan Anda = "; cin>>atm.pilih;
										system("cls");
										if(atm.pilih=="1")
										{
											menunggu();
											system("pause");
											system("cls");
											cout<<endl<<endl;
											kepala();
											transaksi(atm.saldo,total);
											system("pause");
											system("cls");
											atm.ulang ="9";
										}
										else
										{
											system("cls");
											atm.ulang="9";
										}				
									}
									else
									{
									system("cls");
									atm.ulang="9";
									}		
								}
								else
								{
								cout<<"Terima Kasih telah melakukan transaksi di atm BNI"<<endl;
								system("cls");
								}	
							}
							else
							{
							system("cls");
							atm.ulang="9";
							}
					}
					else
					{
						system("cls");
						atm.ulang="9";
					}
	
			}
			else if(atm.menu=="4")//cek saldo
			{
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t\tSisa saldo anda = Rp. "<<atm.saldo<<endl;
				cout<<"\t\t\t\t1.kembali ke menu utama"<<endl;
				cout<<"\t\t\t\t2.keluar"<<endl;
				cout<<"\t\t\t\tMasukkan Pilihan Anda = ";cin>>atm.pilih;
				system("cls");
				if(atm.pilih=="1")
				{
					goto menupenarikan;
				}
				else
				{
					system("cls");
					atm.ulang ="9";
				}
			}
			else if(atm.menu=="5")
			{
				goto menupenarikan;
			}
			break;
		}
}

void menuutama2()
{
		menupenarikan:
		cout<<endl;
		cout<<"\t\t\t                        Quick draw"<<endl;
		cout<<"\t\t\t            please select the witdrawal number"<<endl;
		cout<<"\t\t\t=========================================================="<<endl;
		cout<<"\t\t\t1 <== Rp.300.000                        Rp.1.200.000 ==> 4"<<endl<<endl;	
		cout<<"\t\t\t2 <== Rp.500.000                  another withdrawal ==> 5"<<endl<<endl;
		cout<<"\t\t\t3 <== Rp.1.000.000                      another menu ==> 6"<<endl<<endl;
		cout<<"\t\t\tEnter your choice = "; cin>>atm.pilihh;
		system("cls");
		switch(atm.pilihh)
		{
		case 1:
			cout<<endl<<endl;;
			kepala();
			cout<<"\t\t\t\t\t  1. Saving Account"<<endl;
			cout<<"\t\t\t\t\t  2. previous menu"<<endl<<endl;
			cout<<"\t\t\t\t\t  Enter your choice = "; cin>>atm.pilih;
			system("cls");
			if(atm.pilih=="1")
			{
				menunggu2();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi2(atm.saldo,300000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
				atm.ulang ="9";
			}
			else
			{
				system("cls");
				atm.ulang ="9";
			}
			break;
		case 2:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t\t  1. Saving Account"<<endl;
			cout<<"\t\t\t\t\t  2. previous menu"<<endl<<endl;
			cout<<"\t\t\t\t\t  Enter your choice = "; cin>>atm.pilih;
			system("cls");
			if(atm.pilih=="1")
			{
				menunggu2();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi2(atm.saldo,500000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
			}
			else
			{
				system("cls");
				atm.ulang ="9";
			}
			break;
		case 3:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t\t  1. Saving Account"<<endl;
			cout<<"\t\t\t\t\t  2. previous menu"<<endl<<endl;
			cout<<"\t\t\t\t\t  Enter your choice = "; cin>>atm.pilih;
			system("cls");
			if(atm.pilih=="1")
			{
				menunggu2();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi2(atm.saldo,1000000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
			}
			else
			{
				system("cls");
			}
			break;
		case 4:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t\t  1. Saving Account"<<endl;
			cout<<"\t\t\t\t\t  2. previous menu"<<endl<<endl;
			cout<<"\t\t\t\t\t  Enter your choice = "; cin>>atm.pilih;
			system("cls");
		if(atm.pilih=="1")
			{
				menunggu2();
				system("pause");
				system("cls");
				cout<<endl<<endl;
				kepala();
				transaksi2(atm.saldo,1200000);
				system("pause");
				system("cls");
				atm.ulang ="9";
			}
			else if(atm.pilih=="2")
			{
				system("cls");
				goto menupenarikan;
			}
			else
			{
				system("cls");
				atm.ulang ="9";
			}
			break;
		case 5:
			penarikan:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t    Enter the amaount of cash withdrawal"<<endl;
			cout<<"\t\t\t\t                 you want"<<endl;
			cout<<"\t\t\t\t        (in multiples Rp.100.000)"<<endl;
			cout<<"\t\t\t\t           Maximum Rp 2.000.000 "<<endl;
			cout<<"\t\t\t\tEnter the amaount of withdrawal of your money\n\t\t\t\t=>Rp.";cin>>atm.uang;
			if(atm.uang%100000==0&&atm.uang<2000001)
				{
				cout<<"\t\t\t\t   1.press if correct "<<endl;
				cout<<"\t\t\t\t   2.press to cancel and exit"<<endl<<endl;
				cout<<"\t\t\t\t   Enter your choice = "; cin>>atm.pilih;
				system("cls");
				atm.ulang ="9";
					if(atm.pilih=="1")
					{
						menunggu2();
						system("pause");
						system("cls");
						cout<<endl<<endl;
						kepala();
						transaksi2(atm.saldo,atm.uang);
						system("pause");
						system("cls");
						atm.ulang ="9";
					}
					else if(atm.pilih=="2")
					{
						system("cls");
						atm.ulang ="9";
					}
				}
			else
			{
				system("cls");
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t   the amoaunt of money you input is wrong"<<endl;
				cout<<"\t\t\t\t   1.press to return"<<endl;
				cout<<"\t\t\t\t   2.press to exit"<<endl;
				cout<<"\t\t\t\t   Enter your choice = "; cin>>atm.pilih;
				system("cls");
				atm.ulang ="9";
					if(atm.pilih=="1")
					{
						system("cls");
						goto penarikan;
					}
					else if(atm.pilih=="2")
					{
						system("cls");
						atm.ulang ="9";
					}
			}
			break;
		case 6:
			menulain:
			cout<<endl<<endl;
			kepala();
			cout<<"\t\t\t\t           select the transaction"<<endl<<endl;
			cout<<"\t\t\t1 <== Replace the PIN                        Payment ==> 3"<<endl<<endl;
			cout<<"\t\t\t2 <== Transfer                   Balance information ==> 4"<<endl<<endl;
			cout<<"\t\t\t5 <== previous menu                                  ==> 6"<<endl<<endl;
			cout<<"\t\t\tEnter your choice = ";cin>>atm.menu;
			system("cls");
			atm.ulang ="9";
			if(atm.menu=="1")//ganti pin
				{
					menupin:
					cout<<endl<<endl;
					kepala();
					cout<<"\t\t\t\tNew Pin Input(6 digit) : ";
					cin>>atm.pinbaru;
					system ("cls");
					cout<<endl<<endl;
					kepala();
					cout<<"\t\t\t\tNew input pin  : ";
					cin>>atm.pinbaru2;
					system("cls");
						if(atm.pinbaru==atm.pinbaru2&&atm.pinbaru>="0"&&atm.pinbaru<="9"&&atm.pinbaru.length()==6)
						{
							atm.pinn=atm.pinbaru2;
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t\t    Replace the PIN successfully "<<endl;
							atm.ulang ="9";
							
						}
						else
						{
							system("cls");
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t\t        the pin does not match or the"<<endl;
							cout<<"\t\t\t\t   number of digits you entered is incorrect"<<endl;
							cout<<"\t\t\t\t   1.press to return"<<endl;
							cout<<"\t\t\t\t   2.press to exit"<<endl;
							cout<<"\t\t\t\t   Enter your choice = "; cin>>atm.pilih;
							system("cls");
							atm.ulang ="9";
								if(atm.pilih=="1")
								{
									system("cls");
									goto menupin;
								}
								else if(atm.pilih=="2")
								{
									system("cls");
									atm.ulang ="9";
								}
										
						}
					
				}
			else if(atm.menu=="2")//transfer
			{
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t\t\tTRANSFER"<<endl;
				cout<<endl;
				cout<<"\t\t\t\tselect the transfer destinarion "<<endl;
				cout<<"\t\t\t\t1. to BNI account "<<endl;
				cout<<"\t\t\t\t2. to anhoter bank"<<endl;
				cout<<"\t\t\t\t3. previous menu"<<endl;
				cout<<"\t\t\t\tEnter your choice = "; cin>>atm.pilih;
				system("cls");
				atm.ulang ="9";
					if(atm.pilih=="1")
					{   masuknorek:
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t    please enter the  account number"<<endl;
						cout<<"\t\t\t\t            for the transfer"<<endl;
						cout<<"\t\t\t\tplease  enter the account number \n\t\t\t\t=> ";cin>>atm.tujuan;
						cout<<"\t\t\t\t1.press if correct"<<endl;
						cout<<"\t\t\t\t2.press to exit"<<endl;
						cout<<"\t\t\t\tEnter your choice = ";cin>>atm.pilih;
						system("cls");
						atm.ulang ="9";
						
							if(atm.pilih=="1")
							{
								if(atm.tujuan=="0123456789")
								{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\tenter the amount of money that"<<endl;
								cout<<"\t\t\t\t\t     will be transferred"<<endl;
								cout<<"\t\t\t\t\t=>Rp."; cin>>atm.jumlah;
								cout<<"\t\t\t\t\t1. press if correct"<<endl;
								cout<<"\t\t\t\t\t2. press to exit"<<endl;
								cout<<"\t\t\t\t\tEnter your choice = ";cin>>atm.pilih;
								system("cls");
								atm.ulang ="9";
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									cout<<"\t\t\t\tYou will transfer to the number :"<<atm.tujuan<<endl;
									cout<<"\t\t\t\ton behalf of                    :farisqi "<<endl;
									cout<<"\t\t\t\tsenilai :  Rp "<<atm.jumlah<<endl;
						   			cout<<"\t\t\t\t1. Transfer"<<endl;
		                   			cout<<"\t\t\t\t2. press to exit"<<endl;
			                		cout<<"\t\t\t\t3. return to the main menu"<<endl;
			                		cout<<"\t\t\t\tEnter your choice = ";cin>>atm.pilih;
			                		system("cls");
			                		atm.ulang ="9";
			                			if(atm.pilih=="1")
										{
			                				if(atm.jumlah<atm.saldo)
			                				{
			                					menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,300000);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else if(atm.jumlah>atm.saldo)
											{
												cout<<endl<<endl;
												kepala();
												cout<<"\t\t\t\tsorry,your balance not enough"<<endl;
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang ="9";
											}
										}
										else if(atm.pilih=="2")
										{
											system("cls");
											atm.ulang ="9";
										}
										else if(atm.pilih=="3")
										{
											goto menupenarikan;	
										}
										else
										{
										system("cls");
										atm.ulang ="9";
										}
									}
									else if(atm.pilih=="2")
									{
									system("cls");
									atm.ulang ="9";
									}
									else if(atm.pilih=="3")
									{
									system("cls");
									goto menupenarikan;
									}
									else
									{
									system("cls");
									atm.ulang ="9";
									}
							}
							else
							{
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t     sorrrr,the account number you enterred is incorrect\n\t\t\t\t\t  press to continue"<<endl;
							system("pause");
							system("cls");						
							goto masuknorek;
							}
						}
						else
						{
						system("cls");
						atm.ulang ="9";
						}
					}
					else if(atm.pilih=="2")
					{
					lanjutkan:
					cout<<endl<<endl;
					kepala();
					cout<<"\t\t\t\t1.continue"<<endl;
					cout<<"\t\t\t\t2.see bank code"<<endl;
					cout<<"\t\t\t\tEnter your choice = ";cin>>atm.pilih;
					system("cls");
					atm.ulang="9";
					if(atm.pilih=="1")
						{
							masuknorekk:
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t\t enter the bank code and"<<endl;
						cout<<"\t\t\t\t\tdestination account number"<<endl;
						cout<<"\t\t\t\t\t(BNK code following by the"<<endl;
						cout<<"\t\t\t\tdestination account nnmber,ex.0010032732123)"<<endl;
						cout<<"\t\t\t\t=> ";cin>>atm.noreklain;
						cout<<"\t\t\t\t1. press if correct"<<endl;
						cout<<"\t\t\t\t2. press to exit"<<endl<<endl;
						cout<<"\t\t\t\tEnter your choice = ";cin>>atm.pilih;
						system("cls");
						atm.ulang="9";
						
						if(atm.pilih=="1")
						{
							if(atm.tujuan=="00223456789"||atm.tujuan=="00823456789"||atm.tujuan=="44123456789"||atm.tujuan=="01423456789")
							{
								
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\tenter the amount of money that"<<endl;
								cout<<"\t\t\t\t\t     will be transferred"<<endl;
								cout<<"\t\t\t\t\t=>Rp."; cin>>atm.jumlah;
								cout<<"\t\t\t\t\t1. press if correct"<<endl;
								cout<<"\t\t\t\t\t2. press to exit"<<endl;
								cout<<"\t\t\t\t\tEnter your choice = ";cin>>atm.pilih;
								system("cls");
								atm.ulang ="9";
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									cout<<"\t\t\t\tYou will transfer to the number:"<<atm.noreklain<<endl;
									cout<<"\t\t\t\ton behalf of                    :aliando "<<endl;
									cout<<"\t\t\t\tsenilai :  Rp "<<atm.jumlah<<endl;
						   			cout<<"\t\t\t\t1. Transfer"<<endl;
		                   			cout<<"\t\t\t\t2. press to exit"<<endl;
			                		cout<<"\t\t\t\t3. return to the main menu"<<endl;
			                		cout<<"\t\t\t\tEnter your choice = ";cin>>atm.pilih;
			                		system("cls");
			                		atm.ulang ="9";
			                			if(atm.pilih=="1")
										{
			                				if(atm.jumlah<atm.saldo)
			                				{
			                					menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,300000);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else if(atm.jumlah>atm.saldo)
											{
												cout<<endl<<endl;
												kepala();
												cout<<"\t\t\t\t\tsorry,your balance not enough"<<endl;
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang ="9";
											}
										}
										else if(atm.pilih=="2")
										{
											system("cls");
											atm.ulang ="9";
										}
										else if(atm.pilih=="3")
										{
											goto menupenarikan;	
										}
										else
										{
										system("cls");
										atm.ulang ="9";
										}
									}
									else if(atm.pilih=="2")
									{
									system("cls");
									atm.ulang ="9";
									}
									else if(atm.pilih=="3")
									{
									system("cls");
									goto menupenarikan;
									}
									else
									{
									system("cls");
									atm.ulang ="9";
									}
								}
								else
								{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t     sorrrr,the account number you enterred is incorrect\n\t\t\t\t\t  press to continue"<<endl;
								system("pause");
								system("cls");						
								goto masuknorekk;
								}
							}
							else if(atm.pilih=="2")
							{
							system("cls");
							atm.ulang ="9";
							}
						}
						else if(atm.pilih=="2")
						{
							cout<<endl<<endl;
							kepala();
							cout<<"\t\t\t\t1. 002 = BRI"<<endl;
							cout<<"\t\t\t\t2. 008 = MANDIRI"<<endl;
							cout<<"\t\t\t\t3. 441 = BUKOPIN"<<endl;
							cout<<"\t\t\t\t4. 014 = BCA"<<endl;
							cout<<"\t\t\t\t1.continue"<<endl;
							cout<<"\t\t\t\t2.exit"<<endl;
							cout<<"\t\t\t\tEnter your choice = ";cin>>atm.pilih;
							system("cls");
							if(atm.pilih=="1")
							{
							 goto lanjutkan;
							}
							else
							{
							system("cls");
							atm.ulang ="9";
							}
						}
					}
					else if(atm.pilih=="3")
					{
						system("cls");
						goto menulain;
					}
					else
					{
						system("cls");
						atm.ulang ="9";
					}
						
						
			}
			else if(atm.menu=="3")//pembayaran
			{
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t\t\t PAYMENT"<<endl;
				cout<<"\t\t\t\tselect transaction"<<endl;
				cout<<"\t\t\t\t1. telephone/HP"<<endl;
				cout<<"\t\t\t\t2. electric tokens"<<endl;
				cout<<"\t\t\t\tEnter your choice = "; cin>>atm.pilih;
				system("cls");
					if(atm.pilih=="1")//pulsa hp
					{
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t\t   please select the type"<<endl;
						cout<<"\t\t\t\t\t    of telephone payment"<<endl;
						cout<<"\t\t\t\t1. Telkomsel"<<endl;
						cout<<"\t\t\t\t2. XL/AXIS"<<endl;
						cout<<"\t\t\t\tEnter your choice = "; cin>>atm.pilih;
						system("cls");
							if(atm.pilih=="1")//telkomsel
							{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\t    please enter"<<endl;
								cout<<"\t\t\t\t        your telkomsel number"<<endl;
								cout<<"\t\t\t\t      =>";cin>>atm.telkomsel;
								cout<<endl;
								cout<<"\t\t\t\t      1. press if correct"<<endl;
								cout<<"\t\t\t\t      2.press to exit"<<endl;
								cout<<"\t\t\t\t      Enter your choice"; cin>>atm.pilih;
								system("cls");
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									int satu=25000,dua=50000,tiga=100000,admin=2000;
									cout<<"\t\t\t\t  please select nominal credit"<<endl;
									cout<<"\t\t\t\t     your telkomsel voucher"<<endl;
									cout<<"\t\t\t\t the price includes tax"<<endl;
									cout<<"\t\t\t\t 1. Rp.25.000"<<endl;
									cout<<"\t\t\t\t 2. Rp.50.000"<<endl;
									cout<<"\t\t\t\t 3. Rp.100.000"<<endl;
									cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
									system("cls");
										if(atm.pilih=="1")
										{
											cout<<endl<<endl;
											kepala();
											int total=0;
											total+=satu;
											total+=admin;
											cout<<"\t\t\t number     = "<<atm.telkomsel<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<satu<<endl;
											cout<<"\t\t\t Bank Admin = Rp. "<<admin<<endl;
											cout<<"\t\t\t in total   = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.pay"<<endl;
											cout<<"\t\t\t\t 2.press to exit"<<endl;
											cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else if(atm.pilih=="2")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=dua;
											total+=admin;
											cout<<"\t\t\t Number      = "<<atm.telkomsel<<endl;
											cout<<"\t\t\t Nominal     = Rp. "<<dua<<endl;
											cout<<"\t\t\t Bank admin  = Rp. "<<admin<<endl;
											cout<<"\t\t\t in total    = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.pay"<<endl;
											cout<<"\t\t\t\t 2.press to exit"<<endl;
											cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										if(atm.pilih=="3")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=tiga;
											total+=admin;
											cout<<"\t\t\t Number     = "<<atm.telkomsel<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<tiga<<endl;
											cout<<"\t\t\t Bank Admin = Rp. "<<admin<<endl;
											cout<<"\t\t\t in total   = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.pay"<<endl;
											cout<<"\t\t\t\t 2.press to exit"<<endl;
											cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else
										{
											system("cls");
											atm.ulang ="9";
										}			
									}
									else
									{
										system("cls");
										atm.ulang="9";
									}
									
	               			}
	               			else if(atm.pilih=="2")//axis
							{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\t\t\t      please enter"<<endl;
								cout<<"\t\t\t\t         your axis number"<<endl;
								cout<<"\t\t\t\t      =>";cin>>atm.axis;
								cout<<endl;
								cout<<"\t\t\t\t      1. press if correct"<<endl;
								cout<<"\t\t\t\t      2. press to exit"<<endl;
								cout<<"\t\t\t\t      Enter your choice"; cin>>atm.pilih;
								system("cls");
									if(atm.pilih=="1")
									{
									cout<<endl<<endl;
									kepala();
									int satu=40000,dua=60000,tiga=100000,admin=2000;
									cout<<"\t\t\t\t  please select nominal credit"<<endl;
									cout<<"\t\t\t\t     your telkomsel voucher"<<endl;
									cout<<"\t\t\t\t the price includes tax"<<endl;
									cout<<"\t\t\t\t 1. Rp.40.000"<<endl;
									cout<<"\t\t\t\t 2. Rp.60.000"<<endl;
									cout<<"\t\t\t\t 3. Rp,100.000"<<endl;
									cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
									system("cls");
										if(atm.pilih=="1")
										{
											cout<<endl<<endl;
											kepala();
											int total=0;
											total+=satu;
											total+=admin;
											cout<<"\t\t\t number     = "<<atm.axis<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<satu<<endl;
											cout<<"\t\t\t Bank Admin = Rp. "<<admin<<endl;
											cout<<"\t\t\t in total   = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.pay"<<endl;
											cout<<"\t\t\t\t 2.press to exit"<<endl;
											cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else if(atm.pilih=="2")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=dua;
											total+=admin;
											cout<<"\t\t\t number     = "<<atm.axis<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<dua<<endl;
											cout<<"\t\t\t Bank Admin = Rp. "<<admin<<endl;
											cout<<"\t\t\t in total   = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.pay"<<endl;
											cout<<"\t\t\t\t 2.press to exit"<<endl;
											cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										if(atm.pilih=="3")
										{	cout<<endl<<endl;
											kepala();
											int total=0;
											total+=tiga;
											total+=admin;
											cout<<"\t\t\t number     = "<<atm.axis<<endl;
											cout<<"\t\t\t Nominal    = Rp. "<<tiga<<endl;
											cout<<"\t\t\t Bank Admin = Rp. "<<admin<<endl;
											cout<<"\t\t\t in total   = Rp. "<<total<<endl<<endl;
											cout<<"\t\t\t\t 1.pay"<<endl;
											cout<<"\t\t\t\t 2.press to exit"<<endl;
											cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
											system("cls");
											if(atm.pilih=="1")
											{
												menunggu2();
												system("pause");
												system("cls");
												cout<<endl<<endl;
												kepala();
												transaksi2(atm.saldo,total);
												system("pause");
												system("cls");
												atm.ulang ="9";
											}
											else
											{
												system("cls");
												atm.ulang="9";
											}											
										}
										else
										{
											system("cls");
											atm.ulang ="9";
										}			
									}
									else
									{
										system("cls");
										atm.ulang="9";
									}
							}
							else
							{
								system("cls");
								atm.ulang="9";
							}
					}
					else if(atm.pilih=="2")//token listrik
					{
						cout<<endl<<endl;
						kepala();
						cout<<"\t\t\t\t      please input"<<endl;
						cout<<"\t\t\t\t      you meter number"<<endl;
						cout<<"\t\t\t\t      =>";cin>>atm.meter;
						cout<<endl;
						cout<<"\t\t\t\t      1. press if incoret"<<endl;
						cout<<"\t\t\t\t      2. press to cancel"<<endl;
						cout<<"\t\t\t\t      Enter your choice = "; cin>>atm.pilih;
						system("cls");
							if(atm.pilih=="1")
							{
								kepala();
								cout<<"\t\t\t No. Meter   = "<<atm.meter<<endl;
								cout<<"\t\t\t Name        = Taqy Malik"<<endl;
								cout<<"\t\t\t Tariff/power= R1 /  1300VA"<<endl;
								cout<<"\t\t\t 1. Choose nominal "<<endl;
								cout<<"\t\t\t 2. press to return"<<endl;
								cout<<"\t\t\t  Enter your choice = "; cin>>atm.pilih;
								system("cls");
								if(atm.pilih=="1")
								{
									cout<<endl<<endl;
									kepala();
									int satu=25000,dua=50000,tiga=100000,admin=3000;
									cout<<"\t\t\t\t Please choose the price token"<<endl;
									cout<<"\t\t\t\t          you want"<<endl;
									cout<<"\t\t\t\t   the price includes tax"<<endl;
									cout<<"\t\t\t\t 1. Rp.25.000"<<endl;
									cout<<"\t\t\t\t 2. Rp.50.000"<<endl;
									cout<<"\t\t\t\t 3. Rp,100.000"<<endl;
									cout<<"\t\t\t\t Enter your choice ="; cin>>atm.pilih;
									system("cls");
									if(atm.pilih=="1")
									{
										cout<<endl<<endl;
										kepala();
										int total=0;
										total+=satu;
										total+=admin;
										cout<<"\t\t\t No. Meter    = "<<atm.meter<<endl;
										cout<<"\t\t\t Name         = Taqy Malik"<<endl;
										cout<<"\t\t\t Tariff/power = R1 /  1300VA"<<endl;
										cout<<"\t\t\t price        = Rp. "<<satu<<endl;
										cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
										cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
										cout<<"\t\t\t\t 1.pay"<<endl;
										cout<<"\t\t\t\t 2.press to cancel"<<endl;
										cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
										system("cls");
										if(atm.pilih=="1")
										{
											menunggu();
											system("pause");
											system("cls");
											cout<<endl<<endl;
											kepala();
											transaksi(atm.saldo,total);
											system("pause");
											system("cls");
											atm.ulang ="9";
										}
										else
										{
											system("cls");
											atm.ulang="9";
										}				
									}
									else if(atm.pilih=="2")
									{
										cout<<endl<<endl;
										kepala();
										int total=0;
										total+=dua;
										total+=admin;
										cout<<"\t\t\t No. Meter    = "<<atm.meter<<endl;
										cout<<"\t\t\t Name         = Taqy Malik"<<endl;
										cout<<"\t\t\t Tariff/power = R1 /  1300VA"<<endl;
										cout<<"\t\t\t Price        = Rp. "<<dua<<endl;
										cout<<"\t\t\t Admin Bank   = Rp. "<<admin<<endl;
										cout<<"\t\t\t total        = Rp. "<<total<<endl<<endl;
										cout<<"\t\t\t\t 1.pay"<<endl;
										cout<<"\t\t\t\t 2. press to cancel"<<endl;
										cout<<"\t\t\t\t Enter your choice = "; cin>>atm.pilih;
										system("cls");
										if(atm.pilih=="1")
										{
											menunggu();
											system("pause");
											system("cls");
											cout<<endl<<endl;
											kepala();
											transaksi(atm.saldo,total);
											system("pause");
											system("cls");
											atm.ulang ="9";
										}
										else
										{
											system("cls");
											atm.ulang="9";
										}				
									}
									if(atm.pilih=="3")
									{
										cout<<endl<<endl;
										kepala();
										int total=0;
										total+=tiga;
										total+=admin;
										cout<<"\t\t\t No. Meter    = "<<atm.meter<<endl;
										cout<<"\t\t\t Name         = Taqy Malik"<<endl;
										cout<<"\t\t\t Tariff/power = R1 /  1300VA"<<endl;
										cout<<"\t\t\t price        = Rp. "<<tiga<<endl;
										cout<<"\t\t\t Admin Bank = Rp. "<<admin<<endl;
										cout<<"\t\t\t total      = Rp. "<<total<<endl<<endl;
										cout<<"\t\t\t\t 1.pay"<<endl;
										cout<<"\t\t\t\t 2. press to cancel"<<endl;
										cout<<"\t\t\t\t Enter your choice ="; cin>>atm.pilih;
										system("cls");
										if(atm.pilih=="1")
										{
											menunggu();
											system("pause");
											system("cls");
											cout<<endl<<endl;
											kepala();
											transaksi(atm.saldo,total);
											system("pause");
											system("cls");
											atm.ulang ="9";
										}
										else
										{
											system("cls");
											atm.ulang="9";
										}				
									}
									else
									{
									system("cls");
									atm.ulang="9";
									}		
								}
								else
								{
								cout<<endl<<endl;
								kepala();
								cout<<"\t\t\tThank you for making a deal at the BNI ATM"<<endl;
								system("cls");
								}	
							}
							else
							{
							system("cls");
							atm.ulang="9";
							}
					}
					else
					{
						system("cls");
						atm.ulang="9";
					}
	
			}
			else if(atm.menu=="4")//cek saldo
			{
				cout<<endl<<endl;
				kepala();
				cout<<"\t\t\t\t\tyour balance  = Rp. "<<atm.saldo<<endl;
				cout<<"\t\t\t\t1.return to main menu"<<endl;
				cout<<"\t\t\t\t2.press to exit"<<endl;
				cout<<"\t\t\t\tEnter your choice = ";cin>>atm.pilih;
				system("cls");
				if(atm.pilih=="1")
				{
					goto menupenarikan;
				}
				else
				{
					system("cls");
					atm.ulang ="9";
				}
			}
			else if(atm.menu=="5")
			{
				goto menupenarikan;
			}
			break;
		}
}
void masukpin()
{
	int i=0;
	do
	{
		cout<<endl<<endl;
		cout <<"\t\t\t\t\t\t masukan pin anda \n\t\t\t\t\t\t => ";cin>>atm.pin;
		system("cls");
			if(atm.pin==atm.pinn&&i<3)
			{
			menuutama();
			aksesout();
			}
			else if(i<2)
			{
				cout<<endl<<endl;
					cout<<"\t\t\t\t\t     Maaf PASWORD anda salah !"<<endl;
				i=i+1;
			}
			else
			{
			cout<<"\t\t\t\t     Anda telah 3x Salah dalam memasukan PIN"<<endl;
			cout<<"\t\t\t\t  akun anda kami blokir, segera hubungi CS kami";
			system("pause");
			system("cls");
			atm.ulang="9";
			}
	}
	while( atm.ulang !="9");
	
}
void masukpin2()
{
	int i=0;
	do
	{
		cout<<endl<<endl;
		cout <<"\t\t\t\t\t\t enter your pin \n\t\t\t\t\t\t => ";cin>>atm.pin;
		system("cls");
			if(atm.pin==atm.pinn&&i<3)
			{
			menuutama2();
			aksesout();
			}
			else if(i<2)
			{
				cout<<endl<<endl;
					cout<<"\t\t\t\t\t     your pasword is incorrect !"<<endl;
				i=i+1;
			}
			else
			{
			cout<<"\t\t\t\t    You've been three times wrong in loading the pin "<<endl;
			cout<<"\t\t\t\t  your acount is blocked,please contact us immediately"<<endl;
			system("pause");
			system("cls");
			atm.ulang="9";
			}
	}
	while( atm.ulang !="9");
	
}
void bahasa()
{
	awal();
	cout<<endl;
	cout<<"\t\t\tPilih Bahasa / Choose Language "<<endl<<endl;
	cout<<"\t\t\t1. Indonesia "<<endl;
	cout<<"\t\t\t2. english "<<endl<<endl;
	cout<<"\t\t\tMasukkan Pilihan Anda/ Enter Your Choice = "; cin>>atm.pilih;
	system("cls");
	if(atm.pilih=="1")
	{
	masukpin();
	}	
	else if (atm.pilih=="2")
	{
	masukpin2();
	}
}
void login()
{
	aksesfile();
	login:
	cout<<endl<<endl;
	cout<<"\t\t\t\tMasukan Nomer rekening anda "<<endl;
	cout<<"\t\t\t\t(Enter your acount number)"<<endl;
	cout<<"\t\t\t\t\t=>";cin>>atm.norek;
	system("cls");
	if(atm.norek==atm.norekk)
	{
		bahasa();
	}
	else
	{
		cout<<endl<<endl;
		cout<<"\t\t\t\tMohon Maaf Nomer rekening anda salah"<<endl;
		cout<<"\t\t\t\t    (Your acount number is wrong)"<<endl<<endl;
		cout<<"\t\t\t1.masukan nomer rekening lagi(enter your acount number again)"<<endl;
		cout<<"\t\t\t2.keluar(exit)"<<endl<<endl;
		cout<<"\t\t\t\tMasukan pilihan anda(put your choice) : ";cin>>atm.pilih;
		if(atm.pilih=="1")
		{
			system("cls");
			goto login;
		}
		else
		{
			system("cls");
		}
	}
	
}
int main()
{

	login();
}
