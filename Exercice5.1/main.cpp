#include <iostream>
#include <time.h>

/*EXERCICE 5.1
Rendu Git
J’ai créer un repository qui s’appel Ex5.1(https://github.com/Surue/Ex5.1) que vous devez le fork chez vous.
Le lancer et faire en sorte que celui-ci compile et compléter les parties manquantes indiquée dans le fichier main.cpp.
Toutes ses modifications doivent être faite sur une nouvelle branche créé à partir de develop que vous appelez comme vous le voulez.
Vous faites un commit pour chaque fonction complétée. Une fois l’exercices terminé vous devez merge les modifications de votre branch sur develop.
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
			/*Cette partie doit donner une valeur à mysterNumber comprise entre 0 et 100*/
			
			GenerateMysteryNumber(mysteryNumber);
			gameState = GameState::PLAY;

			//std::cout << "le nombre mystere choisit est: " << mysteryNumber;
			break;

		case GameState::PLAY:
			/*
				Cette partie doit:
				- essayer de deviner le nombre mystère à l'aide d'une function
				- Si le nombre mystère est trouvé il faut passer à l'état END
			*/
			break;

		case GameState::END:
			/*
				Cette partie doit afficher le nombre de coups qui ont été nécessaire pour trouver le nombre mystère et indiquer quel est ce nombre mystère
			*/
			break;

		case GameState::EXIT:
			break;
		}
		
	}
	
system("pause");
return EXIT_SUCCESS;
}