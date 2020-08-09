// crear tickets.cpp : Este archivo contiene la función "main". La ejecución del programa comienza y termina ahí.
//

#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <windows.h>
using namespace std;

void color_lletres(WORD* Attributes, DWORD Colour)
{
    CONSOLE_SCREEN_BUFFER_INFO Info;
    HANDLE hStdout = GetStdHandle(STD_OUTPUT_HANDLE);
    GetConsoleScreenBufferInfo(hStdout, &Info);
    *Attributes = Info.wAttributes;
    SetConsoleTextAttribute(hStdout, Colour);
}

int f_dades(string nom, string correu, string dni, string tel_cont, string linia_af, vector<string>incidencia)
{

    string nom_txt = nom + "_" + dni + ".txt";
    ofstream arxiu(nom_txt);
    arxiu << "JORDI PARÉ - jordi.pare" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- NOM CLIENT -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << nom << "\n";
    arxiu << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- CORREU -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << correu << "\n";
    arxiu << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- DNI -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << dni << "\n";
    arxiu << "\n";
    arxiu << "----------------------" << "\n";
    arxiu << "- TELF CONTACTE -" << "\n";
    arxiu << "----------------------" << "\n";
    arxiu << tel_cont << "\n";
    arxiu << "\n";
    arxiu << "----------------------" << "\n";
    arxiu << "- LINIA AFECTADA -" << "\n";
    arxiu << "----------------------" << "\n";
    arxiu << linia_af << "\n";
    arxiu << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- INCIDENCIA -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "\n";
    for (int i = 0; i < incidencia.size(); i++)
    {
        if (incidencia.at(i).compare("-") != 0)
        {
            arxiu << "[" << (i + 1) << "] " << incidencia.at(i) << endl;
        }
    }

    arxiu.close();
    return 0;
}


int f_dades_com(string nom, string dni, string correu, string telf_cont, string contr_inter, string cont_ver)
{

    string nom_txt = "COMERCIAL" + nom + "_" + dni + ".txt";
    ofstream arxiu(nom_txt);
    arxiu << "JORDI PARÉ - jordi.pare" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- NOM CLIENT -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << nom << "\n";
    arxiu << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- CORREU -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << correu << "\n";
    arxiu << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- DNI -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << dni << "\n";
    arxiu << "\n";
    arxiu << "----------------------" << "\n";
    arxiu << "- TELF CONTACTE -" << "\n";
    arxiu << "----------------------" << "\n";
    arxiu << telf_cont << "\n";
    arxiu << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- CONT. INTERESSAT -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << contr_inter << "\n";
    arxiu << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << "- HA CONTRECTAT? -" << "\n";
    arxiu << "-------------------" << "\n";
    arxiu << cont_ver << "\n";
    arxiu << "\n";


    arxiu.close();
    return 0;
}


void incidencia()
{
    WORD Attributes = 0;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK1" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "http://google.cat/" << endl;
    cout << endl;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK2" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "http://google.cat/" << endl;
    cout << endl;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK3" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "http://google.cat/" << endl;
    cout << endl;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK4" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "http://google.cat/" << endl;
    cout << endl;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK5" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "http://google.cat/" << endl;
    cout << endl;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK6" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "http://google.cat/" << endl;
    cout << endl;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK7" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "http://google.cat/" << endl;
    cout << endl;
    string nom, correu, dni, tel_cont, linia_af, incidencia_char;
    vector<string>incidencia;
    int sum_in;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "NOM I COGNOMS [SENSE ACCENTS!!!]: ";
    // getline(cin, nom);
    while (getline(cin, nom))
        if (nom != "")
            break;

    cout << "CORREU ELECTRÒNIC: ";
    //getline(cin, correu);
    while (getline(cin, correu))
        if (correu != "")
            break;
    cout << "NIF/DNI: ";
    //getline(cin, dni);
    while (getline(cin, dni))
        if (dni != "")
            break;
    cout << "TELÈFON DE CONTACTE: ";
    //getline(cin, tel_cont);
    while (getline(cin, tel_cont))
        if (tel_cont != "")
            break;
    cout << "LINIA DE TELÈFON AFECTADA: ";
    //getline(cin, linia_af);
    while (getline(cin, linia_af))
        if (linia_af != "")
            break;
    cout << "INCIDENCIA: ";

    sum_in = 1;
    cout << "\n";
    while (incidencia_char.compare("-") != 0)
    {
        cout << "[" << sum_in << "]";
        getline(cin, incidencia_char);
        incidencia.push_back(incidencia_char);
        sum_in++;
    }
    f_dades(nom, correu, dni, tel_cont, linia_af, incidencia);
}

void nou_client()
{
    string nom, dni, correu, telf_cont, contr_inter, cont_ver;
    WORD Attributes = 0;
    color_lletres(&Attributes, BACKGROUND_INTENSITY | BACKGROUND_RED | BACKGROUND_GREEN);
    cout << "LINK1" << endl;
    color_lletres(&Attributes, FOREGROUND_INTENSITY | FOREGROUND_RED | FOREGROUND_BLUE | FOREGROUND_GREEN);
    cout << "https://google.cat" << endl;

    cout << endl;

    cout << "NOM I COGNOMS [SENSE ACCENTS!!!]: ";
    while (getline(cin, nom))
        if (nom != "")
            break;
    cout << "CORREU: ";
    while (getline(cin, correu))
        if (correu != "")
            break;
    cout << "DNI: ";
    while (getline(cin, dni))
        if (dni != "")
            break;
    cout << "TELÈFON DE CONTACTE: ";
    while (getline(cin, telf_cont))
        if (telf_cont != "")
            break;
    cout << "CONTRACTE INTERESSAT: ";
    while (getline(cin, contr_inter))
        if (contr_inter != "")
            break;
    cout << "HA CONTRECTAT? SÍ/NO: ";
    while (getline(cin, cont_ver))
        if (cont_ver != "") 
            break;
    f_dades_com(nom, dni, correu, telf_cont, contr_inter, cont_ver);
}

int main()
{
    setlocale(LC_ALL, "en_US.UTF-8");
    cout << "[1] INCIDENCIA" << endl;
    cout << "[2] NOU CLIENT (COMERCIAL)" << endl;
    int op;
    cin >> op;
    if (op == 1)
    {
        system("cls");
        incidencia();
    }
    else
    {
        system("cls");
        nou_client();
    }

}