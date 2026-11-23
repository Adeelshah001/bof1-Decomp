typedef struct 
{
  u16 unk0;
  u16 unk2;
  u16 unk4;
  u16 unk6;
} UnkObj2B8;

s32 sub_0802B920(UnkObj2B8 *arg0, UnkObj2B8 *arg1)
{
  u16 x = arg0->unk2;
  if (x <= 0xDFF)
  {
    arg1->unk2 = 0x1DF8;
    arg1->unk6 = arg0->unk6;
  }
  else
  {
    u16 y = arg0->unk6;
    arg1->unk2 = x + 0x1000;
    arg1->unk6 = y;
  }
  return 0;
}
