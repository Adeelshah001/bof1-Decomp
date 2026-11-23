extern u8 D_03004620[];
extern void *D_08100CC4[];
extern s32 sub_080A0770(s32);

unsigned int sub_08061A70(void)
{
  void **tbl = D_08100CC4;
  u8 *p = D_03004620;
  return sub_080A0770((s32) tbl[p[4] >> 1]);
}

s32 sub_0806165C(u16 arg0) {
    u16 temp_r1 = arg0;
    if ((*(u8 *)0x0300169C == 0) && !(0xF000 & temp_r1) && ((u32) (0xFF & temp_r1) <= 0x1FU)) {
        return 1;
    }
    return 0;
}

extern void sub_0805CB2C(void);
extern void sub_0805D9C8(u16);
extern void sub_08061518(u16);
extern u16 sub_080615FC(u8);

void sub_08061624(void) {
    u8 *p = D_03004620;
    u8 idx = p[0xB2];
    u16 *tbl = (u16 *)(D_03004620 + 0x10);
    sub_080615FC(idx);
    sub_0805CB2C();
    sub_0805D9C8(tbl[idx]);
    sub_08061518(tbl[idx]);
}

extern u16 sub_0805C574(u16);
extern u8 D_03004760[];

u16 sub_080615FC(u8 idx) {
    u16 *tbl = (u16 *)(D_03004620 + 0x10);
    u16 val = tbl[idx];
    u32 r = sub_0805C574(val);
    *(u32 *)&D_03004760[0x0C] = r;
    return val;
}
