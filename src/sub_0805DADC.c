typedef struct 
{
  u8 pad00[0x108];
  u16 unk108;
} BattleUnit;
extern s32 (* const D_081006C4[])(u16, void *);
extern const u8 D_08100690[];
extern const u8 * const D_08100694[];
s32 sub_0805DADC(u16 arg0, void *arg1)
{
  long long new_var2;
  s32 ret;
  u16 new_var;
  new_var = arg0;
  if ((arg0 & 0xF00) == 0)
  {
    ret = 5;
  }
  else
    if (1)
  {
    new_var2 = D_081006C4[new_var >> 12](arg0, arg1);
    ret = new_var2;
  }
  return ret;
}

void sub_0805DBD8(BattleUnit *arg0, u16 arg1);
