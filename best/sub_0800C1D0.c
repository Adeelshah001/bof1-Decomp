extern u8 D_03004830[];

void sub_08004EA0(s32);
void sub_080017EC(s32);

void sub_0800C1D0(void) {
    u8 *base = D_03004830;
    u8 *ptrC = base;
    u8 *ptrD = base;
    u8 *ptrB;
    int new_val;
    s8 val;

    ptrC += 0x2C;
    new_val = *ptrC - 1;
    *ptrC = new_val;
    val = (s8)new_val;
    if (val != 0) {
        return;
    }
    ptrD += 0x2D;
    val = *(s8 *)ptrD;
    if (val != 0) {
        *ptrD = 0;
        return;
    }
    sub_08004EA0(0x817F);
    sub_080017EC(0x4F);
    ptrB = base;
    ptrB += 0x2B;
    (*ptrB)++;
}
