#include <SFML/Graphics.hpp>
#include <SFML/Window.hpp>
#include "Main.h"
using namespace std;
using namespace sf;

//PROTOTYPES 
void InputHandler (Event event, RenderWindow& window);

int main()
{
    //cr�er la fen�tre
    RenderWindow window(VideoMode(800, 600), "Space Invaders");
    //activation vsync
    window.setVerticalSyncEnabled(true);

    //boucle pour afficher la fen�tre 
    while (window.isOpen()) {
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

        

        return 0;
    }




void InputHandler(Event event, RenderWindow& window)
{
    //gestion fermeture de la fenetre 
    if (event.type == Event::Closed)
    {
        window.close();
    }

    //gestion entr� clavier 
    if (event.type == Event::KeyPressed)
    {
        if (event.type == Keyboard::Left)
        {

        }
    }
    if (event.type == Event::KeyPressed) 
    {
        if (event.type == Keyboard::Right) 
        {

        }
    }
}

