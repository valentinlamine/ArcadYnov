#include "main.h"



//Variables globales
RenderWindow window;
Input input;
Font font;
Text txt;
Dino dino;
RectangleShape ground(Vector2f(WIN_WIDTH, 50));
int frames = 0;
bool canjump = true;
int BasePosY = WIN_WIDTH - 560;
int posY = WIN_WIDTH - 560;
//astuces pour afficher un chiffre sous forme de string
char temp[256];




int main() {
	//Options de la fenêtre 
	ContextSettings options;
	options.antialiasingLevel = 8;
	window.create(VideoMode(WIN_WIDTH, WIN_HEIGHT), "Oui", Style::Default, options);
	//window.setFramerateLimit(60);
	window.setVerticalSyncEnabled(true);

	
    
	//créer un rectangle de 200px de haut et de la largeur de l'écran situé sur le bas de l'écran
	ground.setFillColor(Color::Green);
	ground.setPosition(0, WIN_HEIGHT - 50);

	/*
    //charge l'image 
	dino.loadFromFile("src/dino.png");

    //transformation en sprite
	dinoTexture.loadFromImage(dino);
	dinoSprite.setTexture(dinoTexture);
	dinoSprite.setPosition(0, posY);
	*/
	LoadFont();
	SetText(txt, "Hello world");

    
    while (window.isOpen()) {
		Event event;
        while (window.pollEvent(event)) {
			if (event.type == Event::Closed) {
				window.close();
			}
        }
		update();
		render();
    }

    return 0;
}

void update() {
	dino.keyboard_input();
	dino.update(frames);
	frames = ((frames + 1) % 60) + 1;
}

void render() {
	window.clear(Color::Black);
	window.draw(ground);
	dino.draw(&window);
	window.draw(txt);
	window.display();
}

//Chargement police d'écriture
void LoadFont() {
	if (!font.loadFromFile("src/roboto.ttf")) {
		cout << "Error loading font" << endl;
	}
}

void SetText(Text &txt, String str) {
    txt.setFont(font);
    txt.setString(str);
    txt.setCharacterSize(24);
    txt.setFillColor(Color::Red);
    txt.setStyle(Text::Bold | Text::Underlined);
}

void CheckBtn() {
	/*
	if (input.GetButton().Jump) {
		if (posY > BasePosY - 80) {
			posY -= 3;
		}
		sprintf_s(temp, "%d", posY);
		SetText(txt, temp);
		
	}
	else {
		SetText(txt, "No Jump");
		if (posY < BasePosY) {
			posY += 3;
		}
		sprintf_s(temp, "%d", posY);
		SetText(txt, temp);
	}
	*/
}

void keyboard_input()
{
}
