#include <stdlib.h>
#include <stdio.h>
int count(char *s2){
    int k = 0;
    switch(s2[0]){
        case 'a': k = 0;
        break;
        case 'b': k = 1;
        break;
        case 'c': k = 2;
        break;
        case 'd': k = 3;
        break;
    }
    return k;
}
void sub(int *q, char *s2, int x){
    int k = count(s2);
    q[k] = q[k] - x;
    for(int i=0; i<4; i++) printf("%d ", q[i]);
    return;
}
void mov(int *q, char *s2, int x){
    int i = count(s2);
    q[i] = x;
    for(int i=0; i<4; i++) 
        printf("%d ", q[i]);
    return;
}
void add(int *q, char *s2, int x){
    int i = count(s2);
    q[i] = q[i] + x;
    for(int i = 0; i < 4; i++) 
        printf("%d ", q[i]);
    return;
}
int main()
{
    int q[4] = {0, 0, 0, 0};
    char s1[4], s2[4], s3[4];
    int x;
    while(1){
        scanf("%s", s1);
        scanf("%s", s2);
        scanf("%s", s3);
        if((s3[0]=='a') or (s3[0]=='b') or (s3[0]=='c') or (s3[0]=='d')){
           x = q[count(s3)]; 
        }
        else x = s3[0]-48;
        switch(s1[0]){
            case 'm': mov(q, s2, x);
            break;
            case 'a': add(q, s2, x);
            break;
            case 's': sub(q, s2, x);
            break;
            case 'r': return 0;
            break;
        }
    }
    return 0;
}
