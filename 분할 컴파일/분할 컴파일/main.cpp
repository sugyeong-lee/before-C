#include "struct.h"
// 헤더 파일을 반드시 여러 파일에 포함시킬 때에,
// 반드시 단 한 번만 포함시켜야 한다.
int main() {
    MyStruct PandaCoding = {
        "Panda",
        26,
    };

    display(PandaCoding);
    return 0;
}