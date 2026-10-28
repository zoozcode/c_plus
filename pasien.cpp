#include <iostream>
using namespace std;

int main(){
    int usia, hari;
    float suhu;
    char batuk,pilek,sesak,kepala;

    cout<<"=====PEMERIKSAAN PASIEN====="<<endl;


    cout<<"masukkan usia = ";
    cin>>usia;

    cout<<"masukkan suhu = ";
    cin>>suhu;

    cout<<"masukkan batuk(y/t) = ";
    cin>>batuk;


    cout<<"masukkan pilek(y/t) = ";
    cin>>pilek;

    cout<<"masukkan sesak(y/t) = ";
    cin>>sesak;

    cout<<"masukkan kepala(y/t) = ";
    cin>>kepala;

    cout<<"masukkan hari = ";
    cin>>hari;

    if(suhu >=39 && sesak=='y'){
        cout<<"penanganan segara"<<endl;
    }else if(suhu >=38 && batuk =='y' && pilek=='y'){
        cout<<"infeksi pernapasan"<<endl;
    }else if(suhu >=38 && (batuk=='y' || pilek=='y')){
        cout<<"gejala ringan"<<endl;
    }else if(usia >= 40 || hari >= 7){
        cout<<"pemeriksaan lanjut"<<endl;
    }else{
        cout<<"belum dapat ditentukan"<<endl;
    }

return 0;
}
