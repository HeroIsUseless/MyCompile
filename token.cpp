#include <string>
enum ID{      
    // 算术运算符 + - * / %
    pus, mus, mul, div, mod,
    // 关系运算符 > < >/ \< = #
    grt, les, gEq, lEq, equ, nEq,
    // 逻辑运算符 & | ~
    _ad, _or, _no,
    // 赋值运算符 <= =>
    lev, rev,
    // 条件控制标识符 ^
    _if, 
    // 循环控制标识符 @ $ !
    lop, cti, brk,
    // 体结构标识符 ? , .
    que, cma, dot,
    // 定义标识符 : ()
    col, lbk, rbk,
    // 数组标识符 {} []
    lba, rba, lsb, rsb,
    // 字符串标识符 ""
    lqa, rqa
};

class Token
{
private:
    ID id;
    std::string attr;
public:
    Token();
    ~Token();
    void setID(ID attr);
    ID getID();
};

void Token::setID(ID id){
    this->id = id;
}

ID Token::getID(){
    return this->id;
}
