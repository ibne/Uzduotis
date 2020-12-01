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
    ofstream myfile2;
    myfile.open ("atsiliepimai.txt", fstream::in | fstream::out | fstream::app);
    myfile2.open ("atsiliepimas.txt", std::ofstream::out | std::ofstream::trunc);
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
    std::cout << "Kambario svara ir patogumus \n";
    atsiliepimas.kambarioAtsiliepimas();
    std::cout << "Pusryciu kokybe \n";
    atsiliepimas.pusryciuAtsiliepimas();
    std::cout << "Personala \n";
    atsiliepimas.personaloAtsiliepimas();

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
                    cout << "Aciu, kad apsistojote!";
                    exit(0);
                default:
                    std::cout << "Bloga ivestis pasirinkite nuo 1 iki 3";
                    break;
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
    ofstream myfile;
    ofstream myfile2;
    myfile.open ("atsiliepimai.txt", fstream::in | fstream::out | fstream::app);
    myfile2.open ("atsiliepimas.txt", fstream::in | fstream::out | fstream::app);
    int ivertinimas = 1;
        std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
        std::cin >>  ivertinimas;
        if (ivertinimas > 5 or ivertinimas < 1 )
        {
            std::cout << "Neteisinga ivestis \n";
            std::cout << "Ivertinkite kambario svara nuo 1 iki 5 \n";
            std::cin >>  ivertinimas;
        }
        myfile << "Kambario svara: " << ivertinimas << endl;
        myfile2 << "Kambario svara: " << ivertinimas << endl;
        std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
        std::cin >>  ivertinimas;
        if (ivertinimas > 5 or ivertinimas < 1 )
        {
            std::cout << "Neteisinga ivestis \n";
            std::cout << "Ivertinkite kambario patoguma nuo 1 iki 5 \n";
            std::cin >>  ivertinimas;
        }
        myfile << "Kambario patogumas: " << ivertinimas << endl;
        myfile2 << "Kambario patogumas: " << ivertinimas << endl;
}
void Atsiliepimas::pusryciuAtsiliepimas () {
    ofstream myfile;
    ofstream myfile2;
    myfile.open ("atsiliepimai.txt", fstream::in | fstream::out | fstream::app);
    myfile2.open ("atsiliepimas.txt", fstream::in | fstream::out | fstream::app);
    int input = 1;
    std::cout << "Ivertinkite pusryciu kokybe nuo 1 iki 5 \n";
    std::cin >>  input;
    if (input > 5 or input < 1 )
    {
        std::cout << "Neteisinga ivestis \n";
        std::cout << "Ivertinkite pusryciu kokybe nuo 1 iki 5 \n";
        std::cin >>  input;
    }
    myfile << "Pusryciu kokybe: " << input << endl;
    myfile2 << "Pusryciu kokybe: " << input << endl;
    std::cout << "Ivertinkite pusryciu pasirinkima(gausa) nuo 1 iki 5 \n";
    std::cin >>  input;
    if (input > 5 or input < 1 )
    {
        std::cout << "Pusryciu pasirinkimas \n";
        std::cout << "Ivertinkite pusryciu pasirinkima(gausa) nuo 1 iki 5 \n";
        std::cin >>  input;
    }
    myfile << "Pusryciu pasirinkima(gausa): " << input << endl;
    myfile2 << "Pusryciu pasirinkima(gausa): " << input << endl;
}
void Atsiliepimas::personaloAtsiliepimas() {
    ofstream myfile;
    ofstream myfile2;
    myfile.open ("atsiliepimai.txt", fstream::in | fstream::out | fstream::app);
    myfile2.open ("atsiliepimas.txt", fstream::in | fstream::out | fstream::app);
    int input = 1;
    std::cout << "Ivertinkite personala nuo 1 iki 5 \n";
    std::cin >>  input;
    if (input > 5 or input < 1 )
    {
        std::cout << "Neteisinga ivestis \n";
        std::cout << "Ivertinkite personala nuo 1 iki 5 \n";
        std::cin >>  input;
    }
    myfile << "Personalas: " << input << endl;
    myfile2 << "Personalas: " << input << endl;
    myfile << "-----------------------" << endl;
    myfile2 << "-----------------------" << endl;
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

