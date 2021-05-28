#include "blockchain.h"
Blockchain::Blockchain() 
{
	BChain.emplace_back(Block(0, "Genesis Block"));
	nDifficulty = 4;
}
void Blockchain::AddBlock(Block bn) 
{
	bn.PHash = GetLastBlock().GetHash();
	bn.MineBlock(nDifficulty);
	BChain.push_back(bn);
}
Block Blockchain::GetLastBlock() const 
{
	return BChain.back();
}

