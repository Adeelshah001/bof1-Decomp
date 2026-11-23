void *sub_0809568C(void *, u8);
void sub_08095DD4(void *);

void sub_08095DB0(void *arg0, u8 arg1) {
    void *r;
    u8 v;
    r = sub_0809568C(arg0, arg1);
    v = ((u8 *)arg0)[0x54];
    ((u8 *)r)[0x55] = v;
    sub_08095DD4(arg0);
}
