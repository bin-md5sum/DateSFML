#include <SFML/Graphics.hpp>
#include <ctime>
#include <sstream>

int main()
{
    auto window = sf::RenderWindow(sf::VideoMode({250u, 80u}), "Date", sf::Style::Close);
    std::string DateBuffer;
    window.setFramerateLimit(144);

    srand(time(NULL));

    const sf::Font font("NotoSerifTangut-Regular.ttf");
    sf::Text text(font, "2025/01/01", 50);

    while (window.isOpen())
    {
        DateBuffer.clear();
        while (const std::optional event = window.pollEvent())
        {
            if (event->is<sf::Event::Closed>())
            {
                window.close();
            }
        }

        time_t now = time(NULL);
        tm* localTime = std::localtime(&now);
        std::ostringstream dateStream;
        
        dateStream << (1900 + localTime->tm_year) << "/0"
                   << (1 + localTime->tm_mon) << "/"
                   << localTime->tm_mday;

        DateBuffer = dateStream.str();

        text.setString(DateBuffer);
        window.clear();
        window.draw(text);
        window.display();
    }
}
