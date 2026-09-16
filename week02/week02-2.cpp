/// week02-2.cpp
///File-Save As 存檔成 .cpp檔
#include <iostream> /// 上週教的
#include <string> /// 今天新教的
using namespace std; /// 使永 std 命名空間
/// 以前大一C語言是用cher name[100];宣告麻煩
/// scanf("%s",name ); 讀資料也麻煩
int main()
{ /// 就不用再寫一堆 std::
    cout << "請輸入你的名子:" ;
    string name; /// 使用標準的字串
    cin >> name;
    cout << name << "你好，你會用字串了";
}
