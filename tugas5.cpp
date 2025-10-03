#include <iostream>
using namespace std;

int main () 
{
    int chose;
    int many;
    double total;
    double diskon=0;
    double bayar;
    cout << "========================================="<<endl;
    cout << "            Warung BangKumis"<<endl;
    cout << "=========================================";
    cout << "\n1. Mie Gacor Super Double    (Rp 20.000)";
    cout << "\n2. Mie Gacor Super Triple    (Rp 35.000)"<<endl;
    cout << "=========================================";
    cout << "\nChose  : " ;
    cin >> chose;
    cout << "Berapa : ";
    cin >> many;
    cout << "========================================="<<endl;
    if (chose==1){
    total=many*20000;
    } else if (chose==2){
    total=many*35000;
    } else {
    cout << "                 MAAF"<< endl;
    cout << "========================================="<<endl;
    return 0;
    }
    if (total >= 100000){
    diskon=total*0.1;
    cout << "Kamu mendapatkan Diskon 10%" << endl;
    } else if (total >= 50000) {
    diskon=total*0.05;
    cout << "Kamu mendapatkan Diskon 5%"<<endl;
    } else if (total<50000){
    cout << "Tidak ada diskon"<<endl;
    } 
    
    bayar=total-diskon;
    cout << "========================================="<<endl;
    cout << "total yg harus dibayar adalah Rp " << bayar<<endl; 
    cout << "========================================="<<endl;
    return 0;
}
