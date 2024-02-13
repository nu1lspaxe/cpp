#include "default.h"

std::string_view GetText(Gender g)
{
    switch (g)
    {
        using enum Gender;

    case Male:
        return "Male";

    case Female:
        return "Female";

    case Other:
        return "Other";

    default:
        return "Undefine";
    }
}
