#include <iostream>
#include <fstream>
using namespace std;

//atsiliepimu knyga apsilankius viesbutyje
struct Person {
    int amzius;
    std::string vardas;
    std::string pavarde;
    int kambarioNumeris;
};

struct Atsiliepimas {
    void kambarioAtsiliepimas();
    void pusryciuAtsiliepimas();
    void personaloAtsiliepimas();
};


void atsiliepimuSarasas();

void manoAtsiliepimas();

int main() {

    ofstream myfile;
    ofstream myfile2("atsiliepimas.txt");
    myfile.open ("atsiliepimai.txt", fstream::in | fstream::out | fstream::app);
    Person person;
    Atsiliepimas atsiliepimas;
    std::cout << "Sveiki, aciu, kad lanketes pas mus." << std::endl;
    std::cout << "Jusu vardas: " << std::endl;
    std::cin >> person.vardas;
    myfile << "Vardas: " << person.vardas << endl;
    myfile2 << "Vardas: " << person.vardas << endl;
    std::cout << "Jusu pavarde: " << std::endl;
    std::cin >> person.pavarde;
    myfile << "Pavarde: " << person.pavarde << endl;
    myfile2 << "Pavarde: " << person.pavarde << endl;
    std::cout << "Jusu amzius: " << std::endl;
    std::cin >> person.amzius;
    myfile << "Amzius: " << person.amzius << endl;
    myfile2 << "Amzius: " << person.amzius << endl;
    std::cout << "kambario numeris: " << std::endl;
    std::cin >> person.kambarioNumeris;
    myfile << "Kambario numeris:" << person.kambarioNumeris << endl;
    myfile2 << "Kambario numeris:" << person.kambarioNumeris << endl;
    myfile.close();

    int firstinput = 1;
    int secnewinput = 1;
    while (firstinput != 0) {
        std::cout << "Apie ka pirma norite palikti atsiliepima? \n";
        std::cout << "1. Kambario švara ir patogumus \n";
        std::cout << "2. Pusryciu kokybe \n";
        std::cout << "3. Personala \n";
        std::cin >> firstinput;

        switch (firstinput) {
            case 1:
                atsiliepimas.kambarioAtsiliepimas();
                break;
            case 2:
                atsiliepimas.pusryciuAtsiliepimas();
                break;
            case 3:
                //phone.call();
                break;
            default:
                std::cout << "Bloga ivestis pasirinkite nuo 1 iki 3";
                break;
        }
        std::cout << "Aciu Jusu atsiliepimas irasytas \n";

        while (secnewinput != 0) {
            std::cout << "1. Ar norite perziureti visus atsiliepimus?\n";
            std::cout << "2. Ar norite perziureti tik savo atsiliepima?\n";
            std::cout << "3. Iseiti\n";
            std::cin >> secnewinput;

            switch (secnewinput) {
                case 1:
                    atsiliepimuSarasas();
                    break;
                case 2:
                    manoAtsiliepimas();
                    break;
                case 3:
                    break;
                default:
                    std::cout << "Bloga ivestis pasirinkite nuo 1 iki 3";
                    break;
            }
        }
    }
}

void manoAtsiliepimas() {
    string line;
    ifstream myfile ("atsiliepimas.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
    return;
}


void Atsiliepimas::kambarioAtsiliepimas () {
    int input = 1;
        std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
        std::cin >>  input;
        if (input > 5 or input < 1 )
        {
            std::cout << "Neteisinga ivestis \n";
            std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
            std::cin >>  input;
        }
        std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
        std::cin >>  input;
        if (input > 5 or input < 1 )
        {
            std::cout << "Neteisinga ivestis \n";
            std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
            std::cin >>  input;
        }
}
void Atsiliepimas::pusryciuAtsiliepimas () {
    int input = 1;
    std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
    std::cin >>  input;
    if (input > 5 or input < 1 )
    {
        std::cout << "Neteisinga ivestis \n";
        std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
        std::cin >>  input;
    }
    std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
    std::cin >>  input;
    if (input > 5 or input < 1 )
    {
        std::cout << "Neteisinga ivestis \n";
        std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
        std::cin >>  input;
    }
}
void Atsiliepimas::personaloAtsiliepimas() {
    int input = 1;
    std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
    std::cin >>  input;
    if (input > 5 or input < 1 )
    {
        std::cout << "Neteisinga ivestis \n";
        std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
        std::cin >>  input;
    }
    std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
    std::cin >>  input;
    if (input > 5 or input < 1 )
    {
        std::cout << "Neteisinga ivestis \n";
        std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
        std::cin >>  input;
    }
}

void atsiliepimuSarasas() {

    string line;
    ifstream myfile ("atsiliepimai.txt");

    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            cout << line << '\n';
        }
        myfile.close();
    }

    else cout << "Unable to open file";
    return;
}

