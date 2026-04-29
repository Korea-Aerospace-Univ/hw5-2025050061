#include <stdio.h>

int main(void)
{
    int N;
    bool found = false;
    
    scanf("%d", &N);
    
    for(int i=1; i<=N/900; i++) {
        for(int j=2; j<=N/750; j+=2) {
                
            for(int k=1; k<=N/200; k++) {
                if (N-900*i-750*j-200*k == 0) {
                    if (k<i || k<j) {
                        printf("%d %d %d\n", i, j, k);
                        found = true;
                    }
                }
            }
        }
    }
    if (!found) 
        printf("none");
        
    return 0;
}
