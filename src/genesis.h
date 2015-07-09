#ifndef GENESIS_H
#define GENESIS_H

#include "bignum.h"

// Genesis block 0 hash

static const uint256 hashGenesisBlock("0000017cecc986be2b441613b9bb254e1da6a79ca9772b6faab5562fc67b14fa");
static const uint256 hashGenesisBlockTestNet("0000017cecc986be2b441613b9bb254e1da6a79ca9772b6faab5562fc67b14fa");
static const uint256 CheckPointBlock1("00000001d2a2ce5daddc7f416c02ad58d80f9e19239ba9c208aedb17e0d3e975");
static const uint256 CheckPointBlock2("bb659010d4ec36c84dc4d2b38ea8d2c3af58cc62cdc08f2f3ab591c2aa941552"); // checkpoint at block 54000

// TODO: Move Kernel checksum in here


#endif // GENESIS_H
