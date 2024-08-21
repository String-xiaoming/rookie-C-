//while 循环  2024/8/21 sencond

#include <iostream>
#include <ctime>
using namespace std;

int main(){

srand((unsigned)time(NULL));
int a = rand()%100;
int b;

while(a != b)//注意这里的判断条件,while循环是在判断成立下才执行循环语句的，而不是先执行循环语句后才来判断的，那是do...while 语句，所以不能 直接“(b == a)”
{

    cout << "请输入一个随机数" << endl;
    cin>>b;
    if(b > a)
    {
        cout << "猜大了" << endl;
    }
    else if(b < a)//else if 有必要性的 不然在等于时还会输出 “猜小了” 除非你自己再加个等于的判断
    {
        cout << "猜小了" << endl;
    }
    else
    {
        cout << "恭喜你猜对了";
        break;
    }
}

system("pause");
return 0;

}