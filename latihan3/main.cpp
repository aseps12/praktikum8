#include <iostream>

using namespace std;
int bagi (int a, int b)
{
    if (a<b)
        return 0;
    else
        return 1+bagi(a-b,b);

}
int main()
{
     int a,b;
    cout << "Masukan bilangan pertama :";
    cin>> a;
    cout << "Masukan bilangan kedua :";
    cin>> b;
    cout<< " Hasil = " <<bagi(a,b);
    return 0;
}
