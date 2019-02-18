#include <SFML/Graphics.hpp>
#include <string>
sf::Font GlobalFont;
int match = 0; //which match in a row
int player1_points = 0;
int player2_points = 0;
char name[9] = "";
char second_name[9] = "";
bool first = true; //first movement of the match

void Welcome_Game(sf::RenderWindow &W);
//Check the winner
int Check(int tab[])
{
    if(tab[0] != 2 && tab[0] == tab[1] && tab[1] == tab[2])
        return tab[0];
    else if(tab[3] != 2 && tab[3] == tab[4] && tab[4] == tab[5])
        return tab[3];
    else if(tab[6] != 2 && tab[6] == tab[7] && tab[7] == tab[8])
        return tab[6];
    else if(tab[0] != 2 && tab[0] == tab[3] && tab[3] == tab[6])
        return tab[0];
    else if(tab[1] != 2 && tab[1] == tab[4] && tab[4] == tab[7])
        return tab[1];
    else if(tab[2] != 2 && tab[2] == tab[5] && tab[5] == tab[8])
        return tab[2];
    else if(tab[0] != 2 && tab[0] == tab[4] && tab[4] == tab[8])
        return tab[0];
    else if(tab[2] != 2 && tab[2] == tab[4] && tab[4] == tab[6])
        return tab[2];
    else
        return 2;
}
//input first name
void first_player(sf::RenderWindow &W, sf::RectangleShape input1, sf::Text show_name)
{

            static int name1_length = 0;
                while(true)
                {
                    sf::Event e;
                    if(e.type == sf::Event::Closed)
                        W.close();


                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && name1_length < 8)
                    {
                        name[name1_length] = 'Q';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) && name1_length < 8)
                    {
                        name[name1_length] = 'W';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::E) && name1_length < 8)
                    {
                        name[name1_length] = 'E';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::R) && name1_length < 8)
                    {
                        name[name1_length] = 'R';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::T) && name1_length < 8)
                    {
                        name[name1_length] = 'T';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Y) && name1_length < 8)
                    {
                        name[name1_length] = 'Y';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::U) && name1_length < 8)
                    {
                        name[name1_length] = 'U';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::I) && name1_length < 8)
                    {
                        name[name1_length] = 'I';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::O) && name1_length < 8)
                    {
                        name[name1_length] = 'O';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::P) && name1_length < 8)
                    {
                        name[name1_length] = 'P';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    /////////////////////////////////////////////////
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A) && name1_length < 8)
                    {
                        name[name1_length] = 'A';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S) && name1_length < 8)
                    {
                        name[name1_length] = 'S';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D) && name1_length < 8)
                    {
                        name[name1_length] = 'D';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::F) && name1_length < 8)
                    {
                        name[name1_length] = 'F';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::G) && name1_length < 8)
                    {
                        name[name1_length] = 'G';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::H) && name1_length < 8)
                    {
                        name[name1_length] = 'H';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::J) && name1_length < 8)
                    {
                        name[name1_length] = 'J';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::K) && name1_length < 8)
                    {
                        name[name1_length] = 'K';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::L) && name1_length < 8)
                    {
                        name[name1_length] = 'L';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && name1_length < 8)
                    {
                        name[name1_length] = 'Z';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::X) && name1_length < 8)
                    {
                        name[name1_length] = 'X';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::C) && name1_length < 8)
                    {
                        name[name1_length] = 'C';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::V) && name1_length < 8)
                    {
                        name[name1_length] = 'V';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::B) && name1_length < 8)
                    {
                        name[name1_length] = 'B';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::N) && name1_length < 8)
                    {
                        name[name1_length] = 'N';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::M) && name1_length < 8)
                    {
                        name[name1_length] = 'M';
                        sf::sleep(sf::milliseconds(100));
                        name1_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace) && name1_length >= 1)
                    {
                        name1_length--;
                        sf::sleep(sf::milliseconds(100));
                        name[name1_length] = ' ';
                    }
                    if(!(sf::Mouse::getPosition(W).x > 300 && sf::Mouse::getPosition(W).x < 500 && sf::Mouse::getPosition(W).y > 150 && sf::Mouse::getPosition(W).y < 190) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    {
                       input1.setOutlineThickness(0);
                       break;
                    }



                    show_name.setString(name);
                    W.draw(input1);
                    W.draw(show_name);
                    W.display();
                }
}
////////////////////////////////////////
//input second name
void second_player(sf::RenderWindow &W, sf::RectangleShape input2, sf::Text show_namend)
{
            static int name2_length = 0;
                while(true)
                {
                    sf::Event e;
                    if(e.type == sf::Event::Closed)
                        W.close();


                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Q) && name2_length < 8)
                    {
                        second_name[name2_length] = 'Q';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::W) && name2_length < 8)
                    {
                        second_name[name2_length] = 'W';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::E) && name2_length < 8)
                    {
                        second_name[name2_length] = 'E';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::R) && name2_length < 8)
                    {
                        second_name[name2_length] = 'R';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::T) && name2_length < 8)
                    {
                        second_name[name2_length] = 'T';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Y) && name2_length < 8)
                    {
                        second_name[name2_length] = 'Y';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::U) && name2_length < 8)
                    {
                        second_name[name2_length] = 'U';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::I) && name2_length < 8)
                    {
                        second_name[name2_length] = 'I';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::O) && name2_length < 8)
                    {
                        second_name[name2_length] = 'O';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::P) && name2_length < 8)
                    {
                        second_name[name2_length] = 'P';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    /////////////////////////////////////////////////
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::A) && name2_length < 8)
                    {
                        second_name[name2_length] = 'A';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::S) && name2_length < 8)
                    {
                        second_name[name2_length] = 'S';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::D) && name2_length < 8)
                    {
                        second_name[name2_length] = 'D';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::F) && name2_length < 8)
                    {
                        second_name[name2_length] = 'F';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::G) && name2_length < 8)
                    {
                        second_name[name2_length] = 'G';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::H) && name2_length < 8)
                    {
                        second_name[name2_length] = 'H';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::J) && name2_length < 8)
                    {
                        second_name[name2_length] = 'J';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::K) && name2_length < 8)
                    {
                        second_name[name2_length] = 'K';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::L) && name2_length < 8)
                    {
                        second_name[name2_length] = 'L';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Z) && name2_length < 8)
                    {
                        second_name[name2_length] = 'Z';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::X) && name2_length < 8)
                    {
                        second_name[name2_length] = 'X';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::C) && name2_length < 8)
                    {
                        second_name[name2_length] = 'C';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::V) && name2_length < 8)
                    {
                        second_name[name2_length] = 'V';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::B) && name2_length < 8)
                    {
                        second_name[name2_length] = 'B';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::N) && name2_length < 8)
                    {
                        second_name[name2_length] = 'N';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::M) && name2_length < 8)
                    {
                        second_name[name2_length] = 'M';
                        sf::sleep(sf::milliseconds(100));
                        name2_length++;
                    }
                    if(sf::Keyboard::isKeyPressed(sf::Keyboard::Backspace) && name2_length > 0)
                    {
                        name2_length--;
                        sf::sleep(sf::milliseconds(100));
                        second_name[name2_length] = ' ';
                    }
                    if(!(sf::Mouse::getPosition(W).x > 300 && sf::Mouse::getPosition(W).x < 500 && sf::Mouse::getPosition(W).y > 250 && sf::Mouse::getPosition(W).y < 290) && sf::Mouse::isButtonPressed(sf::Mouse::Left))
                    {
                       input2.setOutlineThickness(0);
                       break;
                    }



                    show_namend.setString(second_name);
                    W.draw(input2);
                    W.draw(show_namend);
                    W.display();
                }
}
void Drawing(sf::RenderWindow &W, int tab[]);
//playing
void Game(sf::RenderWindow &W)
{
int move; //whick move is now
static int tab[9]; //tab include position
    if(first)
    {
        for(int i = 0; i < 9; i++)
        {
            tab[i] = 2;
        }
    }

Drawing(W, tab); //drawing a board

sf::Event e;
static int turn; //which player is playing now
if(first)
{
    turn = 0;
    first = false;
    move = 0;
}
    while(true)
    {
        while(W.pollEvent(e))
            {
                if(e.type == sf::Event::Closed)
                    W.close();
            }
        //do a movement
        if(sf::Mouse::getPosition(W).x >= 210 && sf::Mouse::getPosition(W).x <= 333 && sf::Mouse::getPosition(W).y >= 103 && sf::Mouse::getPosition(W).y <=231 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[0] == 2)
        {
        //0
            if(turn == 0)
                {
                    tab[0] = 0;
                    Drawing(W, tab);
                    turn = 1;
                    move++;
                }
                else if(turn == 1)
                {
                   tab[0] = 1;
                   turn = 0;
                   Drawing(W, tab);
                   move++;
                }
        }

        if(sf::Mouse::getPosition(W).x >= 343 && sf::Mouse::getPosition(W).x <= 466 && sf::Mouse::getPosition(W).y >= 103 && sf::Mouse::getPosition(W).y <=231 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[1] == 2)
        {
        //1
            if(turn == 0)
            {
                tab[1] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
               tab[1] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }

        }

        if(sf::Mouse::getPosition(W).x >= 476 && sf::Mouse::getPosition(W).x <= 599 && sf::Mouse::getPosition(W).y >= 103 && sf::Mouse::getPosition(W).y <=231 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[2] == 2)
        {
        //2
            if(turn == 0)
            {
                tab[2] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
               tab[2] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }
        }

        if(sf::Mouse::getPosition(W).x >= 210 && sf::Mouse::getPosition(W).x <= 333 && sf::Mouse::getPosition(W).y >= 241 && sf::Mouse::getPosition(W).y <= 364 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[3] == 2)
        {
        //3
            if(turn == 0)
            {
                tab[3] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
               tab[3] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }
        }

        if(sf::Mouse::getPosition(W).x >= 343 && sf::Mouse::getPosition(W).x <= 466 && sf::Mouse::getPosition(W).y >= 241 && sf::Mouse::getPosition(W).y <= 364 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[4] == 2 && !(e.type == sf::Event::LostFocus))
        {
        //4
            if(turn == 0)
            {
                tab[4] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
                tab[4] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }
        }


        if(sf::Mouse::getPosition(W).x >= 476 && sf::Mouse::getPosition(W).x <= 599 && sf::Mouse::getPosition(W).y >= 241 && sf::Mouse::getPosition(W).y <= 354 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[5] == 2)
        {
        //5
            if(turn == 0)
            {
                tab[5] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
               tab[5] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }
        }

        if(sf::Mouse::getPosition(W).x >= 210 && sf::Mouse::getPosition(W).x <= 333 && sf::Mouse::getPosition(W).y >= 374 && sf::Mouse::getPosition(W).y <= 497 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[6] == 2)
        {
        //6;
            if(turn == 0)
            {
                tab[6] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
               tab[6] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }
        }

        if(sf::Mouse::getPosition(W).x >= 343 && sf::Mouse::getPosition(W).x <= 466 && sf::Mouse::getPosition(W).y >= 374 && sf::Mouse::getPosition(W).y <= 497 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[7] == 2)
        {
        //7
            if(turn == 0)
            {
                tab[7] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
               tab[7] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }
        }

        if(sf::Mouse::getPosition(W).x >= 476 && sf::Mouse::getPosition(W).x <= 599 && sf::Mouse::getPosition(W).y >= 374 && sf::Mouse::getPosition(W).y <= 497 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && tab[8] == 2)
        {
        //8
            if(turn == 0)
            {
                tab[8] = 0;
                turn = 1;
                Drawing(W, tab);
                move++;
            }
            else if(turn == 1)
            {
               tab[8] = 1;
               turn = 0;
               Drawing(W, tab);
               move++;
            }
        }
//end round
        if(Check(tab) == 1 || Check(tab) == 0 || move == 9)
        {

        int check = Check(tab); //who is the winner

        if((match % 2) == 0)
            {
               if(check == 0)
                        player1_points++;
                else if(check == 1)
                    player2_points++;
            }
            else if((match % 2) == 1)
            {
               if(check == 0)
                        player2_points++;
                else if(check == 1)
                    player1_points++;
            }


        sf::RenderWindow M(sf::VideoMode(350, 350, 32), "Tic Tac Toe"); //new window to interaction
        while(true)
        {
        sf::Event s;

        while(M.pollEvent(s))
        {
            if(s.type == sf::Event::Closed)
                {
                    M.close();
                    W.close();
                }
        }
        //look of M
        M.clear(sf::Color::Blue);
        sf::Text winner;
        winner.setFont(GlobalFont);
        winner.setFillColor(sf::Color::Black);
        winner.setPosition(30, 100);

        sf::Text winner1;
        winner1.setFont(GlobalFont);
        winner1.setFillColor(sf::Color::Black);
        winner1.setPosition(170, 100);

        if(check != 2)
        {
            winner.setString("WINNER: ");
            if(check == 0)
            {
                if(match%2 == 0)
                    winner1.setString(name);
                else
                    winner1.setString(second_name);


            }
            if(check == 1)
            {
                if(match%2 == 0)
                    winner1.setString(second_name);
                else
                    winner1.setString(name);

            }
            M.draw(winner);
            M.draw(winner1);
        }
        //draw (all positions all occupied
        else if(move == 9)
        {
            winner.setPosition(80, 100);
              winner.setString("DRAW!");
              M.draw(winner);
        }
//look of M
        sf::RectangleShape Button(sf::Vector2f(170, 40));
        Button.setFillColor(sf::Color::Black);
        Button.setPosition(70, 150);

        sf::Text Submit;
        Submit.setString("Play Again!");
        Submit.setFont(GlobalFont);
        Submit.setFillColor(sf::Color::White);
        Submit.setPosition(73, 153);

        sf::RectangleShape Button1(sf::Vector2f(170, 40));
        Button1.setFillColor(sf::Color::Black);
        Button1.setPosition(70, 200);

        sf::Text Submit1;
        Submit1.setString("Exit!");
        Submit1.setFont(GlobalFont);
        Submit1.setFillColor(sf::Color::White);
        Submit1.setPosition(123, 203);


        sf::Text Nick1;
        Nick1.setFont(GlobalFont);
        Nick1.setString(name);
        Nick1.setPosition(90, 10);
        Nick1.setFillColor(sf::Color::Black);
        M.draw(Nick1);

        sf::Text Nick2;
        Nick2.setFont(GlobalFont);
        Nick2.setString(second_name);
        Nick2.setPosition(90, 50);
        Nick2.setFillColor(sf::Color::Black);
        M.draw(Nick2);



        sf::Text Points1;
        std::string str_points1 = std::to_string(player1_points);
        Points1.setFont(GlobalFont);
        Points1.setString(str_points1);
        Points1.setPosition(250, 10);
        Points1.setFillColor(sf::Color::Black);
        M.draw(Points1);

        sf::Text Points2;
        std::string str_points2 = std::to_string(player2_points);
        Points2.setFont(GlobalFont);
        Points2.setString(str_points2);
        Points2.setPosition(250, 50);
        Points2.setFillColor(sf::Color::Black);
        M.draw(Points2);


        M.draw(Button);
        M.draw(Submit);
        M.draw(Button1);
        M.draw(Submit1);

        if(sf::Mouse::getPosition(M).x > 70 && sf::Mouse::getPosition(M).x < 240 && sf::Mouse::getPosition(M).y > 150 && sf::Mouse::getPosition(M).y < 190 && sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            //play again

            sf::sleep(sf::milliseconds(300));
            first = 1;

            match++;
            M.close();
            Game(W);


        }

        if(sf::Mouse::getPosition(M).x > 70 && sf::Mouse::getPosition(M).x < 240 && sf::Mouse::getPosition(M).y > 200 && sf::Mouse::getPosition(M).y < 240 && sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            //exit
            M.close();
            W.close();
        }


        for(int i = 0; i<9; i++)
            tab[i] = 2;


            M.display();
                 }


            }
        }



    }

