#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace std;
using namespace sf;

int main()
{
    //cr�er la fen�tre
    Window window;
    window.create(VideoMode(600, 800), "Space Invaders");

    //boucle pour afficher la fen�tre 
    while (window.isOpen()) {
<<<<<<< Updated upstream
=======
        Event event;
        while (window.pollEvent(event)) {
            //gestion des inputs 
            InputHandler(event, window);
          
        }
        //couleur de la fen�tre
        window.clear(Color::Black);

        //les dessin sur l'�cran
        //window.draw();

        //dessiner � l'�cran
        window.display();


       
    }
>>>>>>> Stashed changes

    }

        return 0;
}