#include <iostream>
#include <string>
using namespace std;
struct charStack
{
    char *sym;
    int top=-1;
}cst;

int main()
{
    int t;
    cin>>t;
    for(int i=0;i<t;i++){
        cst.top=-1;//Ҫ�ǵó�ʼ��top������
        string exp;
        cin>>exp;
        int n=exp.size();
        cst.sym=new char[n+1];//����'\0'��λ�ã���
        bool flag=true;
        for(int i=0;i<n;i++){
            if(exp[i]=='('||exp[i]=='['||exp[i]=='{'){
                //ѹ��ջ��
                cst.sym[++cst.top]=exp[i];
            }
            else if(exp[i]==')'||exp[i]==']'||exp[i]=='}'){
                if(cst.top==-1){
                    flag=false;
                    break;
                }
                else{
                    if(cst.sym[cst.top]=='('&&exp[i]==')'){
                        cst.top--;
                    }
                    else if(cst.sym[cst.top]=='['&&exp[i]==']'){
                        cst.top--;
                    }
                    else if(cst.sym[cst.top]=='{'&&exp[i]=='}'){
                        cst.top--;
                    }
                    else{
                        flag=false;
                        break;
                    }
                }
            }
        }
        if(!flag){
            cout<<"NO\n";
        }
        else{
            if(cst.top==-1){
                cout<<"YES\n";
            }
            else{
                cout<<"NO\n";
            }
        }
    }
}

