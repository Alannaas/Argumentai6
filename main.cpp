#include <iostream>
#include <cstdlib> //prijungiame bibliotekas
using namespace std;

void skaiciai (int skaicius); //�vedame funkcij� skaiciai
int skaicius1; //�vedame kintam�j�
int main() //pagrindin� funkcija
{
    setlocale(LC_ALL, "Lithuanian"); //�vedame lietuvi� kalb�
    cout<<"Kiek atsitiktini� skai�i� norite, kad programa sugeneruot�?"; //paklausiame kiek skai�i� norima sugeneruoti
    cin>>skaicius1; //�vedamas kiekis, kiek skai�i� norima sugeneruoti
skaiciai(skaicius1); //i�kvie�ima funkcija
}

void skaiciai (int skaicius){ //apra�oma funkcija

for(int i = 0; i < skaicius1; i++){ //funkcija kartojama tiek kart�, kiek skai�i� norime i�vesti
    int a = rand(); //atsitiktinio skai�iaus formul�
    cout<<a<<" "; //i�vedame atsitiktin� skai�i�
}
}
