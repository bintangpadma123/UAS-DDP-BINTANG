/******************************************************************************

                              Online C++ Compiler.
               Code, Compile, Run and Debug C++ program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <iostream>
#include <conio.h> 
using namespace std;

int main ()
{
    int rasa;
    int harga;
    int penambahan;
    int total;
    int bayar=0;
    int kembalian;
    int diskon;

    string style[5]={"1. TERANG BULAN SUSU            = Rp. 15.000","2. TERANG BULAN COKLAT SUSU     = Rp. 20.000","3. TERANG BULAN KACANG SUSU     = Rp. 20.000","4. TERANG BULAN KEJU SUSU       = Rp. 25.000","5. TERANG BULAN PISANG SUSU     = Rp. 50.000"};
    string extra[4]={"1. COKLAT     = Rp. 7.000  ","2. KACANG     = Rp. 7,000","3. KEJU       = Rp. 10.000","4. PISANG     = Rp. 12.000"};
    int a,b;
    

        cout << "   SELAMAT DATANG DI KING TERANG BULAN   " <<endl;
        cout << "                                         " <<endl;
        cout << "                - BALI -                 " <<endl;
        cout << "   -----------------------------------   " <<endl;
        cout << "                                         " <<endl;
        cout << " Silakan Memilih Rasa Sesuai Kesukaan Anda " <<endl;
        cout << "                                           " <<endl;
        cout << " Dapatkan Diskon 10% Dengan Minimal Belanja 50rb " <<endl;

                for (a=0;a<5;a++){
                    cout << style[a]<<endl;
                }
        cout << "#########################################" <<endl;
        cout << " Rasa Yang Dipilih : ";
        cin  >> rasa;
        cout << "-----------------------------------\n";

         if (rasa<1 || rasa>5){
            cout <<" RASA TIDAK ADA "<< endl; 
         }
        
    switch (rasa){
        
        case 1 :
        cout << " TERANG BULAN SUSU " <<endl;
        cout << " EXTRA :           " <<endl;
        harga=15000;
        
        for (b=0;b<4;b++){
            cout << extra[b]<<endl;    
        }
        cout << " PENAMBAHAN TOPPING ? : ";
        cin >> penambahan;

        back:
        switch (penambahan){
            case 1 :
            cout << "\n EXTRA COKLAT  \n";
            total=harga+7000;
            cout << "\n TOTAL       : Rp. "<< total << endl;
            cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << "UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << "KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 2 :
            cout << "\n EXTRA KACANG  \n";
            total=harga+7000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 3 :
            cout << "\n EXTRA KEJU  \n";
            total=harga+10000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 4 :
            cout << "\n EXTRA PISANG  \n";
            total=harga+12000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;
        }
        break ;
        case 2 :
        cout << " TERANG BULAN COKLAT SUSU " <<endl;
        cout << " EXTRA :           " <<endl;
        harga=20000;
        
        for (b=0;b<4;b++){
            cout << extra[b]<<endl;    
        }
        cout << " PENAMBAHAN TOPPING ? : ";
        cin >> penambahan;

        back1:
        switch (penambahan){
            case 1 :
            cout << "\n EXTRA COKLAT  \n";
            total=harga+7000;
            cout << "\n TOTAL       : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR          : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << "UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << "KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 2 :
            cout << "\n EXTRA KACANG  \n";
            total=harga+7000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 3 :
            cout << "\n EXTRA KEJU  \n";
            total=harga+10000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 4 :
            cout << "\n EXTRA PISANG  \n";
            total=harga+12000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;
        }
        break ;
        case 3 :
        cout << " TERANG BULAN KACANG SUSU " <<endl;
        cout << " EXTRA :           " <<endl;
        harga=20000;
        
        for (b=0;b<4;b++){
            cout << extra[b]<<endl;    
        }
        cout << " PENAMBAHAN TOPPING ? : ";
        cin >> penambahan;

        back2:
        switch (penambahan){
            case 1 :
            cout << "\n EXTRA COKLAT  \n";
            total=harga+7000;
            cout << "\n TOTAL       : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << "UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << "KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 2 :
            cout << "\n EXTRA KACANG  \n";
            total=harga+7000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 3 :
            cout << "\n EXTRA KEJU  \n";
            total=harga+10000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 4 :
            cout << "\n EXTRA PISANG  \n";
            total=harga+12000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;
    
        }
        break ;
        case 4 :
        cout << " TERANG BULAN KEJU SUSU " <<endl;
        cout << " EXTRA :           " <<endl;
        harga=25000;
        
        for (b=0;b<4;b++){
            cout << extra[b]<<endl;    
        }
        cout << " PENAMBAHAN TOPPING ? : ";
        cin >> penambahan;

        back3:
        switch (penambahan){
            case 1 :
            cout << "\n EXTRA COKLAT  \n";
            total=harga+7000;
            cout << "\n TOTAL           : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << "UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << "KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 2 :
            cout << "\n EXTRA KACANG  \n";
            total=harga+7000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 3 :
            cout << "\n EXTRA KEJU  \n";
            total=harga+10000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 4 :
            cout << "\n EXTRA PISANG  \n";
            total=harga+12000;
            cout << " TOTAL         : Rp. "<< total << endl;
             cout << " Maaf Total Belanja Anda Kurang Dari 50rb" <<endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;
        }
        break ;
        case 5 :
        cout << " TERANG BULAN PISANG SUSU " <<endl;
        cout << " EXTRA :           " <<endl;
        harga=50000;
        
        for (b=0;b<4;b++){
            cout << extra[b]<<endl;    
        }
            cout << " PENAMBAHAN TOPPING ? : ";
        cin >> penambahan;

        back4:
       switch (penambahan){
           
            case 1 :
            cout << "\n EXTRA COKLAT  \n";
            total=harga+7000-5700;
             cout << " Selamat Anda Mendapatkan Diskon 10%" <<endl;
            cout << "\n TOTAL       : Rp. "<< total << endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << "UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << "KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 2 :
            cout << "\n EXTRA KACANG  \n";
            total=harga+7000-5700;
             cout << " Selamat Anda Mendapatkan Diskon 10%" <<endl;
            cout << " TOTAL         : Rp."<< total << endl;
            cout << " BAYAR         : Rp.";
            cin >> bayar;
            kembalian=bayar-total;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 3 :
            cout << "\n EXTRA KEJU  \n";
            total=harga+10000-6000;
             cout << " Selamat Anda Mendapatkan Diskon 10%" <<endl;
            cout << " TOTAL         : Rp."<< total << endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!! ";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;

            case 4 :
            cout << "\n EXTRA PISANG  \n";
            total=harga+12000-6200;
             cout << " Selamat Anda Mendapatkan Diskon 10%" <<endl;
            cout << " TOTAL         : Rp. "<< total << endl;
            cout << " BAYAR         : Rp. ";
            cin >> bayar;
            kembalian=bayar-total ;
            if (bayar<total){
                cout << " UANG KAMU TIDAK MENCUKUPI !!!";
                goto back;
            } 
            else {
                cout << " KEMBALIAN KAMU : Rp. "<< kembalian << endl;
            }
            break ;
       
        }
        break ;
    }
    cout << endl;
    cout << "***********************" <<endl;
    cout << "  SELAMAT MENIKMATI :) " <<endl;
    cout << "_______________________" <<endl;
    cout << " SAMPAI JUMPA KEMBALI  " <<endl;
   
   getch();
   return 0;
}