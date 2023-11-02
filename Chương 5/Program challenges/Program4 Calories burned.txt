//chương trình hiển thị calo bị đốt sau mổi 5 phút
#include <iostream>

using namespace std;
int main ()
{
    //số calo đốt trong 1 phút là 3.6 calo
    double CaloInMinutes = 3.6 , totalCalo = 0;

    for( int count = 5 ; count <= 30 ; count +=5)
    {
        totalCalo += CaloInMinutes*5;
        cout <<"Calo burened in "<< count <<" Minutes is "<<totalCalo <<endl;

    }
    return 0;
}