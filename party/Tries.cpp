#include <map>
#include <set>
#include <list>
#include <cmath>
#include <ctime>
#include <deque>
#include <queue>
#include <stack>
#include <string>
#include <bitset>
#include <cstdio>
#include <limits>
#include <vector>
#include <climits>
#include <cstring>
#include <cstdlib>
#include <fstream>
#include <numeric>
#include <sstream>
#include <iostream>
#include <algorithm>
#include <unordered_map>
#define CHAR_TO_INDEX(c) ((int)c - (int)'a')
#define ARRAY_SIZE(a) sizeof(a)/sizeof(a[0])
 
// Alphabet size (# of symbols)
#define ALPHABET_SIZE (26)
using namespace std;

struct TrieNode
{
     struct TrieNode *children[ALPHABET_SIZE];
     bool isLeaf;
     int number_of_children;
};
struct TrieNode *getNode(void)
{
    struct TrieNode *pNode = NULL;
 
    pNode = (struct TrieNode *)malloc(sizeof(struct TrieNode));
 
    if (pNode)
    {
        int i;
 
        pNode->isLeaf = false;
 
        for (i = 0; i < ALPHABET_SIZE; i++)
            pNode->children[i] = NULL;
    }
 
    return pNode;
}
void insert(struct TrieNode *root, const char *key)
{
    int level;
    int length = strlen(key);
    int index;
 
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
        if (!pCrawl->children[index])
        { 
          pCrawl->children[index] = getNode();
          pCrawl->number_of_children+=1;
          pCrawl->children[index]->number_of_children=0; 
        }
        else
        	pCrawl->number_of_children+=1;
        pCrawl = pCrawl->children[index];

    }
 
    // mark last node as leaf
    pCrawl->number_of_children+=1; 
    pCrawl->isLeaf = true;
}

int search(struct TrieNode *root, const char *key)
{
    int level;
    int length = strlen(key);
    int index;
    struct TrieNode *pCrawl = root;
 
    for (level = 0; level < length; level++)
    {
        index = CHAR_TO_INDEX(key[level]);
 
        if (!pCrawl->children[index])
            return false;
 
        pCrawl = pCrawl->children[index];
    }
 
    if(pCrawl != NULL) 
    {
        return pCrawl->number_of_children;
    }
    else
    {
        return 0;
    }
    
}



int main(){
    struct TrieNode *root = getNode();
    int n;
    cin >> n;
    for(int a0 = 0; a0 < n; a0++){
        char op [21];
        char contact [21];
        cin >> op >> contact;
        if (strcmp(op,"add")==0)
        {
           insert(root, contact);
        }
        else if (strcmp(op,"find")==0)
        {
           cout<<search(root, contact)<<endl;
        }
        
    }
    return 0;
}
