#include<cstdio>
using namespace std;

int main() {
    const char *s = "http://www.baidu.com:1234";
    char protocol[32] = { 0 };
    char host[128] = { 0 };
    char port[8] = { 0 };
    sscanf(s,"%[^:]://%[^:]:%[1-9]",protocol,host,port);
    printf("protocol: %s\n",protocol);
    printf("host: %s\n",host);
    printf("port: %s\n",port);

    char str[256] = { 0 };
    int data = 1024;

    //��dataת��Ϊ�ַ���
    sprintf(str,"%d",data);
    printf("%s\n",str);

    //��ȡdata��ʮ������
    sprintf(str,"0x%X",data);
    printf("%s\n",str);

    //��ȡdata�İ˽���
    sprintf(str,"0%o",data);
    printf("%s\n",str);
    const char *s1 = "Hello";
    const char *s2 = "World";

    //�����ַ���s1��s2
    sprintf(str,"%s %s",s1,s2);
    printf("%s\n",str);
    return 0;
}
