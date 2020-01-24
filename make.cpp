#include<iostream>
#include<cstdio>
using namespace std;
int main(){
	 system("sudo pacman -S g++");
    cout<<"\033[33m>请输入您的文件名（包括地址）:"<<endl<<">Please enter your file name (including address)\033[0m "<<endl;
    char a[200000];
    scanf("%[^\n]",a);
    cout<<"\033[33m";
    char b[200000];
    char c[200000];
    int len=0;
    while(a[len]!='\0'){
        len++;
    }
    len--;
    b[0]='g';
    b[1]=b[2]='+';
    b[3]=' ';
    for(int i=4;i<=len+4;i++){
        b[i]=a[i-4];
    }
    b[len+5]=' ';
    b[len+6]='-';
    b[len+7]='o';
    b[len+8]=' ';
    for(int i=len+9;i<=len+9+len;i++){
        if(a[i-len-9]=='.'){
            break;
        }
        else{
            b[i]=a[i-len-9];
            c[i-len-9+2]=a[i-len-9];
        }
    }
    cout<<">开始编译……   Start compiling"<<endl;
    cout<<"\033[0m";
    system(b);
    cout<<"\033[33m";
    cout<<">编译结束。  End of compilation"<<endl;
    c[0]='.';
    c[1]='/';
    cout<<">开始运行……  Start running:"<<endl;
    cout<<">运行结果  Operation result:\033[0m"<<endl<<endl;
    
    system(c);
    cout<<"\033[33m";
    cout<<endl<<endl<<">运行结束。 End of operation"<<endl;
    return 0;
}
