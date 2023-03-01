#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
using namespace std;
using namespace sf;

int main()
{
    //créer la fenêtre
    Window window;
    window.create(VideoMode(600, 800), "Space Invaders");

    //boucle pour afficher la fenêtre 
    while (window.isOpen()) {
<<<<<<< Updated upstream
=======
        Event event;
        while (window.pollEvent(event)) {
            //gestion des inputs 
            InputHandler(event, window);
          
        }
        //couleur de la fenêtre
        window.clear(Color::Black);

        //les dessin sur l'écran
        //window.draw();

        //dessiner à l'écran
        window.display();


       
    }
>>>>>>> Stashed changes

    }

        return 0;
}