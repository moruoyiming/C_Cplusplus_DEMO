#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define LENGTH = 10;
//#define WIDTH = 5 ;

//宏延续运算符（\）字符串常量化运算符（#）
#define message_for(a, b) \
printf(#a " and " #b ":We love you! \n")

//标记粘贴运算符（##） printf ("token34 = %d", token34);
#define tokenPaster(n) printf("token" #n " = %d \n", token##n)

//defined() 运算符
#if !defined(MESSAGE)
#define MESSAGE "You wish!"
#endif

int square(int x) {
    return x * x;
}

#define square(x) ((x)*(x))

#define MAX(x, y) ((x)>(y)?(x):(y))

//有条件引用
#if SYSTEM1
# include "2323"
#elif SYSTEM2
# include "121"
#endif


//函数定义
int func();

void printBook(struct Books book);

void printBook2(struct Books *book);

struct Books {
    char title[50];
    char author[50];
    char subject[100];
    int book_id;
};
/**
 *
 *    C 共用体
 *    共用体是一种特殊的数据类型，允许您在相同的内存位置存储不同的数据类型。您可以定义一个带有多成员的共用体，但是任何时候只能有一个成员带有值。共用体提供了一种使用相同的内存位置的有效方式。
 *    定义共用体
 *    为了定义共用体，您必须使用 union 语句，方式与定义结构类似。union 语句定义了一个新的数据类型，带有多个成员。union 语句的格式如下：
 *
 */
union Data {
    int i;
    float f;
    char str[20];
} data;

struct {
    unsigned int age: 3;
} Age;

struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status1;

/* 定义位域结构 */
struct {
    unsigned int widthValidated: 1;
    unsigned int heightValidated: 1;
} status2;

#define TRUE  1
#define FALSE 0


void recursion() {
    printf(" C 递归调用 ！");
    recursion();
}

//可变参数
int funXX(int ...) {

}

int average(int nums, ...) {
    va_list valist;
    double sum = 0.0;
    int i;

    /* 为 num 个参数初始化 valist */
    va_start(valist, nums);

    /* 访问所有赋给 valist 的参数 */
    for (i = 0; i < nums; i++) {
        sum += va_arg(valist, int);
    }     /* 清理为 valist 保留的内存 */
    va_end(valist);
    return sum / nums;
}

int main() {
    std::cout << "Hello, World!" << std::endl;
    int i = 200;
    double j = 3000;
    long m = 4000;
    char a = 'ada';
    printf("what is %d \n", i);
    printf("what is %lf \n", j);
    printf("what is %d \n", m);
    printf("what is %c \n", a);
    int k = 3000;
    //定义int指针变量  ->  指向内存地址
    //&k 获取变量内存地址
    int *l = &k;
    printf(" k value is %d , address is %x \n", k, &k);
    printf(" *l value is %d   l value is %x \n",*l,l);
    //修改指针所指向的内存地址值
    *l = 4000;
    printf(" k value is %d , address is %x \n", k, &k);
    printf(" int sizeof is %d \n", sizeof(int));
    printf(" double sizeof is %d \n", sizeof(double));

    int size = func();
    printf("size is %d \n", size);

    //定义常量
    const int LENGTH = 10;
    const int WIDTH = 5;
    int area = LENGTH * WIDTH;
    printf("area is %d \n", area);

    //定义数组
    double arrayName[] = {1000.0, 2.0, 3.0, 7.0, 50.0};
    for (int i = 0; i < 5; i++) {
        printf(" array i = %d ,arrayName[i]= %lf \n", i, arrayName[i]);
    }

    char var2[10];/* 指针变量的声明 */
    printf("var2 变量的地址： %x\n", &var2);

    int var1 = 20; /* 实际变量的声明 */
    int *ip = &var1; /* 在指针变量中存储 var 的地址 */

    printf("Address of var variable: %x\n", &var1);
    /* 在指针变量中存储的地址 */
    printf("Address of var variable: %x\n", ip);
    /* 使用指针访问值 */
    printf("Value of *ip variable: %d\n", *ip);

    int *ptr = NULL;
    printf("ptr 的值是 %x\n", ptr);

    char greeting[5] = {'H', 'e', 'l', 'l', 'o'};
    char greeting2[] = "Hello";
    printf("Greeting message: %s\n", greeting);

    //C 结构体
    struct Books book1;
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "JIANRUILin");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 123456;
    /* 输出 Book1 信息 */
    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);

    printBook(book1);

    struct Books *bookArea;
    bookArea = &book1;
    printf(" bookArea title %s \n", bookArea->title);

    /* 通过传 Book1 的地址来输出 Book1 信息 */
    printBook2(bookArea);

    //C 共用体
    union Data data;
    printf("Memory size occupied by data : %lu\n", sizeof(data));

    data.i = 10;
    printf("data.i : %d\n", data.i);
    data.f = 220.5;
    printf("data.f : %f\n", data.f);
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);

    //C 位域
    Age.age = 4;
    printf("Sizeof( Age ) : %lu\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);

    Age.age = 7;
    printf("Age.age : %d\n", Age.age);

    Age.age = 8;
    printf("Age.age : %d\n", Age.age);

    printf("Memory size occupied by status1 : %lu\n", sizeof(status1));
    printf("Memory size occupied by status2 : %lu\n", sizeof(status2));

    printf("Value of TRUE : %d\n", TRUE);
    printf("Value of FALSE : %d\n", FALSE);

    //C 预处理器
    message_for("Carole", "Debra");

    int token34 = 40;
    tokenPaster(34);

    printf("Here is the message: %s\n", MESSAGE);

    printf("Max between 20 and 10 is %d\n", MAX(10, 20));

    //C 数据类型转换
    int sum = 17, count = 5;
    double mean;
    mean = (double) sum * count;
    printf("Value of mean : %f\n", mean);

    //C 错误处理
    FILE *pf;
    int errnum;
    pf = fopen("unexist.txt", "rb");
    if (pf == NULL) {
        errnum = errno;
        fprintf(stderr, "Value of errno: %d\n", errno);
        perror("Error printed by perror");
        fprintf(stderr, "Error opening file %s\n", strerror(errnum));
    } else {
        fclose(pf);
    }

    //C 退出
//    exit(EXIT_FAILURE)

    //C 递归
//    recursion();

    //C 可变参数
    funXX(1, 2, 3);
    funXX(1, 3, 2, 2);
    printf("Average of 2, 3, 4, 5 = %d\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %d\n", average(3, 5, 10, 15));

    //C 内存管理
    //动态分配内存
//    void *calloc(int num, int size);
//    该函数分配一个带有 function allocates an array of num 个元素的数组，每个元素的大小为 size 字节。
//    void free(void *address);
//    该函数释放 address 所指向的h内存块。
//    void *malloc(int num);
//    该函数分配一个 num 字节的数组，并把它们进行初始化。
//    void *realloc(void *address, int newsize);
//    该函数重新分配内存，把内存扩展到 newsize。
    char name[100];
    char *description;
    strcpy(name, "Zara Ali");

    /* 动态分配内存 */
    description = static_cast<char *>(malloc(200 * sizeof(char)));
    if (description == NULL) {
        fprintf(stderr, "Error - unable to allocate required memory \n");
    } else {
        strcpy(description, "Zara ali a DPS student in class 10th");
    }
    printf("Name = %d \n", name);
    printf("Description:%s\n", description);


    return 0;
}

void printBook(struct Books book) {
    printf("Book title : %s\n", book.title);
    printf("Book author : %s\n", book.author);
    printf("Book subject : %s\n", book.subject);
    printf("Book book_id : %d\n", book.book_id);

}

void printBook2(struct Books *book) {
    printf("Book title : %s\n", book->title);
    printf("Book author : %s\n", book->author);
    printf("Book subject : %s\n", book->subject);
    printf("Book book_id : %d\n", book->book_id);
}

int func() {
    int a;
    int b;
    a = 100;
    b = 234;
    return a + b;
}
