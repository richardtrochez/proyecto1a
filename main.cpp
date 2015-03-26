#include <iostream>
#include <SFML/Graphics.hpp>
#include <stack>

using namespace std;

class Nodo {
public:

string dato;

Nodo *Siguiente;
		Nodo(string dato)
		{
		  this->dato=dato;
		  Siguiente =0;
		}

};


class Pila{

public:
	Nodo *Tope;

	Pila()
	{
	  Tope=0;
	}

~Pila()
	{
	  while(isEmpty()==false)
	  {
		Pop();
	  }
	}

	bool isEmpty()
	{
	  return Tope==0;
	}


string Pop()
	{
		if(!isEmpty())
		{
		   Nodo *Temporal = Tope;
		   Tope=Tope->Siguiente;

		   string auxiliar = Temporal->dato;
		   delete Temporal;
		   return auxiliar;
		}
		else
		{
			return "";
		}
	}


string top()
	{
		if(!isEmpty())
		{
			return Tope->dato;
		}
		else
		{
			return "";
		}
	}

void Push(string valor)  ///metodo utilizado para agregar una nueva imagen
	{
	   Nodo *Nuevo = new Nodo(valor);
	   Nuevo->Siguiente = Tope;
	   Tope=Nuevo;
	}

};


int main(){
///creamos dos pilas una utilizada para agregar un sprite en el programa y la otra que carga una imagen en negro
Pila Mi_pila1=Pila();
Pila Mi_pila2=Pila();

///inicio las variables que le vamos a asiganar a las imagenes.
///nota: las variables estan con ball debido a que inicialmente el programa estaba representado con bolas de billar y con la libreria std stack
string ball1;
string ball2;
string ball3;
string ball4;
string ball5;
string ball6;
string ball7;
string ball8;
string ball9;
string ball10;
string pop_ball;     ///creo una variable utilizada para sacar una imagen
string top_ball;    ///creo una variable utilizada para cargar el tope de la pila
string centinela; ///creo una variable que cambiara segun se corra el programa, mas abajo se detalla su funcion


/// cargo mis imagenes a mi pila1 utilizando el metodo Push()
Mi_pila1.Push("1.png");
Mi_pila1.Push("2.png");
Mi_pila1.Push("3.png");
Mi_pila1.Push("4.png");
Mi_pila1.Push("5.png");
Mi_pila1.Push("6.png");
Mi_pila1.Push("7.png");
Mi_pila1.Push("8.png");
Mi_pila1.Push("9.png");
Mi_pila1.Push("10.png");
///a mi varaiable centinela le doy la direcccion de mi imgaen que se utilizara para indicar que se saco un valor de la pila
centinela=("delete.png");
///creo un valor top con el ultimo valor que le ingrese a mi pila
top_ball=("10.png");


///creo una ventana de 2000 de alto por 1000 de ancho con el titulo en casa pr1
sf::RenderWindow Window(sf::VideoMode(2000,1000),"en casa pr1");


/// creo una textura para la imagen 1, cargo la textura con el valor que esta almacenado en mi top de la pila, una vez que lo tengo cargado saco un valor de la pila
    sf::Texture texture1_mi_pila_1;
    texture1_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball1=Mi_pila1.Pop();
    sf::Sprite sprite1_mi_pila_1(texture1_mi_pila_1); ///le asigno un sprite a la textura para la imagen 1.
    sprite1_mi_pila_1.move(40,50);         ///desplazo la imagen en la fila 40 columna 50


///utilizo el mismo metodo para las 9 imagenes restante:
///creo una textura para asignarle un sprite luego
/// a la textura se le va asignar el valor almacenado  en el top de mi pila
///saco el valor del top con un metodo pop
///creo un sprite que almacenara la textura de la imagen
/// muevo la imagen
    sf::Texture texture2_mi_pila_1;
    texture2_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball2=Mi_pila1.Pop();
    sf::Sprite sprite2_mi_pila_1(texture2_mi_pila_1);
    sprite2_mi_pila_1.move(40,250);

    sf::Texture texture3_mi_pila_1;
    texture3_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball3=Mi_pila1.Pop();
    sf::Sprite sprite3_mi_pila_1(texture3_mi_pila_1);
    sprite3_mi_pila_1.move(40,430);


    sf::Texture texture4_mi_pila_1;
    texture4_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball4=Mi_pila1.Pop();
    sf::Sprite sprite4_mi_pila_1(texture4_mi_pila_1);
    sprite4_mi_pila_1.move(40,600);

    sf::Texture texture5_mi_pila_1;
    texture5_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball5=Mi_pila1.Pop();
     sf::Sprite sprite5_mi_pila_1(texture5_mi_pila_1);
    sprite5_mi_pila_1.move(40,800);


    sf::Texture texture6_mi_pila_1;
    texture6_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball6=Mi_pila1.Pop();
    sf::Sprite sprite6_mi_pila_1(texture6_mi_pila_1);
    sprite6_mi_pila_1.move(400,50);

    sf::Texture texture7_mi_pila_1;
    texture7_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball7=Mi_pila1.Pop();
    sf::Sprite sprite7_mi_pila_1(texture7_mi_pila_1);
    sprite7_mi_pila_1.move(400,250);

    sf::Texture texture8_mi_pila_1;
    texture8_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball8=Mi_pila1.Pop();
    sf::Sprite sprite8_mi_pila_1(texture8_mi_pila_1);
    sprite8_mi_pila_1.move(400,430);

    sf::Texture texture9_mi_pila_1;
    texture9_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball9=Mi_pila1.Pop();
    sf::Sprite sprite9_mi_pila_1(texture9_mi_pila_1);
    sprite9_mi_pila_1.move(400,600);

    sf::Texture texture10_mi_pila_1;
    texture10_mi_pila_1.loadFromFile(Mi_pila1.top());
    ball10=Mi_pila1.Pop();
    sf::Sprite sprite10_mi_pila_1(texture10_mi_pila_1);
    sprite10_mi_pila_1.move(400,800);

///le asigno una imagen a mi pantalla
    sf::Texture back_image;
    back_image.loadFromFile("xyz.jpg");
    sf::Sprite spritefondo(back_image);

/// creo una imagen para mostrar el top de la pila y le asigno una posicion
    sf::Texture textop;
    textop.loadFromFile("TOP.png");
    sf::Sprite stextop(textop);
    stextop.move(1780,10);

///creo un sprite para indicar las teclas que se van a utilizar para sacar elementos

    sf::Texture instrucciones;
    instrucciones.loadFromFile("DIGITE.png");
    sf::Sprite sinstrucciones(instrucciones);
    sinstrucciones.move(1700,250);

///muestro una imagen de las teclas a utilizar
    sf::Texture botones;
    botones.loadFromFile("BOTONES.png");
    sf::Sprite sboton(botones);
    sboton.move(1750,300);


///incio 10 variables que se van a asignar para las teclas que se van a utilizar para sacar elementos de la pila
    int tecla1= 1;
    int tecla2 = 2;
    int tecla3 = 3;
    int tecla4 = 4;
    int tecla5 = 5;
    int tecla6 = 6;
    int tecla7 = 7;
    int tecla8 = 8;
    int tecla9 = 9;
    int tecla10 = 10;

///  creo un ciclo que funcione mientras la ventana que cree  dibuje las imagenes
///a)fondo
///b)botones
///c)instrucciones
///d)top de la pila
///los 10 elementos de mi pila
    while (Window.isOpen())
    {
        Window.draw(spritefondo,sf::RenderStates::Default); //se dibuja el fondo en pantalla
        Window.draw(sboton,sf::RenderStates::Default);
        Window.draw(sinstrucciones,sf::RenderStates::Default);
        Window.draw(stextop,sf::RenderStates::Default);
        Window.draw(sprite1_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite2_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite3_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite4_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite5_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite6_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite7_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite8_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite9_mi_pila_1,sf::RenderStates::Default);
        Window.draw(sprite10_mi_pila_1,sf::RenderStates::Default);


        Window.display();
        sf::Event event;

        while (Window.pollEvent(event))
        {

            if (event.type == sf::Event::Closed) /// si se le da click a la x en mi ventana que cierre mi ventana
            {
                Window.close();

            }
///si presiono escape tecla entonces que de igual forma me cierre mi ventana
            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Escape)) //si se presiona ESC
            {
                Window.close();

            }

            ///condiciones utilizadas para sacar las imagenes
            /// si presiono 1 entonces que dibjue el una textura para el tope, cargo el tope con la imagen del siguiente valor. muevo la imagen y la muestro en pantalla
            ///eventualmente hago esto para las 9 variables restantes

            if(tecla1==1)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num1)) //verifica si se le da click a la primera pila
                {

                    texture1_mi_pila_1.loadFromFile(centinela);

                    sf::Texture tope;
                    tope.loadFromFile(ball2);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default); ///dibujo en  pantalla el valor de la siguiente imagen


                }
            }
            if(tecla2==2)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num2)) //verifica si se le da click a la primera pila
                {

                    texture2_mi_pila_1.loadFromFile(centinela);
                    sf::Texture tope;
                    tope.loadFromFile(ball3);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);



                }
            }
            if(tecla3==3)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num3))
                {
                    Mi_pila2.Push(ball3);
                    texture3_mi_pila_1.loadFromFile(centinela);

                    sf::Texture tope;
                    tope.loadFromFile(ball4);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);
                }
            }
            if(tecla4==4)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num4))
                {
                    Mi_pila2.Push(ball4);

                    texture4_mi_pila_1.loadFromFile(centinela);
                    sf::Texture tope;

                    tope.loadFromFile(ball5);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);

                }
            }
            if(tecla5==5)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num5))
                {
                    Mi_pila2.Push(ball6);
                    texture5_mi_pila_1.loadFromFile(centinela);
                    sf::Texture tope;
                    tope.loadFromFile(ball6);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);


                }
            }
            if(tecla6==6)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num6)) //verifica si se le da click a la primera pila
                {
                    Mi_pila2.Push(ball6);
                    texture6_mi_pila_1.loadFromFile(centinela);
                    sf::Texture tope;
                    tope.loadFromFile(ball7);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);
                }
            }
            if(tecla7==7)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num7))
                {
                    Mi_pila2.Push(ball7);
                    texture7_mi_pila_1.loadFromFile(centinela);
                    sf::Texture tope;
                    tope.loadFromFile(ball8);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);

                }
            }
            if(tecla8==8)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num8))
                {
                    Mi_pila2.Push(ball8);
                    texture8_mi_pila_1.loadFromFile(centinela);
                    sf::Texture tope;
                    tope.loadFromFile(ball9);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);

                }
            }
            if(tecla9==9)
            {
                if ((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num9))
                {
                    Mi_pila2.Push(ball9);
                    texture9_mi_pila_1.loadFromFile(centinela);

                     sf::Texture tope;
                    tope.loadFromFile(ball10);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);
                }
            }
            if(tecla10==10)
            {

            if((event.type == sf::Event::KeyPressed) && (event.key.code == sf::Keyboard::Num0))
                {
                    Mi_pila2.Push(ball10);
                    texture10_mi_pila_1.loadFromFile(centinela);

                   sf::Texture tope;
                    tope.loadFromFile(centinela);
                    sf::Sprite spritetope(tope);
                    spritetope.move(1800,110);
                    Window.draw(spritetope,sf::RenderStates::Default);
                }
            }


        }


    }

return 0;
}

