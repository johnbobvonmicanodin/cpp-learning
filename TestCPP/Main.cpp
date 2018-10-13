/*#include <iostream>
#include <string>
#include <cmath>
#include <vector>
#include <fstream>
#include <ctime> 
#include <cstdlib>

using namespace std;

int main()
{

	int const nbrDeCoups = 5;

	bool continuer = true;

	cout << "Modifiez le path du filestream si utilisation du dico :)" << endl;

	while (continuer)
	{

	cout << "Utiliser le dictionnaire ? Oui(Y) ou Non(N)" << endl;

	char c(' ');

	cin >> c;

	bool dico = false;

	if (c == 'Y'){
		dico = true;
	}

		string b("");

		string ligne(" ");

		if (dico)
		{
			ifstream monFlux("C:/Users/mcomandini/Desktop/dico.txt");

			if (monFlux)
			{
				srand(time(0));

				int random = rand() % 10000;

				int i(0);

				cout << "Wait recherche d'un mot" << endl;
				
				while (std::getline(monFlux, ligne))
				{
					if (i == random)
					{				
						b = ligne;
					}
					i++;
				}
			}
			else
			{
				cout << "ERREUR" << endl;
			}
		}
		else
		{
			cout << "Saissisez un mot" << endl;

			cin >> b;

			cout << endl;

		}

		string nouv(b);

		int j(b.size());

		string melange("");

		for (int i(0); i < j; i++)
		{
			//initialisation de l'alea
			srand(time(0));

			int pos = rand() % b.size();

			melange += b[pos];

			b.erase(pos, 1);
		}

		cout << melange << endl;

		cout << "Quel est ce mot ?" << endl;

		string rep("");

		bool trouve = false;

		int coupJouer = 0;

		while (!trouve && coupJouer < nbrDeCoups)
		{
			cin >> rep;

			if (rep == nouv)
			{
				cout << "Oui ! GGWP" << endl;
				trouve = true;
			}
			else
			{
				cout << "Faux recommence" << endl;
				
				coupJouer++;

				cout << "Il te reste " << nbrDeCoups - coupJouer << " coups" << endl;
			}
		
		}

		if (!trouve)
		{
			cout << "Plus de coup !" << endl;
			cout << "La reponse etait : " << nouv << endl;
		}

		cout << "Recommencer ? Y ou N" << endl;

		char r(' ');

		cin >> r;

		if (r == 'N')
		{
			continuer = false;
		}

	}

	return 0;
}*/

