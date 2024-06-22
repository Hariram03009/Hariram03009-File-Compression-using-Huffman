/*THIS PROGRAMMING CODE WORKS ONLY FOR TEXT FILE DOCUMENT*/
/*THE SIZE OF THE FILE MUST BE ATLEAST 5kb TO SEE THE DIFFERENCE*/


#include<bits/stdc++.h>
using namespace std;
struct tree
{
    /*data used in the program*/
    int frequency;  /*represents the frequency of repition of letters*/
    unsigned char character;
    tree *left=NULL;
    tree *right=NULL;
    
};

class Treecomparator{                                 /*INITIATES Treecomparator class*/
    public:                                           /*MAKES THE FUNCTION PUBLIC*/
        bool operator()(tree*a,tree*b){               /*the a and b refers to the pointer it refers to in the tree*/
            return a->frequency > b->frequency;       /*returns true if a->frequency is greater than b frequency*/
        }                                             /*THIS COMPARISION DETERMINES THE ORDER OF ELEMENTS*/
    
};