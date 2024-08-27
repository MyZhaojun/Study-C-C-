#include <stdio.h>
int main() {
    /* 输入输出 %l是float %lf是double 保留一位小数就在前面加个.1，小数点前面加个Y就是占了六列，前面再加个负号就是左对齐，加零就是反方向补成0 比如 %-6.1lf  小数点前面加个Y就是占了六列    %x是转成十六进制数，%c是转成对应的字符
    常量: int a,b,c; a=17;十进制      b= 017八进制     c=0x17十六进制
    转义字符 \n换行  \t制表  \b退格键 \"是"    \\是\
    \ddd 三位八进制数   \xdd是两位十六进制
    定义常量 在mian之前#define pi = 3.14159265358972 不需要分号
    常用包含函数  stdio.h 标准输入输出  math.h 数学   ctype.h字符处理  string.h字符串处理   stdlb.h常用库
    包含文件可以自己写 --- 自己先写一个文件，比如叫 try.c,主文件在开头加个#include "try.c". 就行了
    其中try.c里面写的就是原本放在主文件里面的东西，一模一样  如 double circle(double r){return 3.14*2*r;}
    一般不用==来判断是否等于，因为精度往往有差距，可以用绝对值 fabs(x-y)<1e-5
    取余%的时候余数符号和%前的符号一样
    rand()%51是生成0-50的随机整数，不过要先进行一步
    // 初始化随机数生成器的种子
    srand((unsigned int)time(NULL));

    getchar()和putchar()输入输出一个字符
    fabs()绝对值 sqrt()求根号
    #include<ctype.h>中isdigit()和isalpha()，isupper()，tolower()将一个字符转为小写
    输出数组的首地址，printf("%x",a)
    */

    return 0;
}