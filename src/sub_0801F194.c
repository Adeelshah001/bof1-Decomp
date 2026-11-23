extern u8 D_03000854[];
extern u8 D_030016E0[];
extern u8 D_030033D8[];
extern void sub_08037A74(s32);
extern void sub_0800312C(s32, s32);
extern void sub_08001F80(s32, s32, s32);
typedef struct 
{
  u8 pad00[6];
  u16 unk06;
} Unk16E0;
void sub_0801F194(void)
{
  u16 *a = (u16 *) 0x03000854;
  u32 v = ((u32) (*a)) + 1;
  *a = (u16) v;
  if ((((Unk16E0 *) 0x030016E0)->unk06 & 8) || ((v << 16) > 0x012B0000U))
  {
    sub_08037A74(0x400);
    sub_0800312C(0x10, 0);
    sub_08001F80(0, 0, 0);
    *((u8 *) 0x030033D8) = 3;
  }
}

