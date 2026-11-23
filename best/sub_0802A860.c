extern u8 D_0202B1C0[];
typedef struct 
{
  u16 unk0;
  u16 unk2;
  u16 unk4;
  u8 pad6[0x2A - 0x06];
  u16 unk2A;
  u16 unk2C;
  u16 unk2E;
  u16 unk30;
  u16 unk32;
  u16 unk34;
  u16 unk36;
  u16 unk38;
  u16 unk3A;
  u16 unk3C;
  u16 unk3E;
  u16 unk40;
  u16 unk42;
} BattleStruct;
u16 sub_0802A860(u16 *arg0, BattleStruct *arg1)
{
  u16 val;
  u16 temp;
  BattleStruct *new_var2;
  int new_var3;
  u16 result;
  u16 temp2;
  u16 mask;
  int new_var;
  u32 base;
  val = arg1->unk3A;
  mask = 0x1F;
  temp = (mask & val) + 1;
  temp &= mask;
  new_var = (new_var3 = 0xFFE0);
  new_var = val & new_var;
  temp |= new_var;
  arg1->unk3A = temp;
  new_var2 = arg1;
  base = (u32) D_0202B1C0;
  result = (D_0202B1C0[temp] << 6) + new_var2->unk32;
  temp2 = *arg0;
  temp2 = (temp2 & 0xF800) ^ 0x800;
  temp2 |= arg1->unk40;
  *arg0 = temp2;
  return result;
}

