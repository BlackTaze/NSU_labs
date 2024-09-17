#include <stdio.h>
#include <stdlib.h>

int main() {
    int res = 1;
    int found = 0;

    for (int o1 = 0; o1 < 4; o1++) {
        for (int o2 = 0; o2 < 4; o2++) {
            for (int o3 = 0; o3 < 4; o3++) {
                for (int o4 = 0; o4 < 4; o4++) {

                    res = 1;

                    switch (o1) {
                        case 0: res += 2; break;
                        case 1: res -= 2; break;
                        case 2: res *= 2; break;
                        case 3: if (res != 0) res /= 2; break;

                    }

                    switch (o2) {
                        case 0: res += 3; break;
                        case 1: res -= 3; break;
                        case 2: res *= 3; break;
                        case 3: if (res != 0) res /= 3; break;

                    }

                    switch (o3) {
                        case 0: res += 4; break;
                        case 1: res -= 4; break;
                        case 2: res *= 4; break;
                        case 3: if (res != 0) res /= 4; break;

                    }

                    switch (o4) {
                        case 0: res += 5; break;
                        case 1: res -= 5; break;
                        case 2: res *= 5; break;
                        case 3: if (res != 0) res /= 5; break;

                    }

                    if (res == 25) {
                        printf("%d%d%d%d\n", o1, o2, o3, o4);

                    }
                }
            }
        }
    }


}
