//
// Created by Cameron CARRA on 18/02/17.
//

#ifndef MY_HEARTHSTONE_PLAYER_H
#define MY_HEARTHSTONE_PLAYER_H


class player {
private:
    char    *p_name;
    char    *p_class;
    int     p_hp;
    int     p_mp;
    char    **p_deck;

public:
    void init_player(char *name, char *class);
    void add_card_to_deck()
};


#endif //MY_HEARTHSTONE_PLAYER_H
