extern u8 D_0202DBD0[];
inline int inline_fn(u32 arg0)
{
  return arg0 + 0x204;
}

u16 sub_08073844(s32 arg0)
{
  u32 shifted = ((u32) arg0) << 24;
  u32 base = (u32) D_0202DBD0;
  u32 idx = shifted >> 23;
  u32 addr = idx + inline_fn(base);
  return *((u16 *) addr);
}

