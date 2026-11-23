void sub_08056690(s32 arg0, void *arg1, s32 arg2);
s32 sub_08055F0C(void);
s32 sub_0805600C(s32 arg0);
void sub_08056A64(void *arg0, s32 arg1);
extern u8 D_03002AB0[];
void sub_08057200(s32 arg0, void *arg1);
unsigned int sub_08057228(s32 arg0, void *arg1)
{
  u8 *p = ((u8 *) arg1) + 0x101;
  u8 old = *p;
  *p = old + 1;
  if ((*p) == 0)
  {
    *p = old;
  }
  sub_08056690(arg0, arg1, 0x4F);
}

s32 sub_08057250(s32 arg0);
s32 sub_080570DC(s32 arg0);
