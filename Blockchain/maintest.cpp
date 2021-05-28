#include "blockchain.h"
int main()
{
	int n;
	Blockchain BChain = Blockchain();
	cout << "Enter number Cryptocurrency blocks to be mined ";
	cin >> n;
	for (int i = 1; i <= n; i++)
	{
		cout << "Mining Block " << i;
		BChain.AddBlock(Block(i, " Block Data"));
	}
	return 0;
}