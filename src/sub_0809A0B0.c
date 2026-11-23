extern u8 sub_08038178(u8 *a, u16 *b);
extern void sub_0809A0E4(void *arg0);
void sub_0809A0B0(void *arg0)
{
  u8 *p = (u8 *) arg0;
  u32 *q;
  u8 new_var;
  u16 v;
  p[0x4C] = 2;
  if (1)
  {
    q = (u32 *) (p + 0x78);
    sub_08038178(arg0, (u16 *) (*q));
    new_var = p[0x61];
    v = (u16) ((new_var & 0xF0) << 8);
  }
  *((u16 *) (p + 0x44)) = v;
  sub_0809A0E4(arg0);
}

