
//---------------------输入三个数，输出三个数合成的最大整数------------
 //#include <stdio.h>
//int main() {
//    int a, b, c;
//
//    printf("请输入三个非零数字，用空格分隔：");
//    scanf_s("%d %d %d", &a, &b, &c);
//
//    // 将三个数字合成最大的三位整数
//    int maxNum = a > b ? (a > c ? a : c) : (b > c ? b : c);
//    int minNum = a < b ? (a < c ? a : c) : (b < c ? b : c);
//    int midNum = a + b + c - maxNum - minNum;
//
//    int result = maxNum * 100 + midNum * 10 + minNum;
//
//    printf("合成的最大三位整数为：%d\n", result);
//
//    return 0;
//}
//----------------------输入一个字符串ASCII码，输出字符串形式------------
//#include <stdio.h>
//
//int main() {
//    int asciiCode;
//
//    printf("请输入一个ASCII码：");
//    scanf_s("%d", &asciiCode);
//
//    printf("转义后的字符串形式为：\"%c\"\n", asciiCode);
//
//    return 0;
//}
//---------------------求两个数的最大公因数，使用循环------------
//#include <stdio.h>
//
//int main() {
//    int a, b;
//
//    printf("请输入两个整数：");
//    scanf_s("%d %d", &a, &b);
//
//    
//    if (a < b) {
//        int t = a;
//        a = b;
//        b = t;
//    }
//
//    while (b != 0) {
//        int remainder = a % b;
//        a = b;
//        b = remainder;
//    }
//
//    printf("最大公因数为：%d\n", a);
//
//    return 0;
//}
//-----------------------用一个字节的一个变量，存储8位数，请问如何如何把它提取出来这8个数，用循环----
//#include <stdio.h>
//
//int main() {
//    unsigned char byte = 0b10101010; 
//
//    printf("原始字节值为：%d\n", byte);
//
//    for (int i = 7; i >= 0; i--) {
//        unsigned char bit = (byte >> i) & 1;
//        printf("第%d位的值为：%d\n", 7 - i, bit);
//    }
//
//    return 0;
//}
//------------------输入一个英文句子，输出的时候首字母大写------------
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void capitalizeFirstLetter(char* sentence) {
    int length = strlen(sentence);
    int i = 0;

    
    sentence[0] = toupper(sentence[0]);

    
    for (i = 1; i < length; i++) {
       
        if (sentence[i] == ' ') {
            sentence[i + 1] = toupper(sentence[i + 1]);
        }
    }
}

int main() {
    char sentence[100];

    printf("请输入一个英文句子：");
    fgets(sentence, sizeof(sentence), stdin);

    capitalizeFirstLetter(sentence);

    printf("首字母大写的句子为：%s\n", sentence);

    return 0;
}