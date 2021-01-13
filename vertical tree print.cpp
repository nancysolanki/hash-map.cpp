#include<unordered_map> 
void getVerticalOrder(BinaryTreeNode<int>* root, int hd, unordered_map<int, vector<int>> &m)
{
  
    if (root == NULL)
    {
        return;
    }
    
    m[hd].push_back(root->data);
 
    
    getVerticalOrder(root->left, hd-1, m);
 
    
    getVerticalOrder(root->right, hd+1, m);
}

void printBinaryTreeVerticalOrder(BinaryTreeNode<int>* root)
{	 
		
	 unordered_map < int,vector<int> > m;
    int hd = 0;
    getVerticalOrder(root, hd,m);
 
      unordered_map< int,vector<int> > :: iterator it;
    for (it=m.begin(); it!=m.end(); it++)
    {
        for (int i=0; i<it->second.size(); ++i)
            cout << it->second[i] << " ";
        cout << endl;
    }
}
 
