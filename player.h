//
// Created by Cameron CARRA on 18/02/17.
//

#ifndef MY_HEARTHSTONE_PLAYER_H
#define MY_HEARTHSTONE_PLAYER_H

#include <string>

class player {
    public:

        void init_player(std::string name, std::string class);
        void add_card_to_deck(std::string card, int nb_card);
        player get_p_name();

    private:

        std::string     p_name;
        std::string     p_class;
        int             p_hp;
        int             p_mp;
        char            **p_deck;
};


#endif //MY_HEARTHSTONE_PLAYER_H
