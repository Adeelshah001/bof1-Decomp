typedef struct 
{
  u16 unk0;
  u16 unk2;
  u16 unk4;
  u16 unk6;
} UnkObj2B8;
s32 sub_0802B87C(UnkObj2B8 *arg0, UnkObj2B8 *arg1);
s32 sub_0802B8B0(UnkObj2B8 *arg0, UnkObj2B8 *arg1)
{
  u16 x = arg0->unk2;
  int new_var;
  new_var = 0x1A58;
  if (x <= 0x9FF)
  {
    u16 y = arg0->unk6;
    arg1->unk2 = new_var;
    arg1->unk6 = y;
  }
  else
  {
    arg1->unk2 = x + 0x1000;
    arg1->unk6 = arg0->unk6;
  }
  return 0;
}

