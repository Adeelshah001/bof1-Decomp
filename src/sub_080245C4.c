extern u8 D_03002AB0[];
extern u8 D_030033F0[];
extern u8 D_030023DC[];
void sub_08040A74(s32);
void sub_08024648(void);
void sub_08004EA0(s32);
s32 sub_08033420(void);
void sub_0802FD60(s32);
void sub_080245EC(void);
void sub_080245C4(void)
{
  u8 *p;
  u8 *new_var;
  new_var = D_030033F0;
  {
    u32 v = new_var[0];
    v |= 1;
    D_030033F0[0] = v;
  }
  ;
  D_03002AB0[0xB8] |= 0x40;
  sub_08024648();
}

void sub_08024718(void);
void sub_08024758(void);
