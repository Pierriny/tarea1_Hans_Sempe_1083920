#include "pch.h"
#include <string>
#include <iostream>
#include <ddstream.h>
#include <windows.h>
#include <string>

using namespace std;
using namespace System;

int c;

int multiplicacion(int a, int b) {
    
    if (b == 0) {
        return c;
    }
    else {
        c += a;
        b -= 1;
        return multiplicacion(a, b);
    }
}

string palabraspalindromas() {
    return "hola";
}

string DecBin(int num) {
    if (num == 1) {
        return "1";
    }
    if (num % 2 == 0) {
        return DecBin(num / 2) + "0";
    }
    else {
        return DecBin(num / 2) + "1";
    }
}

int DecOct(int n)
{
    static int sem = 1, octal = 0;
    if (n != 0)
    {
        octal = octal + (n % 8) * sem;
        sem = sem * 10;
        DecOct(n / 8);
    }
    return octal;
}

int BinDec(string binary, int i = 0)
{
    int n = binary.length();
    if (i == n - 1)
        return binary[i] - '0';

    return ((binary[i] - '0') << (n - i - 1)) + BinDec(binary, i + 1);
}

int OctDec(int n)
{
    static int decimal = 0, sem = 0;
    if (n != 0)
    {
        decimal = decimal + (n % 10) * pow(8, sem);
        sem++;
        OctDec(n / 10);
    }
    return decimal;
}


int main()
{
 
    Console::WriteLine("Bienvenidos al Lab03 de Pierri Sempe :D !!");
    Console::WriteLine("¿Que ejercicio desea realizar? ¿el 1, 2 o 3?");

    try {
        int ^ ejercicio = Convert::ToInt32(Console::ReadLine());

        if (Convert::ToInt32(ejercicio) == 1) {

            Console::WriteLine("Ejercicio No.1 Multiplicacion");
            Console::WriteLine("\nIngrese su primer factor: ");
            int^ factor1 = Convert::ToInt32(Console::ReadLine());
            Console::WriteLine("\nIngrese su primer factor: ");
            int^ factor2 = Convert::ToInt32(Console::ReadLine());
            Console::WriteLine("\nResultado = " + multiplicacion(Convert::ToInt32(factor1), Convert::ToInt32(factor2)));
        }
        if (Convert::ToInt32(ejercicio) == 2) {
               
            Console::WriteLine("E");


        }
        if (Convert::ToInt32(ejercicio) == 3) {          
           
            Console::WriteLine("Ejercicio No.3 Conversion entre bases");
            Console::WriteLine("Decimal (10), Binario (2) y Octal (8) ");
            Console::WriteLine("\Ingrese base origen: ");
            int^ base1 = Convert::ToInt32(Console::ReadLine());
            Console::WriteLine("\nIngrese base destino: ");
            int^ base2 = Convert::ToInt32(Console::ReadLine());
            Console::WriteLine("\nIngrese numero a convertir: ");
            string numX;

            if (Convert::ToInt32(base1) == 10) {
                if (Convert::ToInt32(base2) == 10) {
                    int^ convertir = Convert::ToInt32(Console::ReadLine());
                    Console::WriteLine(convertir);
                }
                else if (Convert::ToInt32(base2) == 2) {
                    int^ convertir = Convert::ToInt32(Console::ReadLine());
                    cout << DecBin(Convert::ToInt32(convertir));
                }
                else if (Convert::ToInt32(base2) == 8) {
                    int^ convertir = Convert::ToInt32(Console::ReadLine());
                    cout << DecOct(Convert::ToInt32(convertir));
                }
                else {
                    Console::WriteLine("Error: Dato no valido");
                }
            }
            else if (Convert::ToInt32(base1) == 2) {
                if (Convert::ToInt32(base2) == 10) {
                    cin >> numX; 
                    cout << BinDec(numX);
                }
                else if (Convert::ToInt32(base2) == 2) {
                    int^ convertir = Convert::ToInt32(Console::ReadLine());
                    Console::WriteLine(convertir);
                }
                else if (Convert::ToInt32(base2) == 8) {
                    cin >> numX;
                    cout << DecOct(BinDec(numX));
                }
                else {
                    Console::WriteLine("Error: Dato no valido");
                }

            }
            else if (Convert::ToInt32(base1) == 8) {
                if (Convert::ToInt32(base2) == 10) {
                    int^ convertir = Convert::ToInt32(Console::ReadLine());
                    cout << OctDec(Convert::ToInt32(convertir));
                }
                else if (Convert::ToInt32(base2) == 2) {
                    int^ convertir = Convert::ToInt32(Console::ReadLine());
                    cout << DecBin(OctDec(Convert::ToInt32(convertir)));
                }
                else if (Convert::ToInt32(base2) == 8) {
                    int^ convertir = Convert::ToInt32(Console::ReadLine());
                    Console::WriteLine(convertir);
                }
                else {
                    Console::WriteLine("Error: Dato no valido");
                }

            }
            else {
                Console::WriteLine("Error: Dato no valido");
            }

















        }
        else if (Convert::ToInt32(ejercicio) >= 4 || Convert::ToInt32(ejercicio) <= 0) {         
            
            Console::WriteLine("Error: Dato no valido, vuelva a intentrlo");
        }
    }
    catch(...) {    
       
        Console::WriteLine("Error: Dato no valido, vuelva a intentrlo");
        return 0;
    }

}
