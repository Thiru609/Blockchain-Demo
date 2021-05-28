#pragma once
#include <cstdint>
#include <iostream>
using namespace std;
class Block {
public:
	string PHash;
	Block(uint32_t nIndexIn, const string &sDataIn);
    string GetHash();
	void MineBlock(uint32_t nDifficulty);
private:
	uint32_t index;
	int64_t nonce;
	string data;
	string hash;
	time_t ttime;
    string CalcHash() const;
};








