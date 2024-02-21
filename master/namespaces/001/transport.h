#ifndef TRANSPORT_H
#define TRANSPORT_H

#include <iostream>

namespace City
{
    class Transport 
    {
    public:
        enum Model { CAR, MRT, MOTROCYCLE, BUS, TAXI };
        enum Color { RED, BLUE, BLACK, YELLOW, GREEN, ORANGE };

        // Constructor
        Transport();
        Transport(Model model, Color color, int year, std::string_view license);

    private:
        Model _model;
        Color _color;
        int _year;
        std::string_view _license;
    };
}


#endif