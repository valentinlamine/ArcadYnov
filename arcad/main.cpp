#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(1080, 500), "Pong!");
	sf::CircleShape shape(20.f);
	sf::RectangleShape rect1(sf::Vector2f(50, 200));
	sf::RectangleShape rect2(sf::Vector2f(50, 200));
 
    
    
	rect1.setFillColor(sf::Color::Red);
	rect2.setFillColor(sf::Color::Blue);
	rect1.setPosition(0, 0);
	rect2.setPosition(1035, 0);
	shape.setFillColor(sf::Color::Green);
	shape.move(500, 250);
	
	// move up rect2 par rapport a la touche z
	bind z = sf::Keyboard::Z;
	// move down rect2 par rapport a la touche s
	bind s = sf::Keyboard::S;
	if (sf::Keyboard::isKeyPressed(z))
		rect1.move(0, -1);
		shape.move(0, -1);
	
	if (sf::Keyboard::isKeyPressed(s))
		rect1.move(0, 1);
		shape.move(0, 1);
	
	

    

    
	

    
    

	

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
		window.draw(shape);
        window.display();

    }

    return 0;
}