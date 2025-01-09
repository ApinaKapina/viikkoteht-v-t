#include <iostream>

using namespace std;
// prototyyppi
int game(int maxnum);

int main()

{   int arvausten_lkm=0;
    int maxnum = 40;
    arvausten_lkm = game(maxnum);
    cout << "Arvauksia: "
    << arvausten_lkm
    << endl;


    return 0;
}

    int game(int maxnum) {
    int arvausten_lkm=0;

    srand(time(NULL));
    int satunnaisluku = rand() % 40;
    int arvaus=0;

    cout << "Maxnum"
    << maxnum
    << endl;


    while (arvaus != satunnaisluku) {
    // 2. Kysytään pelaajalta arvaus
    cout << "Anna luku? "
    << endl;
     cin >> arvaus;
    arvausten_lkm++;

    // 3. Tarkistetaan onko arvaus pienempi, suurempi vai yhtäsuuri kuin luku
    // 4. Kerrotaan tarkistuksen tulos tyyliin, "luku on pienempi/suurempi" tai "oikea vastaus"

    // 3.1 Jos arvaus yhtäsuuri kuin satunnaisluku
    if (arvaus == satunnaisluku) {
    cout << "oikein!"
    << endl;
    }
    // 3.2. Jos arvaus pienempi kuin satunnaisluku
    if (arvaus < satunnaisluku) {
    cout << "luku on liian pieni!"
     << endl;
    }

    // 3.3. Jos arvaus on suurempi kuin satunnaisluku
    if (arvaus > satunnaisluku) {
    cout << "luku on liian suuri!"
    << endl;
    }
    } // päättää while-silmukan

return arvausten_lkm;
}
