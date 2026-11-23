extern u8 D_03004830[];
void sub_080257C4(void);
void sub_080257B0(void)
{
  int new_var;
  u8 *ptr = D_03004830;
  new_var = ptr[0x42] | 1;
  ptr[0x42] = new_var;
}

extern u8 D_0202DBD0[];
void sub_080017EC(s32);
void sub_0805C9A0(void *arg0, s32 arg1);
void sub_0805CF40(s32 arg0, u16 *arg1);
void sub_080257D8(void);
void sub_08025794(void);
