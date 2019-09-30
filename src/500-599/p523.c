/* Aburrimiento en la autopista */
#include <string.h>
#include <stdio.h>

int main() {
    int n, cmp, resn, reso;
    char m[8], mn[5], ml[4], sn[5], sl[4];
    int i;
    scanf("%d", &n);
    for(; n > 0; n--) {
        resn = reso = 0;
        scanf("%s", m);
        strncpy(mn, m, 4);
        for(i = 0; i < 3; i++) {
            ml[i] = m[4+i];
        }
        ml[3] = 0;
        while(1) {
            scanf("%s", m);
            if(strcmp(m, "0") == 0)
                break;
            strncpy(sn, m, 4);
            for(i = 0; i < 3; i++) {
                sl[i] = m[4+i];
            }
            sl[3] = 0;
            cmp = strcmp(ml, sl);
            if(cmp == 0) {
                cmp = strcmp(mn, sn);
                if(cmp > 0)
                    reso++;
                else if(cmp < 0)
                    resn++;
            } else if(cmp > 0)
                reso++;
            else
                resn++;
        }
        printf("%d %d\n", reso, resn);
    }
    return 0;
}