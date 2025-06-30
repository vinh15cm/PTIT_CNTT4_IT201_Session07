#include<stdio.h>
#include<string.h>
#include<ctype.h>

// ham sap xep ki tu tang dan tu a den z
void sapXepChuoi(char str[]) {
    int len = strlen(str);
    for (int i=0;i < len-1;i++) {
        for (int j=0;j < len;j++) {
            if (str[i] > str[j]) {
                char temp = str[i];
                str[i] = str[j];
                str[j] = temp;
            }
        }
    }
}
int main() {
    char str[1000];
    printf("nhap vao chuoi :");
    fgets(str,sizeof(str),stdin);
    // xoa ki tu '\n'neu co
    size_t len = strlen(str);
    if (len>0 && str[len-1]=='\n') {
        str[len-1]='\0';
    }
    // kiem tra chuoi rong
    if (strlen(str)==0) {
        printf("chuoi khong hop le");
        return 1;
    }
    printf("str truoc khi sap xep = \"%s\"\n",str);
    sapXepChuoi(str);
    printf("str sau khi sap xep = \"%s\"\n",str);
    return 0;
}