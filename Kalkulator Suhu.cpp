//Konversi Suhu
#include <iostream>
#include <conio.h>
#include <windows.h>

using namespace std;

struct celcius{
	int cel;
	float suhu, cel_re, cel_fah, cel_kel;
}cel[5];

struct fahrenheit{
	int fah;
	float suhu, fah_cel, fah_re, fah_kel;
}fah[5];

struct reamur{
	int re;
	float suhu, re_cel, re_fah, re_kel;
}re[5];


struct kelvin{
	int kel;
	float suhu, kel_cel, kel_fah, kel_re;
}kel[5];

struct mahasiswa{
	char nama[30], nim[10], jurusan[3];	
	}mhs[3];
	
int main(){
	char celcius[4][15]= {"h","Fahrenheit",  "Reamur", "Kelvin"};
	char fahrenheit[4][15]= {"h","Celcius",  "Reamur", "Kelvin"};
	char reamur[4][15]= {"h","Celcius", "Fahrenheit", "Kelvin"};
	char kelvin[4][15]= {"h","Celcius", "Fahrenheit",  "Reamur"};
	int n;
	int pil, jwb, x, jml;
	
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t\tKalkulator Konversi Suhu"<<endl;
	cout<<"-------------------------------------------------------------------------------";
	
	cout<<endl;
	cout<<endl;
	
	cout<<"\t\t\tNama\t: ";
	gets(mhs[3].nama);
	cout<<"\t\t\tNIM\t: ";
	cin>>mhs[3].nim;
	cout<<"\t\t\tJurusan\t: ";
	cin>>mhs[3].jurusan;
	
	cout<<endl;
	cout<<endl;
	
	cout<<"-------------------------------------------------------------------------------"<<endl;
	cout<<"\t\t\t       SELAMAT DATANG "<<mhs[3].nama<<"!"<<endl;
	cout<<"-------------------------------------------------------------------------------";
	
	input:
		
	cout<<"\n\t\t\tSuhu awal yang akan di konversi :"<<endl;
	cout<<"\n\t\t1. Celcius";
	cout<<"\n\t\t2. Fahrenheit";
	cout<<"\n\t\t3. Reamur";
	cout<<"\n\t\t4. Kelvin"<<endl;
	cout<<"\n\t\tPilihan	: ";
	cin>>pil;
	cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
	
	switch(pil){
		case 1 :
			cout<<"\t\t\tKorversi ke dalam : "<<endl;
			
			for(n=1; n<4; n++)
			{
				cout<<endl<<"\t\t"<<n<<". "<<celcius[n];
			}
			
			cout<<"\n\n\t\tPilihan	: ";
			cin>>n;
		
			if(n==1){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI CELCIUS KE FAHRENHEIT"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\n\t\tMasukkan suhu\t\t: ";
						cin>>cel[5].suhu;
				
						cout<<"\t\tCelcius - Fahrenheit\t: ";
						cel[5].cel_fah=(cel[5].suhu*9/5)+32;
						cout<<""<<cel[5].cel_fah<<" ^F\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();

			}
			
			else if(n==2){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI CELCIUS KE REAMUR"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>cel[5].suhu;
				
						cout<<"\t\tCelcius - Reamur\t: ";
						cel[5].cel_re=(cel[5].suhu*4/5);
						cout<<""<<cel[5].cel_re<<"^R\n\n";		
						cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;			
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else if(n==3){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI CELCIUS KE KELVIN"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>cel[5].suhu;
				
						cout<<"\t\tCelcius - Kelvin\t: ";
						cel[5].cel_kel=cel[5].suhu+273.15;
						cout<<""<<cel[5].cel_kel<<"^K\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";	
					}
					getch();
			}
			
			else
			cout<<"ERROR!!"<<endl;
			
			break;
		
		case 2 :
			cout<<"\t\t\tKorversi ke dalam : "<<endl;
			
			for(n=1; n<4; n++)
			{
				cout<<endl<<"\t\t"<<n<<". "<<fahrenheit[n];
			}
			
			cout<<"\n\n\t\tPilihan	: ";
			cin>>n;
			
			
			if(n==1){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI FAHRENHEIT KE CELCIUS"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>fah[5].suhu;
				
						cout<<"\t\tFahrenheit - Celcius\t: ";
						fah[5].fah_cel=(fah[5].suhu-32)*5/9;
						cout<<""<<fah[5].fah_cel<<"^C\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
				}
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else if(n==2){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI FAHRENHEIT KE REAMUR"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>fah[5].suhu;
						cout<<"\t\tFahrenheit - Reamur\t: ";
						fah[5].fah_re=(fah[5].suhu-32)*4/9;
						cout<<""<<fah[5].fah_re<<"^R\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else if(n==3){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI FAHRENHEIT KE KELVIN"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>fah[5].suhu;
						cout<<"\t\tFahrenheit - Kelvin\t: ";
						fah[5].fah_kel=((fah[5].suhu-32)*5/9)+273.15;
						cout<<""<<fah[5].fah_kel<<"^K\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else
			cout<<"ERROR!!"<<endl;
			break;
			
		case 3:
			cout<<"\t\t\tKorversi ke dalam : "<<endl;
			
			for(n=1; n<4; n++)
			{
				cout<<endl<<"\t\t"<<n<<". "<<reamur[n];
			}
			
			cout<<"\n\n\t\tPilihan	: ";
			cin>>n;
			
			
			if(n==1){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI REAMUR KE CELCIUS"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>re[5].suhu;
						cout<<"\t\tReamur - Celcius\t: ";
						re[5].re_cel=re[5].suhu*5/4;
						cout<<""<<re[5].re_cel<<"^C\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else if(n==2){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI REAMUR KE FAHRENHEIT"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>re[5].suhu;
						cout<<"\t\tReamur - Fahrenheit\t: ";
						re[5].re_fah=(re[5].suhu*9/4)+32;
						cout<<""<<re[5].re_fah<<"^F\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else if(n==3){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI REAMUR KE KELVIN"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>re[5].suhu;
						cout<<"\t\tReamur - Kelvin\t: ";
						re[5].re_kel=re[5].suhu*5/4+273.15;
						cout<<""<<re[5].re_kel<<"^K\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else
			cout<<"ERROR!!"<<endl;
			break;
			
		case 4 :
			cout<<"\t\t\tKorversi ke dalam : "<<endl;
			
			for(n=1; n<4; n++)
			{
				cout<<endl<<"\t\t"<<n<<". "<<kelvin[n];
			}
			
			cout<<"\n\n\t\tPilihan	: ";
			cin>>n;
			
			if(n==1){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI KELVIN KE CELCIUS"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>kel[5].suhu;
						cout<<"\t\tKelvin - Celcius\t: ";
						kel[5].kel_cel=kel[5].suhu-273.15;
						cout<<""<<kel[5].kel_cel<<"^C\n\n";	
						cout<<"\n\t   -----------------------------------------------------"<<endl;		
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}
					getch();
			}
			
			else if(n==2){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI KELVIN KE REAMUR"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>kel[5].suhu;
						cout<<"\t\tKelvin - Reamur\t: ";
						kel[5].kel_re=(kel[5].suhu-273.15)*4/5;
						cout<<""<<kel[5].kel_re<<"^R\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}	
					getch();
			}
			
			else if(n==3){
				cout<<endl;
				cout<<endl;
				cout<<"-------------------------------------------------------------------------------"<<endl;
				cout<<"\t\t\t  KONVERSI KELVIN KE FAHRENHEIT"<<endl;
				cout<<"-------------------------------------------------------------------------------";
				
				cout<<"\n\n\t\tJumlah masukan : ";
				cin>>x;
				cout<<"\n\t   -----------------------------------------------------"<<endl;
				cout<<endl;
				
				for(int i=0; i<x; i++)
				{
						cout<<"\t\tMasukkan suhu\t\t: ";
						cin>>kel[5].suhu;
						cout<<"\t\tKelvin - Fahrenheit\t: ";
						kel[5].kel_fah=(kel[5].suhu-273.15)*9/5+32;
						cout<<""<<kel[5].kel_fah<<"^F\n\n";
						cout<<"\n\t   -----------------------------------------------------"<<endl;
				}
				
					cout<<"\t\tApakah Anda ingin mengkonversi suhu lagi? [0/1] = ";
					cin>>jwb;
					
					if(jwb==1){
						system("cls");
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t\tHELLO, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
						goto input;
					}
					else
					{
						system("cls");
						cout<<endl;
						cout<<endl;
						cout<<"-------------------------------------------------------------------------------"<<endl;
						cout<<"\t\t\t  TERIMA KASIH, "<<mhs[3].nama<<"!"<<endl;
						cout<<"-------------------------------------------------------------------------------";
					}	
					getch();
			}
			
			else
			cout<<"ERROR!!"<<endl;
			break;
}
}
