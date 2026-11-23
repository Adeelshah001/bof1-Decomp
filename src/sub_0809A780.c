void sub_08038178(u8 *, u32);
void sub_0809A0E4(u8 *);
inline u8 inline_fn(u8 *arg0, int arg1)
{
  return arg0[arg1];
}

void sub_0809A780(u8 *arg0)
{
  u16 v = 0x160;
  s32 val;
  *((u16 *) (arg0 + 0x38)) = v;
  arg0[0x4C] = 2;
  sub_08038178(arg0, *((u32 *) (arg0 + 0x78)));
  val = (inline_fn(arg0, 0x61) & 0xF0) << 8;
  *((u16 *) (arg0 + 0x44)) = val;
  sub_0809A0E4(arg0);
}

void sub_0809A5D0(u8 *arg0);
