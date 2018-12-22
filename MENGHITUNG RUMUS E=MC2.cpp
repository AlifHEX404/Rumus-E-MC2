#include <iostream>
#include <iostream>
#include<cstdlib>
using namespace std;
int main()
{system ("color d");
        atas :
        cout<<"=================================================================== "<<endl;
        cout<<"======================== ALIf MUSTAFANAH ========================== "<<endl;
        cout<<"===================================================================\n "<<endl;
        cout<<"konversi menghitung Energi dari masa dan kecepatan "<<endl;
    float E,m,c,ce;
        cout<<" masukan nilai masa      : "; cin >>m;
        cout<<" masukan nilai kecepatan : "; cin >>c;
        ce=c*c;
        E=m*ce;

        cout << "*****************************************************\n";
        cout << "maka energi yang di hasilkan dari\n"<<m<<" kg, dengan waktu "<<c<< "s/m adalah\n";
        cout <<E<<" joule"<< endl;
        cout << "*****************************************************\n";
        goto atas;
        return 0;


}
