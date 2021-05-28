#pragma once
#include <cstdint>
#include <vector>
#include "block.h"
using namespace std;
class Blockchain {
public:
	Blockchain();
    void AddBlock(Block bn);
private:
	uint32_t nDifficulty;
	vector<Block> BChain;

	Block GetLastBlock() const;
};
