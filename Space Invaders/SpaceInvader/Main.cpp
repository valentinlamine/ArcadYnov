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

    }

        return 0;
}