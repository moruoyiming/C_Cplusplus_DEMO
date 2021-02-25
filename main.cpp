#include <iostream>
#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//#define LENGTH = 10;
//#define WIDTH = 5 ;

//�������������\���ַ����������������#��
#define message_for(a, b) \
printf(#a " and " #b ":We love you! \n")

//���ճ���������##�� printf ("token34 = %d", token34);
#define tokenPaster(n) printf("token" #n " = %d \n", token##n)

//defined() �����
#if !defined(MESSAGE)
#define MESSAGE "You wish!"
#endif

int square(int x) {
    return x * x;
}

#define square(x) ((x)*(x))

#define MAX(x, y) ((x)>(y)?(x):(y))

//����������
#if SYSTEM1
# include "2323"
#elif SYSTEM2
# include "121"
#endif


//��������
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
 *    C ������
 *    ��������һ��������������ͣ�����������ͬ���ڴ�λ�ô洢��ͬ���������͡������Զ���һ�����ж��Ա�Ĺ����壬�����κ�ʱ��ֻ����һ����Ա����ֵ���������ṩ��һ��ʹ����ͬ���ڴ�λ�õ���Ч��ʽ��
 *    ���干����
 *    Ϊ�˶��干���壬������ʹ�� union ��䣬��ʽ�붨��ṹ���ơ�union ��䶨����һ���µ��������ͣ����ж����Ա��union ���ĸ�ʽ���£�
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

/* ����λ��ṹ */
struct {
    unsigned int widthValidated: 1;
    unsigned int heightValidated: 1;
} status2;

#define TRUE  1
#define FALSE 0


void recursion() {
    printf(" C �ݹ���� ��");
    recursion();
}

//�ɱ����
int funXX(int ...) {

}

int average(int nums, ...) {
    va_list valist;
    double sum = 0.0;
    int i;

    /* Ϊ num ��������ʼ�� valist */
    va_start(valist, nums);

    /* �������и��� valist �Ĳ��� */
    for (i = 0; i < nums; i++) {
        sum += va_arg(valist, int);
    }     /* ����Ϊ valist �������ڴ� */
    va_end(valist);
    return sum / nums;
}

int main2222() {
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
    int *l = &k;
    printf("what is %d , %d \n", k, &k);
    *l = 4000;
    printf("what is %d , %d \n", k, &k);
    printf(" int sizeof is %d \n", sizeof(int));
    printf(" double sizeof is %d \n", sizeof(double));

    int size = func();
    printf("size is %d \n", size);


    const int LENGTH = 10;
    const int WIDTH = 5;
    int area = LENGTH * WIDTH;
    printf("area is %d \n", area);

    double arrayName[] = {1000.0, 2.0, 3.0, 7.0, 50.0};
    for (int i = 0; i < 5; i++) {
        printf(" array i = %d ,arrayName[i]= %lf \n", i, arrayName[i]);
    }


    char var2[10];/* ָ����������� */
    printf("var2 �����ĵ�ַ�� %x\n", &var2);

    int var1 = 20; /* ʵ�ʱ��������� */
    int *ip = &var1; /* ��ָ������д洢 var �ĵ�ַ */

    printf("Address of var variable: %x\n", &var1);
    /* ��ָ������д洢�ĵ�ַ */
    printf("Address of var variable: %x\n", ip);
    /* ʹ��ָ�����ֵ */
    printf("Value of *ip variable: %d\n", *ip);

    int *ptr = NULL;
    printf("ptr ��ֵ��%x\n", ptr);

    char greeting[5] = {'H', 'e', 'l', 'l', 'o'};
    char greeting2[] = "Hello";
    printf("Greeting message: %s\n", greeting);

    //C �ṹ��
    struct Books book1;
    strcpy(book1.title, "C Programming");
    strcpy(book1.author, "JIANRUILin");
    strcpy(book1.subject, "C Programming Tutorial");
    book1.book_id = 123456;
    /* ��� Book1 ��Ϣ */
    printf("Book 1 title : %s\n", book1.title);
    printf("Book 1 author : %s\n", book1.author);
    printf("Book 1 subject : %s\n", book1.subject);
    printf("Book 1 book_id : %d\n", book1.book_id);

    printBook(book1);

    struct Books *bookArea;
    bookArea = &book1;
    printf(" bookArea title %s \n", bookArea->title);

    /* ͨ���� Book1 �ĵ�ַ����� Book1 ��Ϣ */
    printBook2(&book1);

    //C ������
    union Data data;
    printf("Memory size occupied by data : %d\n", sizeof(data));

    data.i = 10;
    printf("data.i : %d\n", data.i);
    data.f = 220.5;
    printf("data.f : %f\n", data.f);
    strcpy(data.str, "C Programming");
    printf("data.str : %s\n", data.str);

    //C λ��
    Age.age = 4;
    printf("Sizeof( Age ) : %d\n", sizeof(Age));
    printf("Age.age : %d\n", Age.age);

    Age.age = 7;
    printf("Age.age : %d\n", Age.age);

    Age.age = 8;
    printf("Age.age : %d\n", Age.age);

    printf("Memory size occupied by status1 : %d\n", sizeof(status1));
    printf("Memory size occupied by status2 : %d\n", sizeof(status2));

    printf("Value of TRUE : %d\n", TRUE);
    printf("Value of FALSE : %d\n", FALSE);

    //C Ԥ������
    message_for("Carole", "Debra");

    int token34 = 40;
    tokenPaster(34);

    printf("Here is the message: %s\n", MESSAGE);

    printf("Max between 20 and 10 is %d\n", MAX(10, 20));

    //C ��������ת��
    int sum = 17, count = 5;
    double mean;
    mean = (double) sum * count;
    printf("Value of mean : %f\n", mean);

    //C ������
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

    //C �˳�
//    exit(EXIT_FAILURE)

    //C �ݹ�
//    recursion();

    //C �ɱ����
    funXX(1, 2, 3);
    funXX(1, 3, 2, 2);
    printf("Average of 2, 3, 4, 5 = %f\n", average(4, 2, 3, 4, 5));
    printf("Average of 5, 10, 15 = %f\n", average(3, 5, 10, 15));

    //C �ڴ����
    //��̬�����ڴ�
//    void *calloc(int num, int size);
//    �ú�������һ������ function allocates an array of num ��Ԫ�ص����飬ÿ��Ԫ�صĴ�СΪ size �ֽڡ�
//    void free(void *address);
//    �ú����ͷ� address ��ָ���h�ڴ�顣
//    void *malloc(int num);
//    �ú�������һ�� num �ֽڵ����飬�������ǽ��г�ʼ����
//    void *realloc(void *address, int newsize);
//    �ú������·����ڴ棬���ڴ���չ�� newsize��
//    char name[100];
//    char *description;
//    strcpy(name, "Zara Ali");
//
//    /* ��̬�����ڴ� */
//    description = malloc(200 * sizeof(char));
//    if (description == NULL) {
//        fprintf(stderr, "Error - unable to allocate required memory \n");
//    } else {
//        strcpy(description, "Zara ali a DPS student in class 10th");
//    }
//    printf("Name = %d \n", name);
//    printf("Description:%s\n", description);


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
