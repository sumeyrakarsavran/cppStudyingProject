

#include <iostream> // bunu yazarak burda cout kullanacağımızı söylüyoruz
using namespace std; // bunu yazarak std namespace in içindeki fonksiyonları kullanmak istiyoruz diyoruz

int main()  //bu, tüm çalıştırılabilir cpp projelerinde olmalı
{



    //operatörler yani - + * felan
    int a = 5;
    cout << "a'nin degeri :" << a << endl;
    a += 2; // a = a+ 2 demek oluyor, a ya yeni değer atıyorum
    a *= 2; // a = a*2 demek yani çarp neyle ikiyle sonra yeni değerine ata
    cout << "a'nin yeni degeri :" << a << endl;

    a++; // a yı bir arttır
    cout << "a'nin yeni degeri :" << a << endl;
    a--; // a yı bir azalt
    cout << "a'nin yeni degeri :" << a << endl;

    int sayi1 = 10;
    int sayi2 = 4;
    cout << "sayi1 / sayi2 : " << sayi1 / sayi2 << endl;
    cout << "sayi1 / sayi2 : " << (float)sayi1 / sayi2 << endl;  //bölümün virgülünün özükmesi için ikisinden birini float yapmak yeterli
    cout << "sayi1 / sayi2 : " << sayi1 / (float)sayi2 << endl;



}

/* return 0 yazarak bu int main i sonlandırmış oluyoruz
* 
* DEĞİŞKENLER (çok kullanılan)
* 
* int : tam sayı, 2
* float : ondalıklı sayı, 2.23
* double : ondalıklı sayı, 2,5455 (ondalıklı kısmı çok daha büyük olanlar saklanabiliniyor)
* char : karakter simge sayı ya da harf, A, 65
* bool : true ya da false oluyor burda
* 
*/