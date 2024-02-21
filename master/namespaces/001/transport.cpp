#include "transport.h"
#include <iostream>

namespace City 
{
    Transport::Transport() = default;

    Transport::Transport(
        Model model, Color color, int year, std::string_view license)
        : _model(model), _color(color), _year(year), _license(license)
    {
        std::cout << this->_license << " has been created" << std::endl;
    }
}

