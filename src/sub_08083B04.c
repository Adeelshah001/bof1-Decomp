extern u8 D_08152068[];
extern void sub_080831C4(void *, void *, u8, u16);

void sub_08083B04(void *arg0, u8 arg1) {
    u8 *p = (u8 *)arg0;
    u8 v = arg1;
    u8 *tbl = (u8 *)D_08152068;
    u32 off = v << 3;
    u16 val = *(u16 *)(tbl + off + 2);
    u16 shifted = (u16)(val << 5);
    p[0x3A] = 1;
    p[0x3D] = 2;
    sub_080831C4(arg0, arg0, v, shifted);
}
