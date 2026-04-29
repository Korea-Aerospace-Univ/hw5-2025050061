#include <stdio.h>

int main(void)
{
    int N;
    bool is_true = false;
    int x=0, y=0, z=0;
    
    scanf("%d", &N);
    
    for(int i=1; i<=N/900; i++) {
        is_true = false;
        
        for(int j=2; j<=(N-900*i)/750; j+=2) {
                
            for(int k=1; k<=(N-900*i-750*j)/200; k++) {
                if (N-900*i-750*j-200*k == 0) {
                    if (k<i || k<j)
                        is_true = true;
                        x = i; y = j; z=k;
                }
            }
        }
    
    if (is_true)
        printf("%d %d %d\n", x, y, z);
    }
    if (!x ||!y || !z) 
        printf("none");
        
    return 0;
}
