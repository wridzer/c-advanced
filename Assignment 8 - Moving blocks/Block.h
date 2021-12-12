#pragma once

// haal deze weg/zet hier commentaar voor om
// de move-semantics code uit te schakelen
#define MOVESEMANTICS

#include <string>
#include <ostream>

//#ifdef _MSC_VER
//#include "bw_msposix.h"
//#else
//#define _NOEXCEPT noexcept
//#endif

class Block {
    public:
        Block(int size, std::string name);
        // 'big three'
        virtual ~Block() noexcept; // destructor
        Block(const Block& other); // copy-constructor
        Block& operator=(const Block& other); // assignment-operator

#ifdef MOVESEMANTICS
        // nog nodig voor de 'big five'
        Block(Block&& other) noexcept; // move-constructor
        Block& operator=(Block&& other);
        //TODO: move-assignment operator
#endif

    private:
        std::string name;
        int* data;
        int size;

        friend std::ostream& operator<<(std::ostream& os, const Block& block);
};