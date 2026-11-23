extern u8 D_03003F98;
extern u8 D_03003F9C;
extern u8 D_03001850;

extern void sub_0803A8EC(void *);
extern void sub_08037C98(void *, s32);
extern void sub_0803828C(void *, void *, u16, u8);
extern void sub_0803EE6C(void *);
extern void sub_08048E88(void);
extern void sub_0804900C(void);

void sub_08049DA4(void *arg0) {
    if (0x80 & D_03003F98) {
        if (0x80 & D_03003F9C) {
            D_03003F9C = 0x88;
        }
        ((u8 *)arg0)[0x160] = 0x80;
    }
    sub_0803A8EC(arg0);
}

void sub_08049DE4(void *arg0) {
    u8 temp_r1 = D_03003F9C;
    if (0x80 & temp_r1) {
        if (0x7F & temp_r1) {
            sub_0803EE6C(arg0);
            return;
        }
        if (*(u16 *)((u8 *)arg0 + 6) != 0x7906) {
            sub_0803828C(arg0, (u8 *)arg0 + 4, *(u16 *)((u8 *)arg0 + 0x38), ((u8 *)arg0)[0x61]);
        }
    }
    sub_08037C98(arg0, 0);
    sub_0803A8EC(arg0);
}

void sub_08049EC4(void *arg0) {
    if (D_03001850 == ((u8 *)arg0)[0x5F]) {
        D_03001850 = 0;
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_08048E88 | 1;
    }
}

void sub_08049F58(void *arg0) {
    u16 *ptr = (u16 *)((u8 *)arg0 + 0x58);
    u16 val = *ptr - 1;
    *ptr = val;
    if ((val << 16) == 0) {
        *(u32 *)((u8 *)arg0 + 0x64) = (u32)sub_0804900C | 1;
    }
}
