extern u8 D_03002AB0[];
extern u8 D_03004830[];

s32 sub_08038458(s32);
void sub_08004EA0(s32);

void sub_0800C2E4(void) {
    u8 *base5 = D_03004830;
    u8 *ptr1 = base5;
    u8 *base4;
    u8 *ptr0;
    u8 *ptr2;
    u8 *ptr3;
    s8 val;

    ptr1 += 0x2B;
    val = *(s8 *)ptr1;
    if (val == 0) {
        (*ptr1)++;
        D_03002AB0[0xB8] |= 0x04;
    }
    if ((sub_08038458(1) << 0x18) != 0) {
        base4 = D_03002AB0;
        ptr0 = base4;
        ptr0 += 0x94;
        sub_08004EA0(*(s32 *)ptr0);
        ptr2 = base5;
        ptr2 += 0x2A;
        *ptr2 = 0;
        ptr3 = base4;
        ptr3 += 0xB8;
        *ptr3 &= 0xFB;
    }
}