//}


void Drawing(sf::RenderWindow &W, int tab[]) //drawing elements
{
W.clear(sf::Color::White);

static int move;
if(first)
    move = 0;

sf::Event e;
    //drawing
        sf::RectangleShape vertical_line1(sf::Vector2f(10, 414));
        vertical_line1.setFillColor(sf::Color::Black);
        vertical_line1.setPosition(200, 93);

        sf::RectangleShape vertical_line2(sf::Vector2f(10, 414));
        vertical_line2.setFillColor(sf::Color::Black);
        vertical_line2.setPosition(333, 93);

        sf::RectangleShape vertical_line3(sf::Vector2f(10, 414));
        vertical_line3.setFillColor(sf::Color::Black);
        vertical_line3.setPosition(466, 93);

        sf::RectangleShape vertical_line4(sf::Vector2f(10, 414));
        vertical_line4.setFillColor(sf::Color::Black);
        vertical_line4.setPosition(599, 93);


        sf::RectangleShape horizontal_line1(sf::Vector2f(399, 10));
        horizontal_line1.setFillColor(sf::Color::Black);
        horizontal_line1.setPosition(200, 93);

        sf::RectangleShape horizontal_line2(sf::Vector2f(399, 10));
        horizontal_line2.setFillColor(sf::Color::Black);
        horizontal_line2.setPosition(200, 231);

        sf::RectangleShape horizontal_line3(sf::Vector2f(399, 10));
        horizontal_line3.setFillColor(sf::Color::Black);
        horizontal_line3.setPosition(200, 364);

        sf::RectangleShape horizontal_line4(sf::Vector2f(399, 10));
        horizontal_line4.setFillColor(sf::Color::Black);
        horizontal_line4.setPosition(200, 497);

    sf::Text Player1;
    Player1.setFont(GlobalFont);
    Player1.setString(name);
    Player1.setPosition(50, 10);
    Player1.setFillColor(sf::Color::Black);

    sf::Text Player2;
    Player2.setFont(GlobalFont);
    Player2.setString(second_name);
    Player2.setPosition(50, 55);
    Player2.setFillColor(sf::Color::Black);

    sf::CircleShape circle_miniature(18);
    circle_miniature.setPosition(10, 10);
    circle_miniature.setFillColor(sf::Color::White);
    circle_miniature.setOutlineColor(sf::Color::Black);
    circle_miniature.setOutlineThickness(2);


    sf::Text X_miniature;
    X_miniature.setFillColor(sf::Color::Black);
    X_miniature.setFont(GlobalFont);
    X_miniature.setCharacterSize(40);
    X_miniature.setString("X");
    X_miniature.setPosition(15, 48);

     if(match%2 == 0)
    {
        circle_miniature.setPosition(10, 10);
        X_miniature.setPosition(15, 48);
    }

    if(match%2 == 1)
    {
        circle_miniature.setPosition(10, 55);
        X_miniature.setPosition(13, 3);
    }
    W.draw(circle_miniature);
W.draw(X_miniature);

circle_miniature.setPosition(740, 30);
X_miniature.setPosition(740, 20);

    sf::Text Points1;
    std::string str_points1 = std::to_string(player1_points);
    Points1.setFont(GlobalFont);
    Points1.setString(str_points1);
    Points1.setPosition(250, 10);
    Points1.setFillColor(sf::Color::Black);

    sf::Text Points2;
    std::string str_points2 = std::to_string(player2_points);
    Points2.setFont(GlobalFont);
    Points2.setString(str_points2);
    Points2.setPosition(250, 55);
    Points2.setFillColor(sf::Color::Black);

    sf::Text Move;
    Move.setFont(GlobalFont);
    Move.setString("Move: ");
    Move.setPosition(640, 25);
    Move.setFillColor(sf::Color::Black);


    sf::Text X;
    X.setCharacterSize(120);
    X.setFont(GlobalFont);
    X.setFillColor(sf::Color::Black);
    X.setString("X");

    sf::CircleShape O(55);
    O.setFillColor(sf::Color::White);
    O.setOutlineColor(sf::Color::Black);
    O.setOutlineThickness(2);
//Drawing X
        if(tab[0] == 1)
        {
            X.setPosition(230, 90);
            W.draw(X);
        }

        if(tab[1] == 1)
        {
            X.setPosition(363, 90);
            W.draw(X);
        }
        if(tab[2] == 1)
        {
            X.setPosition(496, 90);
            W.draw(X);
        }

        if(tab[3] == 1)
        {
            X.setPosition(230, 228);
            W.draw(X);
        }
        if(tab[4] == 1)
        {
            X.setPosition(363, 228);
            W.draw(X);
        }
        if(tab[5] == 1)
        {
            X.setPosition(496, 228);
            W.draw(X);
        }

        if(tab[6] == 1)
        {
            X.setPosition(230, 361);
            W.draw(X);
        }
        if(tab[7] == 1)
        {
            X.setPosition(363, 361);
            W.draw(X);
        }
        if(tab[8] == 1)
        {
            X.setPosition(496, 361);
            W.draw(X);
        }

// drawing O
        if(tab[0] == 0)
        {
            O.setPosition(216, 110);
            W.draw(O);
        }

        if(tab[1] == 0)
        {
            O.setPosition(349, 110);
            W.draw(O);
        }
        if(tab[2] == 0)
        {
            O.setPosition(482, 110);
            W.draw(O);
        }

        if(tab[3] == 0)
        {
            O.setPosition(216, 248);
            W.draw(O);
        }
        if(tab[4] == 0)
        {
            O.setPosition(349, 248);
            W.draw(O);
        }
        if(tab[5] == 0)
        {
            O.setPosition(482, 248);
            W.draw(O);
        }

        if(tab[6] == 0)
        {
            O.setPosition(216, 381);
            W.draw(O);
        }
        if(tab[7] == 0)
        {
            O.setPosition(349, 381);
            W.draw(O);
        }
        if(tab[8] == 0)
        {
            O.setPosition(482, 381);
            W.draw(O);
        }


//
if(move % 2 == 0)
    W.draw(circle_miniature);
else
W.draw(X_miniature);

    W.draw(Player1);
    W.draw(Player2);
        W.draw(vertical_line1);
        W.draw(vertical_line2);
        W.draw(vertical_line3);
        W.draw(vertical_line4);
        W.draw(horizontal_line1);
        W.draw(horizontal_line2);
        W.draw(horizontal_line3);
        W.draw(horizontal_line4);
        W.draw(Points1);
        W.draw(Points2);
        W.draw(Move);
    W.display();
    move++;


}


