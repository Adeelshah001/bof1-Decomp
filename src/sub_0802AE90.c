extern s32 D_080F9808[];
void sub_080A0778(void *arg0, s32 arg1, s32 arg2);
void sub_0802AFAC(void *arg0, void *arg1);
void sub_0802AF8C(s32 arg0, void *arg1);
inline u8 inline_fn(u8 *arg0, int arg1)
{
  return arg0[arg1];
}

u8 sub_0802AE90(void *arg0, u8 arg1)
{
  u8 result = 0;
  u8 *a = (u8 *) arg0;
  if ((((*((u16 *) (a + 2))) + arg1) & 8) == inline_fn(a, 0x4E))
  {
    result = 1;
    a[0x4E] ^= 8;
  }
  if ((((*((u16 *) (a + 6))) + arg1) & 8) == inline_fn(a, 0x4F))
  {
    result += 2;
    a[0x4F] ^= 8;
  }
  return result;
}

void sub_0802B088(void *arg0, void *arg1);
void sub_0802B0C0(void *arg0, void *arg1);
