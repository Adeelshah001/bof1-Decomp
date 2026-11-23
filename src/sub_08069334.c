extern u8 D_03004620[];
extern u16 D_030016E0[];
void sub_080379D4(s32);
s32 sub_08068B00(void);
s32 sub_080692C4(void);
s32 sub_08069268(void);
s32 sub_08069334(void)
{
  u16 flags;
  u8 *ptr;
  if (2 & D_030016E0[3])
  {
    sub_080379D4(3);
    ptr = D_03004620;
    ptr[3] = 0;
  }
  else
    if (1 & D_030016E0[3])
  {
    sub_080379D4(2);
    ptr = D_03004620;
    ptr[3] = 8;
  }
  else
  {
    return 0;
  }
  return 0;
}

