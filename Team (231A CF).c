#include<stdio.h>
int main(){
    int p, v, t, n, count = 0;
    scanf("%d",&n);

    while(n--){
        scanf("%d %d %d", &p, &v, &t);
        if(p + v + t >= 2){
            count++;
        }
    }
    printf("%d", count);
    return 0;
}
