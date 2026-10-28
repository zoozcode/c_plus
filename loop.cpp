#include <iostream>

using namespace std;

int main(){
int tipe_kendaraan, lama_parkir, total_parkir = 0;

cout<<"motor = 1, mobil = 2, bus = 3"<<endl;
cout<<"masukkan tipe kendaraan = ";
cin>>tipe_kendaraan;
cout<<"masukkan lama parkir = ";
cin>>lama_parkir;

if(tipe_kendaraan==1){
    if(lama_parkir >= 12){
        total_parkir = (lama_parkir * 3000)+50000;
    }else{
        total_parkir = lama_parkir * 3000;
    }
}else if(tipe_kendaraan == 2){
    if(lama_parkir >= 12){
        total_parkir = (lama_parkir*5000)+75000;
    }else{
        total_parkir = lama_parkir * 5000;
    }
}else{
    if(lama_parkir >=8){
        total_parkir = (lama_parkir * 25000)+250000;
    }else{
        total_parkir = lama_parkir * 25000;
    }
}

cout<<"total parkir = " << total_parkir<<endl;


return 0;
}
