#include <SFML/Graphics.hpp>
using namespace sf;

const int PERSO_HEIGHT = 700 - 90;

class Perso
{
public:
    Perso() : velocity(0, 0),
        gravity(0, 0.98),
        rect(0, 0, 50, 43)
    {
        jump = false;
        ground = true;
        texture.loadFromFile("Fichiers de ressources/images/player.jpg");
        perso.setTexture(texture);
        perso.setTextureRect(rect);
        perso.setPosition(50, PERSO_HEIGHT);
        position = Vector2f(perso.getPosition());
        t = 0;
    }


    ~Perso() {}

    void draw(RenderWindow* window)
    {
        window->draw(perso);
    }

    void keyboard_input()
    {
        if (Keyboard::isKeyPressed(Keyboard::Space) && ground)
        {
            velocity.y = -16;
            jump = true;
            ground = false;
        }
    }

    void update(int frames)
    {
        position += velocity;
        if (!ground)
        {
            velocity += gravity;
            if (position.y >= PERSO_HEIGHT)
            {
                position.y = PERSO_HEIGHT;
                ground = true;
                jump = false;
                velocity.y = 0;
            }
        }

        rect = IntRect(t, 0, 50, 43);

        if (frames % 12 == 0)
            t = (t + 50) % 100;

        perso.setTextureRect(rect);
        perso.setPosition(position);

        if (ground)
            velocity = Vector2f(0, 0);
    }

private:
    Vector2f position;
    Vector2f velocity;
    Vector2f gravity;
    Texture texture;
    Sprite perso;
    IntRect rect;
    int t;
    bool jump;
    bool ground;
};