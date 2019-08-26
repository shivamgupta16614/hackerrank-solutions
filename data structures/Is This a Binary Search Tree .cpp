#include <climits>
	bool checkBST(Node* root) {
		int x=0;
        check(root,INT_MAX,0,x);
        if(x==1){return false ;}
        else return true;
	}
void check(Node* root,int max,int min,int &x){
    if(root!=NULL){
    if(root->data <=min || root->data>=max){ x= 1;
                                           }
        else {
            check(root->left,root->data,min,x);
            check(root->right,max,root->data,x);
        }
    }

}
