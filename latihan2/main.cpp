#include <iostream>

using namespace std;
int kali (int a, int b)
{
    if (b==0)
        return 0;
    else
        return a+kali(a,b-1);
        cout<< a;
}
int main()
{
    int a,b;
    cout << "Masukan bilangan pertama :";
    cin>> a;
    cout << "Masukan bilangan kedua :";
    cin>> b;
    cout<< " Hasil = " <<kali (a,b);
    return 0;
}
