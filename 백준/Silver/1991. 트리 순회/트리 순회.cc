#include <iostream>
#include <vector>

using namespace std;

// - 문제
/*
1. 트리를 구현한다.
2. 트리의 각 순회 과정을 재귀로 구현한다.
*/

struct Node {
	char data = 0;
	Node* left = nullptr;
	Node* right = nullptr;
};

vector<Node*> nodeVec(26);

void preOrder(Node* node) // A - B - C
{
	if (node == nullptr)
		return;

	cout << node->data;
	preOrder(node->left);	
	preOrder(node->right);
}

void inOrder(Node* node) // B - A - C
{
	if (node == nullptr)
		return;
	
	inOrder(node->left);	
	cout << node->data;
	inOrder(node->right);	
}

void postOrder(Node* node) // C - B - A
{
	if (node == nullptr)
		return;

	postOrder(node->left);	
	postOrder(node->right);
	cout << node->data;
}

int main()
{
	int n;

	cin >> n;

	for (int i = 0; i < 26; i++)
	{
		Node* node = new Node;
		node->data = 'A' + i;
		nodeVec[i] = node;
	}
	char parent, leftChild, rightChild;

	while (n--)
	{		
		cin >> parent >> leftChild >> rightChild;

		if (leftChild != '.')
			nodeVec[parent - 'A']->left = nodeVec[leftChild - 'A'];
		
		if (rightChild != '.')
			nodeVec[parent - 'A']->right = nodeVec[rightChild - 'A'];			
	}

	//전위순회
	preOrder(nodeVec[0]);
	cout << '\n';
	//중위순회
	inOrder(nodeVec[0]);
	cout << '\n';
	//후위순회
	postOrder(nodeVec[0]);
	
	for (int i = 0; i<nodeVec.size(); i++)
	{
		if (nodeVec[i])
		{
			delete nodeVec[i];
			nodeVec[i] = nullptr;
		}
	}		
}