#include <iostream>

using namespace std;

struct node{
  char ch;
  node *left;
  node *right;
};
struct info{
  string left, right;
};

class Tree{
private:
node *tree, *temp;
char root;
string str1, str2;
int rt = 0;
int check = 0;
public:


  void insertion(int l = 0, int r = 0){
    if(tree == NULL){
      tree = new node;
      tree -> ch = root;
      tree -> left = NULL;
      tree -> right = NULL;
      return;
    }
    temp = tree;
    if(l == 1){
      while(temp -> left != NULL){
        if(temp->ch == root) return;
        temp = temp->left;
      }
      temp->left = new node;
      temp->left->ch = root;
      temp->left->left = NULL;
      temp->left->right = NULL;
      cout<<root<<endl;
      return;
    }
    if(r == 1){
      while(temp->right != NULL){
        if(temp -> ch == root) return;
        temp = temp -> right;
      }
      temp->right = new node;
      temp->right->ch = root;
      temp->right->left = NULL;
      temp->right->right = NULL;
      cout<<root<<endl;

    }
  }

  void startSub(){
    findroot();
    static info pos;
    pos.left = "",pos.right = "";
    int sign = 0;
    for(int i = 0; i<str1.length(); i++){
      if(str1[i] == root){
       sign = 1 ;
       continue;
      }
      if(sign == 0) pos.left += str1[i];
      if(sign == 1) pos.right += str1[i];
    }
    cout<<"root = "<<root<<endl;
    cout<<"left = "<<pos.left<<endl;
    cout<<"right = "<<pos.right<<endl<<endl;
    insertion(0,0);
    check++;
    findSub(pos.left);
    findSub(pos.right);

  }
  void findSub( string str){
    findroot();
    static info pos;
    pos.left = "",pos.right = "";
    int sign = 0;
    for(int i = 0; i<str.length(); i++){
      if(str[i] == root){
       sign = 1 ;
       continue;
      }
      if(sign == 0) pos.left += str[i];
      if(sign == 1) pos.right += str[i];
    }
    cout<<"root = "<<root<<endl;
    cout<<"left = "<<pos.left<<endl;
    cout<<"right = "<<pos.right<<endl<<endl;

    insertion(1,0);
    if(pos.left != ""){
      findSub(pos.left);
      check ++;
    }
    insertion(0,1);
    if(pos.right != ""){
      findSub(pos.right);
      check++;
    }
    return;

  }
  int findroot(){

    if(rt != str2.length()-1){
      root = str2[rt];
      cout<<str2[rt]<<endl;
      rt++;
    }
    return 0;
  }

  void getVal(string s1, string s2){
    str1 = s1;
    str2 = s2;
    startSub();
    print(tree);
    cout<<endl<<check<<endl;
  }
  void print(node * x){
    if(x == NULL) return;
    if(x != NULL) {
      cout<<" hi "<<x->ch;
      print(x -> left);
      print(x -> right);
    }
  }

  Tree(){

    str2 = str1 = "";

    root = '-';
    tree = NULL;
  }

};

int main() {
    Tree t;
    string s="dbeafcg" ,t1 = "abdecfg";
    cin>> s;
    cin>> t1;
    t.getVal(s,t1);
    return 0;
}
