/* Nama  : Shandra Wikusdiyanti
   NIM   : 3411151032
   Kelas : SIE-A
   Program Operasi Aritmatika
   Tugas Metode Numerik
   Tanggal pengerjaan: 15/09/2017*/
   
#include <stdio.h>
#include <conio.h>
#include <windows.h>
#include <math.h>

int tambah (int x, int y){
	//kamus
	int hasil;
	
    //algoritma
    hasil = x + y;

    return (hasil);

}

int kurang (int x, int y){
	//kamus
	int hasil;
	
    //algoritma
    hasil = x - y;

    return (hasil);

}

int kali (int x, int y){
	//kamus
	int hasil;
	
    //algoritma
    hasil = x * y;

    return (hasil);

}

void menu(){
	//algoritma
	        printf("OPERASI ARITMATIKA");
         	printf("\n---------------------------------------------\n");
	        printf("\nPilih Operasi : ");
			printf("\n---------------------------------------------\n");
			printf("1. Menghitung x+y\n");
			printf("2. Menghitung x-y\n");
			printf("3. Menghitung x*y\n");
			printf("4. Menghitung x^y\n");
			printf("5. Menghitung f(x)=2x^2-3x+1\n");
			printf("6. Exit\n");
}

int pangkat (int x, int y){
	//kamus
	int hasil;
	//algoritma
	hasil=pow(x,y);
	printf("%d ^ %d= %d", x, y,hasil);
}

//int fx(int x){
	//kamus
//	int hasil;
	//algoritma
//	printf ("Maka x = %d \n", x);
//	printf ("Berapa hasilnya jika f(x) = 2x^2 - 3x + 1 ? \n");
//	hasil=((2 * (pow(x,2)) - ( 3 * x) + 1));
//	printf ("\n-----------------------------------\n");
//	printf("\nf(%d)=2(%d)^2 - 3(%d) + 1= %d", x, x, x, hasil);
//}

//main driver
int main () {
	//kamus data
	int a, b, i, hasil;
	int pilih;
	
	//algoritma
			menu:
			menu();
			printf("Pilih = ");
			scanf("%d", &pilih);
			system("cls");
			switch(pilih){
				case 1 	:	printf("OPERASI PENJUMLAHAN");
	                        printf("\n---------------------------------------------\n");
				            printf("Masukan Bilangan Pertama : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan Kedua   : ");
                            scanf("%d",&b);
				        
						    hasil=tambah (a,b);
                            printf("\n %d + %d = %d",a,b,hasil);
						
						    getch();
						    system("cls");
							goto menu;
						    
				case 2 	:	printf("OPERASI PENGURANGAN");
	                        printf("\n---------------------------------------------\n");
				            printf("Masukan Bilangan Pertama : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan Kedua   : ");
                            scanf("%d",&b);
				        
						    hasil=kurang (a,b);
                            printf("\n %d - %d = %d",a,b,hasil);
						
						    getch();
						    system("cls");
						    goto menu;
				      	
			   case 3 	:	printf("OPERASI PERKALIAN");
	                        printf("\n---------------------------------------------\n");
				            printf("Masukan Bilangan Pertama : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan Kedua   : ");
                            scanf("%d",&b);
				        
						    hasil=kali (a,b);
                            printf("\n %d * %d = %d",a,b,hasil);
						    
						    getch();
						    system("cls");
						    goto menu;  
						    
			  case 4 :	    printf("OPERASI PERPANGKATAN");
	                        printf("\n---------------------------------------------\n");
				            printf("Masukan Bilangan : ");
                            scanf("%d",&a);
                            printf("Masukan Nilai Pangkat   : ");
                            scanf("%d",&b);
				            printf("\n");
						    hasil=pangkat (a,b);
						   
						    getch();
						    system("cls");
							goto menu;
						   
		   	  case 5 :	   
				            printf("OPERASI HITUNG F(X)");
	                        printf("\n---------------------------------------------\n");
				            printf("Masukan Bilangan x : ");
                            scanf("%d",&a);
                            printf("Masukan Bilangan y : ");
                            scanf("%d",&b);
                            printf("\n---------------------------------------------\n");
                            printf("Syarat %d >= %d <= %d \n", a, a, b);
                            printf ("Berapa hasilnya jika f(x) = 2x^2 - 3x + 1 ? \n");
                            
							for (i=a;i<=b;i++){
						        printf ("\nJika x = %d \n", i);
	                            hasil=((2 * (pow(i,2)) - ( 3 * i) + 1));
	                            printf("\nf(%d)=2(%d)^2 - 3(%d) + 1= %d", i, i, i, hasil);
	                            printf("\n---------------------------------------------\n");
						    }
						    
						    getch();
						    system("cls");
						    goto menu;
						    
			  case 6 :      printf("\nSelamat Tinggal");
							getch();
							return 0;
							break; 	 	
}
}
