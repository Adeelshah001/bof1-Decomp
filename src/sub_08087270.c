extern u8 D_03004F50[];

void sub_08037FC4(void *, s32);
u8 sub_0807CAB8(void *, s32 *);
void sub_080877C4(void *);
void sub_080877A4(void *);

void sub_08087270(void *arg0) {
    s32 sp0;
    u8 val;

    sub_08037FC4(arg0, 2);
    ((u8 *)arg0)[0x50]++;
    ((u8 *)arg0)[0x41] = 8;
    val = D_03004F50[0x60];
    ((u8 *)arg0)[0x54] = val;
    D_03004F50[0x4A] = val + 1;
    do {
        val = sub_0807CAB8(arg0, &sp0);
        if (val == 0) {
            return;
        } else if (val == 1) {
            sub_080877C4(arg0);
            return;
        }
    } while (val == 2);
    sub_080877A4(arg0);
}
