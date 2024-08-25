#include <iostream>
#include <cstring> // 包含 strlen 函数
#include <string>  // 包含 std::string 类

// 其实<cstring>(C++中的头文件，内容同string.h)与<string.h>(C语言中的头文件)是一样的，  前者可以理解为C++版本的<string.h>

int main()
{
    int a = 10;
    std::cout << "sizeof(int) = " << sizeof(a) << " Bytes" << std::endl; // 整型的大小

    // 演示数组长度
    int arr[] = {1, 2, 3, 4, 5};
    std::cout << "int arrays's zone size:sizeof(arr) = " << sizeof(arr) << " Bytes" << std::endl;
    std::cout << "int array's num:sizeof(arr) / sizeof(arr[0]) = " << sizeof(arr) / sizeof(arr[0]) << std::endl; // 数组的长度
    std::string line(50, '-');
    std::cout << line << std::endl;

    // 演示 sizeof 运算符
    char s_char_arr_en[] = "Hello, world!";
    // char s_char_arr_cn[] = {'你', '好', '，', '世', '界', '\n'}; // 中文字符无法通过单引号扩起来，因为单引号只能是char类型的
    // 这是因为char类型只能处理ASCII编码的英文字符，char只占一个字节
    // 而对于中文，需要有专门的字符类型，要使用宽字符的编码方式，常见的字符编码有UTF-16/UTF-32，它们都是基于Unicode字符集，支持全球化的语言
    char s_char_arr_cn[] = "你好，世界！"; // 这里的中文使用的是UTF-8(8-bit Unicode Transformation Format)编码，是一种针对Unicode的可变长度字符编码，他可以用1--4个字节对Unicode字符集中的所有有效编码点进行编码
    // 对于中文而言，一个中文字符采用UTF-8编码，为3个字节
    std::cout << "s_char_arr_en: " << s_char_arr_en << std::endl;
    std::cout << "s_char_arr_cn: " << s_char_arr_cn << std::endl;

    int idx = 2;
    std::cout << "print s_char_arr_en specific index's value(idx=" << idx << "):" << s_char_arr_en[idx] << std::endl;
    // 因为utf-8编码的中文字符需要三个字节，而char只有一个字节，所有对char数组采用下标获取内容，是获取不到中文字符的，除非使用wchar_t
    std::cout << "print s_char_arr_cn specific index's value(idx=" << idx << "):" << s_char_arr_cn[idx] << std::endl;

    // sizeof可以获取基本数据类型或者复合数据类型（数组 结构体 类）的大小
    // 当然对传入的变量名也可以获取其大小
    // 当sizeof用于数组时，它会返回整个数组所占的内存大小
    // 而当用于指针时，它仅仅返回指针变量的大小，一般与指针指向的数据类型无关
    std::cout << "sizeof(s_char_arr_en) = " << sizeof(s_char_arr_en) << " Bytes" << std::endl; // 包含 '\0' 的大小
    std::cout << "sizeof(s_char_arr_cn) = " << sizeof(s_char_arr_cn) << " Bytes" << std::endl;

    // 演示strlen 函数，是cstring(C风格字符串)中的一个函数，它返回字符个数
    // strlen显然是用于C风格字符串（char []）的函数，用于获取字符个数，对于ASCII编码的字符而言，这个当然没问题，以为ASCII编码的字符char一个字节就足够用
    // 所以说strlen的实现逻辑并不是你有几个字符，而是你除了'\0'外有几个字节，它并不考虑每个字符占用的字节数
    std::cout << "strlen(s_char_arr_en) = " << strlen(s_char_arr_en) << std::endl; // 不包含 '\0'
    std::cout << "strlen(s_char_arr_cn) = " << strlen(s_char_arr_cn) << std::endl;

    std::cout << line << std::endl;

    // 演示 std::string 的 size() 方法
    // string的string.size()与string.length()方法实际上执行相同的操作，都返回字符串中的字符数（不包括'\0'）
    // 只不过在命名上有点区别，这主要是为了与C++标准模板库（STL）的其他容器类保持一致性。
    // string.size()与string.length()只能用于string，但strlen可以用在C风格字符串与C++风格字符串,❎，大错特错！！
    std::string s_string_en = "Hello, world!";
    std::string s_string_cn = "你好，世界！";
    // 看来string.length string.size的计算字符数跟strlen如出一辙，都不考虑每个字符所占的字节数
    std::cout << "s_string_en.size() = " << s_string_en.size() << std::endl;     // std::string 的长度，不包含 '\0'
    std::cout << "s_string_en.length() = " << s_string_en.length() << std::endl; // std::string 的长度，不包含 '\0'
    std::cout << "print s_string_en specific index's value(idx=" << idx << "):" << s_string_en[idx] << std::endl;

    std::cout << "s_string_cn.size() = " << s_string_cn.size() << std::endl;     // std::string 的长度，不包含 '\0'
    std::cout << "s_string_cn.length() = " << s_string_cn.length() << std::endl; // std::string 的长度，不包含 '\0'
    // std::cout << "strlen(str) = " << strlen(str) << std::endl; // string(C++风格字符串)的长度不能使用strlen

    return 0;
}

// sizeof(int) = 4 Bytes
// int arrays's zone size:sizeof(arr) = 20 Bytes
// int array's num:sizeof(arr) / sizeof(arr[0]) = 5
// --------------------------------------------------
// s_char_arr_en: Hello, world!
// s_char_arr_cn: 你好，世界！
// print s_char_arr_en specific index's value(idx=2):l
// print s_char_arr_cn specific index's value(idx=2):�
// sizeof(s_char_arr_en) = 14 Bytes
// sizeof(s_char_arr_cn) = 19 Bytes
// strlen(s_char_arr_en) = 13
// strlen(s_char_arr_cn) = 18
// --------------------------------------------------
// s_string_en.size() = 13
// s_string_en.length() = 13
// s_string_cn.size() = 18
// s_string_cn.length() = 18