void Welcome_Game(sf::RenderWindow &W) //first screen
{
        sf::Text User1;
        sf::Text User2;
        sf::Text Welcome;
        sf::Text show_name;
        sf::Text show_namend;

        show_name.setFont(GlobalFont);
        show_name.setFillColor(sf::Color::Black);
        show_name.setPosition(303, 153);

        show_namend.setFont(GlobalFont);
        show_namend.setFillColor(sf::Color::Black);
        show_namend.setPosition(303, 253);

        Welcome.setString("Welcome to the Tic Tac Toe");
        Welcome.setFont(GlobalFont);
        Welcome.setFillColor(sf::Color::White);

        User1.setString("First Player: ");
        User1.setFont(GlobalFont);
        User1.setFillColor(sf::Color::White);

        User2.setString("Second Player: ");
        User2.setFont(GlobalFont);
        User2.setFillColor(sf::Color::White);

        sf::RectangleShape input1(sf::Vector2f(200, 40));
        sf::RectangleShape input2(sf::Vector2f(200, 40));
        input1.setFillColor(sf::Color::White);
        input2.setFillColor(sf::Color::White);

        User1.setPosition(300, 100);
        input1.setPosition(300, 150);
        User2.setPosition(300, 200);
        input2.setPosition(300, 250);
        Welcome.setPosition(200, 20);

        sf::RectangleShape Button(sf::Vector2f(200, 40));
        Button.setFillColor(sf::Color::Black);
        Button.setPosition(300, 300);

        sf::Text Submit;
        Submit.setString("Start Game!");
        Submit.setFont(GlobalFont);
        Submit.setFillColor(sf::Color::White);
        Submit.setPosition(310, 303);
        //Read name 1
        sf::Event e;

        while(true)
        {
            while(W.pollEvent(e))
            {
                if(e.type == sf::Event::Closed)
                    W.close();
            }
        if(sf::Mouse::getPosition(W).x > 300 && sf::Mouse::getPosition(W).x < 500 && sf::Mouse::getPosition(W).y > 150 && sf::Mouse::getPosition(W).y < 190 && sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            input1.setOutlineThickness(5);
            input1.setOutlineColor(sf::Color::Green);
            W.draw(input1);
            W.display();

                first_player(W, input1, show_name);
                show_name.setString(name);
                input1.setOutlineThickness(0);
                W.clear(sf::Color::Blue);
                W.draw(User1);
                W.draw(input1);
                W.draw(Welcome);
                W.draw(User2);
                W.draw(input2);
                W.draw(Button);
                W.draw(Submit);
                W.draw(show_name);
                W.draw(show_namend);
                W.display();

        }
        if(sf::Mouse::getPosition(W).x > 300 && sf::Mouse::getPosition(W).x < 500 && sf::Mouse::getPosition(W).y > 250 && sf::Mouse::getPosition(W).y < 290 && sf::Mouse::isButtonPressed(sf::Mouse::Left))
        {
            input2.setOutlineThickness(5);
            input2.setOutlineColor(sf::Color::Green);
            W.draw(input2);
            W.display();

                second_player(W, input2, show_namend);
                show_namend.setString(second_name);
                input2.setOutlineThickness(0);
        }

        if(sf::Mouse::getPosition(W).x > 300 && sf::Mouse::getPosition(W).x < 500 && sf::Mouse::getPosition(W).y > 300 && sf::Mouse::getPosition(W).y > 300 && sf::Mouse::getPosition(W).y < 340 && sf::Mouse::isButtonPressed(sf::Mouse::Left) && (name[0] != '\0') && (second_name[0] != '\0'))
        {
            sf::sleep(sf::milliseconds(100));
            Game(W);
        }




        W.clear(sf::Color::Blue);
        W.draw(User1);
        W.draw(input1);
        W.draw(Welcome);
        W.draw(User2);
        W.draw(input2);
        W.draw(Button);
        W.draw(Submit);
        W.draw(show_name);
        W.draw(show_namend);


        W.display();
        }
        W.close();

}


int main()
{

    GlobalFont.loadFromFile("OpenSans-Bold.ttf");
    sf::RenderWindow W(sf::VideoMode(800, 600, 32), "Tic Tac Toe");

    W.setFramerateLimit(30);
    while(W.isOpen())
    {
        sf::Event e;

        Welcome_Game(W);

        while(W.pollEvent(e))
        {


            if(e.type == sf::Event::Closed)
                W.close();


        }

    }
}
