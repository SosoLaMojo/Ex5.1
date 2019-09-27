#include <iostream>
#include <time.h>

/*EXERCICE 5.1
Rendu Git
J�ai cr�er un repository qui s�appel Ex5.1(https://github.com/Surue/Ex5.1) que vous devez le fork chez vous.
Le lancer et faire en sorte que celui-ci compile et compl�ter les parties manquantes indiqu�e dans le fichier main.cpp.
Toutes ses modifications doivent �tre faite sur une nouvelle branche cr�� � partir de develop que vous appelez comme vous le voulez.
Vous faites un commit pour chaque fonction compl�t�e. Une fois l�exercices termin� vous devez merge les modifications de votre branch sur develop.
*/





enum class GameState {
	INIT,
	PLAY,
	END,
	EXIT
};

void GenerateMysteryNumber(unsigned int& mystery) {
	
	srand(time(NULL));

	int MAX_NUMBER = 101;
	
	mystery = (rand() % MAX_NUMBER);

}

int main() {

	GameState gameState = GameState::INIT;

	unsigned int mysteryNumber;

	while (gameState != GameState::EXIT);
	{


		switch (gameState) {
		case GameState::INIT:
			/*Cette partie doit donner une valeur � mysterNumber comprise entre 0 et 100*/
			
			GenerateMysteryNumber(mysteryNumber);
			gameState = GameState::PLAY;

			//std::cout << "le nombre mystere choisit est: " << mysteryNumber;
			break;

		case GameState::PLAY:
			/*
				Cette partie doit:
				- essayer de deviner le nombre myst�re � l'aide d'une function
				- Si le nombre myst�re est trouv� il faut passer � l'�tat END
			*/
			break;

		case GameState::END:
			/*
				Cette partie doit afficher le nombre de coups qui ont �t� n�cessaire pour trouver le nombre myst�re et indiquer quel est ce nombre myst�re
			*/
			break;

		case GameState::EXIT:
			break;
		}
		
	}
	
system("pause");
return EXIT_SUCCESS;
}