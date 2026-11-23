void sub_08049EAC(void *arg0, u16 arg1, u16 arg2) {
    u16 *p = (u16 *)arg0;
    u16 temp;
    p[1] = p[1] + arg1;
    temp = arg2 + p[3];
    p[3] = temp;
    p[0x16] = temp;
}

extern u8 D_03001850[];
extern void sub_08048E88(void);

void sub_08049EC4(void *arg0) {
    u8 *p = (u8 *)arg0;
    if (D_03001850[0] == p[0x5F]) {
        D_03001850[0] = 0;
        *(u32 *)(p + 0x64) = (u32)sub_08048E88 | 1;
    }
}

extern u8 D_03002AB0[];
extern void sub_08049EAC(void *arg0, u16 arg1, u16 arg2);

void sub_08049E88(void *arg0) {
    u16 *src = (u16 *)D_03002AB0;
    u16 *dst = (u16 *)arg0;
    dst[1] = src[1];
    dst[3] = src[3];
    sub_08049EAC(arg0, dst[0x2C], dst[0x2D]);
}

extern void sub_0804900C(void);

void sub_08049F58(void *arg0) {
    u16 *p = (u16 *)arg0;
    u16 val;
    val = p[0x2C] - 1;
    p[0x2C] = val;
    if (val == 0) {
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_0804900C | 1;
    }
}
