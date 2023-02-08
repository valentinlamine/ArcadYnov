#include <SFML/Graphics.hpp>
//prout mdr 
int main()
{
    sf::RenderWindow window(sf::VideoMode(1080, 500), "Pong!");
	sf::RectangleShape rect1(sf::Vector2f(100, 200));
	sf::RectangleShape rect2(sf::Vector2f(100, 200));
    
    
	rect1.setFillColor(sf::Color::Red);
	rect2.setFillColor(sf::Color::Blue);
	rect1.setPosition(0, 0);
	rect2.setPosition(980, 0);
    
	

    
    

	

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))  //Boucle while qui dit que tant que l'ecrans et ouvert et que on ne ferme pas le prog continu de tourner    
        {
            if (event.type == sf::Event::Closed)
                window.close();
        }

        
                            //Dessine les deux rectangle rouge et bleu 
		window.clear();
		window.draw(rect1);
		window.draw(rect2);
        window.display();

    }

    return 0;
}