extern u8 D_03002AB0[];
extern u8 D_030023E0[];
typedef struct 
{
  u8 pad00[0x4C];
  u8 unk4C;
  u8 unk4D;
  u8 pad4E[2];
  u16 unk50;
} UnkStruct_A;
typedef struct 
{
  u8 pad00[0xA4];
  u16 unkA4;
} UnkStruct_B;
s32 sub_080374C0(void)
{
  s32 result = 0;
  UnkStruct_A *a = (UnkStruct_A *) D_03002AB0;
  if (a->unk4C != 0)
  {
    UnkStruct_B *b = (UnkStruct_B *) D_030023E0;
    if (((u16) (b->unkA4 - -0xFFFFFEFB)) <= 3U)
    {
      a->unk4D = 0x14;
      a->unk50 = 0;
      if (((!a) && (!a)) && (!a))
      {
      }
      result = 1;
    }
  }
  return result;
}

