#include <bits/stdc++.h>

constexpr int WIDTH{20};

// Forward declaration
void PrintBit(unsigned char var);

int main()
{
    const unsigned char mask_bit_0{0b00000001};
    const unsigned char mask_bit_1{0b00000010};
    const unsigned char mask_bit_2{0b00000100};
    const unsigned char mask_bit_3{0b00001000};
    const unsigned char mask_bit_4{0b00010000};
    const unsigned char mask_bit_5{0b00100000};
    const unsigned char mask_bit_6{0b01000000};
    const unsigned char mask_bit_7{0b10000000};

    unsigned char var{0b00000000};
    PrintBit(var);

    /* SETTING BITS : |= with mask of the bit */

    std::cout << "Setting bit in index 1" << std::endl;
    var |= mask_bit_1;
    PrintBit(var);

    std::cout << "Setting bit in index 5" << std::endl;
    var |= mask_bit_5;
    PrintBit(var);

    /* RESETTING BITS : &= (~mask) */
    std::cout << "Resetting bit in index 1" << std::endl;
    var &= (~mask_bit_1);
    PrintBit(var);

    std::cout << "Resetting bit in index 5" << std::endl;
    var &= (~mask_bit_5);
    PrintBit(var);

    std::cout << "Setting all bits" << std::endl;
    var |= (mask_bit_0 | mask_bit_1 | mask_bit_2 | mask_bit_3 |
            mask_bit_4 | mask_bit_5 | mask_bit_6 | mask_bit_7);
    PrintBit(var);

    std::cout << "Resetting bit indices 1,3,5,7" << std::endl;
    var &= ~(mask_bit_1 | mask_bit_3 | mask_bit_5 | mask_bit_7);
    PrintBit(var);

    /* CHECKING STATE OF A BIT */
    std::cout << "Checking the state of each bit index (on/off)" << std::endl;
    std::cout << "bit 0 : " << ((var & mask_bit_0) >> 0) << std::endl;
    std::cout << "bit 1 : " << ((var & mask_bit_1) >> 1) << std::endl;
    std::cout << "bit 2 : " << ((var & mask_bit_2) >> 2) << std::endl;
    std::cout << "bit 3 : " << ((var & mask_bit_3) >> 3) << std::endl;
    std::cout << "bit 4 : " << ((var & mask_bit_4) >> 4) << std::endl;
    std::cout << std::boolalpha;
    std::cout << "bit 5 : " << static_cast<bool>(var & mask_bit_5) << std::endl;
    std::cout << "bit 6 : " << static_cast<bool>(var & mask_bit_6) << std::endl;
    std::cout << "bit 7 : " << static_cast<bool>(var & mask_bit_7) << std::endl;
    std::cout << std::endl;

    /* TOGGLE BITS : var ^ mask */
    std::cout << "Toggling bit 0" << std::endl;
    var ^= mask_bit_0;
    PrintBit(var);

    std::cout << "Toggling bit 7" << std::endl;
    var ^= mask_bit_7;
    PrintBit(var);

    return 0;
}

void PrintBit(unsigned char var)
{
    std::cout << "var: " << std::setw(WIDTH) << std::bitset<8>(var) << std::endl;
    std::cout << std::endl;
}