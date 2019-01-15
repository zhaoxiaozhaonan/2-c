#include <stdio.h>

int main(){

    printf("进入敏感字符管理系统\n");
    int code=0;
    while(1){
    printf("1--添加一个敏感字符\n");
    printf("2--删除最后一个敏感字符\n");
    printf("3--显示所有敏感字符\n");
    printf("4--替换敏感字符\n");
    printf("5--退出系统\n");
    printf("请输入所需项目数字\n");
    scanf("%d",&code);
    
    if (code==1) {
        /* code */
    }

    if (code==2) {
        /* code */
    }
    if (code==3) {
        /* code */
    }
    if (code==4) {
        /* code */
    }
    if (code==5) {
       printf("点击回车，退出系统\n");
       break;
    }
    
    
    }

    return 0;

}