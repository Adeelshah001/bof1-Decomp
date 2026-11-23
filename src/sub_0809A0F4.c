void sub_08038264(void *);
u8 sub_08038178(void *, void *);
void sub_0809A1B4(void *);
void sub_0807B270(void *);

void sub_0809A0F4(void *arg0)
{
    u8 *p = arg0;
    s32 val;

    sub_08038264(arg0);
    sub_08038178(arg0, *(void **)(p + 0x78));
    val = p[0x61];
    val &= 0xF0;
    if (val != (*(u16 *)(p + 0x44) >> 8)) {
        sub_0809A1B4(arg0);
    } else {
        sub_0807B270(arg0);
    }
}
