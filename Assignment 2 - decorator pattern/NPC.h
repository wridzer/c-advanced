//
// Created by Wridzer on 21/11/2021.
//

#ifndef ASSIGNMENT_2___DECORATOR_PATTERN_NPC_H
#define ASSIGNMENT_2___DECORATOR_PATTERN_NPC_H


class NPC {

public:
    NPC();
    ~NPC();

    virtual void Render() = 0;

protected:
    int strength;
    int speed;

};


#endif //ASSIGNMENT_2___DECORATOR_PATTERN_NPC_H
