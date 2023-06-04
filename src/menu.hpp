#pragma once

#include <SFML/Graphics.hpp>
#include <SFML/Audio.hpp>
#include<iostream>
#include<time.h>
#include <random>

class GeneralGame {

	int NumericKeyBoard, vel, volumePosition, x, i, yy, linha, coluna, dim,
			Bomb, c, Cont = -1, ContFire = -1;
	int CoordX[100] = { 0 };
	int CoordY[100] = { 0 };

	int CaravelaClicks = 5;
	int Caravelapoints = 0;

	int VeleiroClikcs = 2;
	int Veleiropoints = 0;

	int FireCoordX[100] = { 0 };
	int FireCoordY[100] = { 0 };

	int TercoClikcs = 3;
	int Tercopoints = 0;

	int FlutyClikcs = 4;
	int Flutypoints = 0;

	int TercoCoordX = 0;
	int TercoCoordY = 0;

	int flutyCoordX = 0;
	int flutyCoordY = 0;

	int VELEIROCoordY = 0;
	int VELEIROCoordX = 0;

	char Points1[2];
	char Points2[2];
	char Points3[2];
	char Points4[2];
	char Bombs[15];

	bool ChaveConfigs, ChaveLobby, ChaveLevels, ChaveGame, VolumeLigado,
			Infinitygame, ChaveFinalGame;
	bool KeyDown, KeyUP, KeyLeft, KeyRight, Mouse_Left, SelecionadoEnter;
	bool barcovisible = false;

	bool Caravelavisible = false;
	bool Veleirovisible = false;
	bool Veleirovisible2 = false;
	bool Veleirovisible3 = false;
	bool Veleirovisible4 = false;
	bool Flutyvisible = false;
	bool Flutyvisible2 = false;

	bool VitoriaFinal = false;
	//////////////////////////////////////////////////////////Base barcos//////////////////////////////////////////////////////////////////////////////////

	int VeleiroUm = 2;
	int VeleiroDois = 2;
	int VeleiroTres = 2;
	int VeleiroQuatro = 2;

	bool Veleiro1 = true;
	bool Veleiro2 = false;
	bool Veleiro3 = false;
	bool Veleiro4 = false;

	bool Tercovisible = false;
	bool Tercovisible2 = false;
	bool TesteBombs = false;
	int FlutyUm = 4;
	int FlutyDois = 4;

	int TercoUm = 3;
	int TercoDois = 3;
	int TercoTres = 3;
	int p;
	int MOdoGame;

	////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////////
	sf::RenderWindow Window;
	sf::RectangleShape boxes[10][10];
	sf::RectangleShape SelctMouse;
	sf::RectangleShape SelctMouse2;
	sf::RectangleShape BarcoPosition1;
	sf::RectangleShape SelectConfig;
	sf::RectangleShape SelectPlayLevels;
	sf::RectangleShape Coordenadas_ButtonVolume;
	sf::Font *font;
	sf::Font *Numberfont;
	sf::Texture image;
	sf::Sprite bg;

	//texture barcos e fogo
	sf::Texture Barco01;
	sf::Texture Barco02;
	sf::Texture Barco03;
	sf::Texture Barco04;
	sf::Texture Barco05;
	sf::Texture Fire;

	//sprites barcos e fogo
	sf::Sprite SpriteBarco01;  //4casas vertivcal
	sf::Sprite SpriteBarco02;
	sf::Sprite SpriteBarco03;
	sf::Sprite SpriteBarco04;
	sf::Sprite SpriteBarco05;
	sf::Sprite SpriteBarco06;
	sf::Sprite SpriteBarco07;
	sf::Sprite SpriteBarco08;
	sf::Sprite SpriteBarco09;
	sf::Sprite SpriteBarco10;
	sf::Sprite SpriteFire;

	sf::Sprite Iconterco;
	sf::Sprite Iconterco2;
	sf::Sprite IconFluty;
	sf::Sprite IconVeleiro;
	sf::Sprite IconCaravela;

	//Points
	sf::Text Number1;
	sf::Text Number2;
	sf::Text Number3;
	sf::Text Number4;
	sf::Text NumberBombs;

	sf::Texture VolumeImage;
	sf::Sprite VolumeBg;

	sf::Texture XImage;
	sf::Sprite XSprite;

	sf::SoundBuffer Atingido;
	sf::SoundBuffer Fogo;
	sf::SoundBuffer Agua;
	sf::SoundBuffer Tiro;
	sf::Sound agua;
	sf::Sound tiro;
	sf::Sound fogo;

	sf::Music *music;
	sf::Text text1;
	sf::Text text2;
	sf::Text text3;
	sf::Text text4;
	sf::Text text5;
	sf::Text tabuleiro;
	sf::Text text6;
	sf::Text text7;
	sf::Text text8;
	sf::Text text9;
	sf::Text text10;
	sf::Text textTitulo;
	sf::Text SubtextTitulo;
	sf::Vector2i pos_mouse;
	sf::Vector2f mouse_coord;
	bool sa = false;

	std::vector<const char*> options;
	std::vector<sf::Vector2f> coords;
	std::vector<sf::Text> texts;
	std::vector<std::size_t> sizes;

	enum Celulas {

		AGUA,
		FIRE,
		Xarp,
		BARCO,
		CARAVELA,
		TERCO,
		TERCO2,
		TERCO3,
		FLUTY,
		FLUTY2,
		VELEIRO,
		VELEIRO2,
		VELEIRO3,
		VELEIRO4,
		Definition

	};

	Celulas matriz[10][10];
	Celulas Verifica[10][10];
	Celulas VerificaFogo[10][10];
	bool past = false;
protected:

	void set_valores();
	void loop_events();
	void desenhar();
	void Configs();
	void Lobby();
	void Set_Lobby();

	void Levels();
	void Game();

	void desenhaX();
	void desenhaBarco();
	void desenhaFire();
	void desenhaRetangulos();
	void FinalGame();

	void ZerarGame();
	void Clear();
	void ClearMinipoints();
	void Points();

	void gerarVeleiro1(int tamNavio);
	void gerarVeleiro2(int tamNavio);
	void gerarVeleiro3(int tamNavio);
	void gerarVeleiro4(int tamNavio);

	void gerarTerco1(int tamNavio);
	void gerarTerco2(int tamNavio);

	void gerarFluty1(int tamNavio);
	void gerarFluty2(int tamNavio);

	void gerarBarcoV(int tamNavio);
	void gerarBarcoH(int tamNavio);

public:
	GeneralGame();
	~GeneralGame();
	void run_menu();
};
