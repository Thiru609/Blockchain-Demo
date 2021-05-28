#include "block.h"
#include "sha256.h"
#include<time.h>
#include<sstream>
Block::Block(uint32_t nIndexIn, const string &sDataIn) : index(nIndexIn), data(sDataIn) 
{
	nonce = -1;
	ttime = time(nullptr);
}
string Block::GetHash() 
{
	return hash;
}
void Block::MineBlock(uint32_t nDifficulty) 
{
	char * cstr = new char[nDifficulty + 1];
	for (uint32_t i = 0; i < nDifficulty; ++i)
	{
		cstr[i] = '0';
	}
	cstr[nDifficulty] = '\0';

	string str(cstr);

	do
	{
		nonce++;
		hash = CalcHash();
	} while (hash.substr(0, nDifficulty) != str);

	cout << "Block mined: " << hash << endl;
}
inline string Block::CalcHash() const 
{
	stringstream ss;
	ss << index << ttime << data << nonce << PHash;

	return sha256(ss.str());
}
