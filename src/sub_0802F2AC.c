typedef struct 
{
  u8 pad00[0xA4];
  u16 unkA4;
} StateBlock;
extern u8 D_030023E0[];
extern u8 D_0300248C[];
extern u8 D_03003418[];
extern u8 D_030043DC[];
void sub_08032AB0(u8 arg0);
s32 sub_0802F2AC(void *arg0)
{
  u8 *p = (u8 *) arg0;
  u8 b;
  u8 nb;
  u32 result;
  u16 w;
  b = p[0xBA];
  result = b & 1;
  w = ((StateBlock *) D_030023E0)->unkA4;
  if ((w != 0xFA) && (w != 0xEB))
  {
    nb = b & 0xED;
 do { } while (0);
    p[0xBA] = nb & 0xFE;
    p[0x3A] &= 0x7F;
    p[0x41] &= 0x0F;
  }
  return result;
}

s32 sub_0802F2F4(void *arg0);
s32 sub_0802EF4C(void *arg0);
s32 sub_0802EF00(void *arg0);
