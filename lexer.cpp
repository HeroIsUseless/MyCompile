#include <string>
#include "token.cpp"

class Lexer{
private:
    std::string cs;
    Token *tokens;
    int n; 
public:
    Lexer(std::string codStr);
    ~Lexer();
    void compile();

};

Lexer::Lexer(std::string codeStr):cs(codeStr), n(0){
    int len = cs.length();
    tokens = new Token[len];
}

void Lexer::compile(){
    int i = 0;
    // 每次抓取一个token
    while(cs[i] != 0){
        // 省略掉全部空格与回车
        if(cs[i]==' ' || cs[i]=='\n'){
            i++;
            continue;
        }
        // 算术运算符部分
        else if(cs[i] == '+'){
            tokens[n++].setID(pus);
            i++; continue;
        }
        else if(cs[i] == '-'){
            tokens[n++].setID(mus);
            i++; continue;
        }
        else if(cs[i] == '*'){
            tokens[n++].setID(mul);
            i++; continue;
        }
        else if(cs[i] == '/'){
            tokens[n++].setID(div);
            i++; continue;
        }
        else if(cs[i] == '%'){
            tokens[n++].setID(mod);
            i++; continue;
        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
        else if(cs[i] == '+'){

        }
    }
}






