//
// Created by jian on 2021/2/24.
//
#include <stdio.h>

int main() {

    FILE *fp;
    fp = fopen("D:\\project_c\\ndk_demo\\test.txt", "w+");
    //按读方式打开由argv[1]指出的文件
    if(fp==NULL)
    {
        printf("The file <%s> can not be opened.\n",fp);//打开操作不成功
    }
    fprintf(fp, "This is testing for fprintf...\n");
    fputs("This is testing for fputs...\n", fp);
    fclose(fp);

    printf("File :%s\n", __FILE__ );
    printf("Date :%s\n", __DATE__ );
    printf("Time :%s\n", __TIME__ );
    printf("Line :%d\n", __LINE__ );
    printf("ANSI :%d\n", __STDC__ );

    FILE *fp2 = NULL;
    char buff[255];

    fp2 = fopen("D:\\project_c\\ndk_demo\\test.txt", "r");
    if(fp2 == NULL)
        printf("fail to open the file! \n");
    else
    {
        printf("The file is open! \n");
        fclose(fp2);
    }
    fscanf(fp, "%s", buff);  //写入的时候和平常没有区别，还是只有字符串变量前不加‘&’，其他int、double等类型前都要加‘&’符号
    printf("1: %s\n", buff);

    fgets(buff, 255, (FILE *) fp);  //scanf遇到空格就会断开，gets会读取空格，遇到换行就结束
    printf("2: %s\n", buff);     //255是限制最大读取内容长度

    fgets(buff, 255, (FILE *) fp);
    printf("3: %s\n", buff);
    fclose(fp);

    return 0;

}

