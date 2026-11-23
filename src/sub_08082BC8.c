extern u32 D_030040F0;
extern u32 D_03003FB0;
extern u32 D_03002500;
extern const u8 D_082D31BC[][1];
extern const u8 D_081A0E7C[];
extern u16 D_050001E0[];
void sub_0802B6D4(s32, s32);
typedef struct 
{
  u8 pad00[0x44];
  u32 unk44;
} Obj82BC8;
void sub_08082BC8(Obj82BC8 *arg0)
{
  u32 *p = &D_030040F0;
  u32 zero = 0;
  s32 idx;
  u32 palOffset;
  const u8 *base;
  u16 *dst;
  u16 *src;
  *p = zero;
  D_03003FB0 = zero;
  D_03002500 = zero;
  idx = (0xFF & (arg0->unk44 >> 8)) * 4;
  palOffset = D_082D31BC[idx + 2][0] | (D_082D31BC[idx + 3][0] << 8);
  sub_0802B6D4(D_082D31BC[idx][0] | (D_082D31BC[idx + 1][0] << 8), 0x4A80);
  base = D_081A0E7C;
  dst = D_050001E0;
  src = (u16 *) (base + palOffset);
  for (idx = 0; idx < 4; idx++)
  {
    *dst = *src;
    dst += 4;
    src++;
  }

}

