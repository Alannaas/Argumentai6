#include <iostream>
#include <cstdlib> //prijungiame bibliotekas
using namespace std;

void skaiciai (int skaicius); //ávedame funkcijà skaiciai
int skaicius1; //ávedame kintamàjá
int main() //pagrindinë funkcija
{
    setlocale(LC_ALL, "Lithuanian"); //ávedame lietuviø kalbà
    cout<<"Kiek atsitiktiniø skaièiø norite, kad programa sugeneruotø?"; //paklausiame kiek skaièiø norima sugeneruoti
    cin>>skaicius1; //ávedamas kiekis, kiek skaièiø norima sugeneruoti
skaiciai(skaicius1); //iðkvieèima funkcija
}

void skaiciai (int skaicius){ //apraðoma funkcija

for(int i = 0; i < skaicius1; i++){ //funkcija kartojama tiek kartø, kiek skaièiø norime iðvesti
    int a = rand(); //atsitiktinio skaièiaus formulë
    cout<<a<<" "; //iðvedame atsitiktiná skaièiø
}
}
